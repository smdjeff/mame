// license:BSD-3-Clause
// copyright-holders:Aaron Giles
//
// Bit-exact C++ port of the z80gpu 3D accelerator's real fixed-point
// algorithm -- NOT this driver's existing idealized double-precision
// CORDIC (cordic_project_point_w/cordic_cross_sign_w etc., segag80v_cordic.h, which
// intentionally model a zero-cost, full-double-precision coprocessor).
// This header mirrors z80gpu's src/accel_arith.v quarter-wave sin/cos ROM,
// src/accel_rotate.v's STAGE1_ROTATE formula, and src/accel_cull.v's
// STAGE2_CULL cross-sign formula, instruction for instruction.
//
// VENDORED, not shared by build reference: this file is a byte-for-byte
// copy of z80gpu/sim/model/z80gpu_accel_model.h (a separate repository/
// build tree with no dependency relationship to MAME's own build) kept in
// sync by hand. If you change the algorithm on one side, change it on the
// other and re-run z80gpu's `make check-accel-model` to confirm the two
// (plus the RTL itself, which that same check cross-validates against)
// still agree bit-for-bit.
//
// Every truncation point here is deliberate and must stay in lockstep
// with the RTL: C++'s `>>` on a signed negative int is implementation-
// defined by the standard, but is arithmetic (sign-extending) on every
// real-world two's-complement target this project builds for (matches
// what this driver's own CORDIC code already assumes elsewhere), and an
// explicit cast to a narrower signed integer type is plain two's-
// complement truncation (low bits kept, NOT saturation) -- exactly what a
// Verilog assignment to a narrower reg does on the RTL side. Do not "fix"
// these into saturating/rounding forms; that would silently break
// bit-exactness against the RTL.
#ifndef MAME_SEGA_SEGAG80V_Z80GPU_ACCEL_H
#define MAME_SEGA_SEGAG80V_Z80GPU_ACCEL_H

#pragma once

#include <cstdint>
#include <cstddef>
#include <algorithm> // std::sort, build_vecbuf_clip's interval sort

namespace z80gpu_accel {

// Same 256-entry quarter-wave table as accel_arith.v's sincos_rom --
// rom[pos] = round(127 * sin(pos/256 * 90deg)) for pos = 0..255.
inline const uint8_t kSinCosRom[256] = {
      0,   1,   2,   2,   3,   4,   5,   5,   6,   7,   8,   9,   9,  10,  11,  12,
     12,  13,  14,  15,  16,  16,  17,  18,  19,  19,  20,  21,  22,  22,  23,  24,
     25,  26,  26,  27,  28,  29,  29,  30,  31,  32,  32,  33,  34,  35,  35,  36,
     37,  38,  38,  39,  40,  41,  41,  42,  43,  44,  44,  45,  46,  46,  47,  48,
     49,  49,  50,  51,  51,  52,  53,  54,  54,  55,  56,  56,  57,  58,  58,  59,
     60,  61,  61,  62,  63,  63,  64,  65,  65,  66,  67,  67,  68,  69,  69,  70,
     71,  71,  72,  72,  73,  74,  74,  75,  76,  76,  77,  78,  78,  79,  79,  80,
     81,  81,  82,  82,  83,  84,  84,  85,  85,  86,  86,  87,  88,  88,  89,  89,
     90,  90,  91,  91,  92,  93,  93,  94,  94,  95,  95,  96,  96,  97,  97,  98,
     98,  99,  99, 100, 100, 101, 101, 102, 102, 102, 103, 103, 104, 104, 105, 105,
    106, 106, 106, 107, 107, 108, 108, 109, 109, 109, 110, 110, 111, 111, 111, 112,
    112, 112, 113, 113, 113, 114, 114, 114, 115, 115, 115, 116, 116, 116, 117, 117,
    117, 118, 118, 118, 118, 119, 119, 119, 120, 120, 120, 120, 121, 121, 121, 121,
    122, 122, 122, 122, 122, 123, 123, 123, 123, 123, 124, 124, 124, 124, 124, 124,
    125, 125, 125, 125, 125, 125, 125, 126, 126, 126, 126, 126, 126, 126, 126, 126,
    126, 126, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127, 127,
};

// Quadrant-fold, matching accel_arith.v's sincos_rom module exactly:
// angle[9:8] selects the quadrant, angle[7:0] the position within it.
inline void sincos_q7(uint16_t angle, int8_t &sin_q7, int8_t &cos_q7)
{
    angle &= 0x03FF;
    uint8_t quad = (angle >> 8) & 3;
    uint8_t pos  = angle & 0xFF;
    uint8_t posc = 255 - pos;
    int8_t rom_pos  = (int8_t)kSinCosRom[pos];
    int8_t rom_posc = (int8_t)kSinCosRom[posc];
    switch (quad) {
        case 0: sin_q7 =  rom_pos;  cos_q7 =  rom_posc; break;
        case 1: sin_q7 =  rom_posc; cos_q7 = -rom_pos;  break;
        case 2: sin_q7 = -rom_pos;  cos_q7 = -rom_posc; break;
        default: sin_q7 = -rom_posc; cos_q7 =  rom_pos; break;
    }
}

// Arithmetic-shift-right-7-then-truncate-to-int8, matching accel_rotate.v's
// `wide >>> 7` assigned into a signed [7:0] reg (and game.c's own
// `(int8_t)(x >> 7)` cast semantics): full-precision shift, then plain
// two's-complement truncation, NOT saturation.
inline int8_t trunc8(int32_t wide)
{
    return (int8_t)(wide >> 7);
}

struct RotatedVertex {
    int16_t px, py;          // real-world scale (px8/py8 << shift)
    int8_t  px8, py8, pz8;   // shrunk, rotated -- everything downstream operates in this precision
};

// Bit-exact port of accel_rotate.v's per-vertex S_SHIFT/S_YAW/S_PITCH
// sequence (itself the hardware form of sega-vector/3d/game.c's
// xy_project_array software-fallback formula, game.c:442-455). vx,vy,vz
// are the raw int16 local-space vertex coordinates; yaw/pitch are 10-bit
// SEGA angle units (1024 = 360deg); shift is accel_rotate's coord_shift.
inline RotatedVertex rotate_project(int16_t vx, int16_t vy, int16_t vz,
                                     uint16_t yaw, uint16_t pitch, uint8_t shift)
{
    int8_t xs = (int8_t)(vx >> shift);
    int8_t ys = (int8_t)(vy >> shift);
    int8_t zs = (int8_t)(vz >> shift);

    int8_t s_yaw, c_yaw;
    sincos_q7(yaw, s_yaw, c_yaw);

    int32_t x1_wide = (int32_t)xs * c_yaw + (int32_t)zs * s_yaw;
    int32_t z1_wide = (int32_t)zs * c_yaw - (int32_t)xs * s_yaw;
    int8_t x1 = trunc8(x1_wide);
    int8_t z1 = trunc8(z1_wide);

    int8_t s_pitch, c_pitch;
    sincos_q7(pitch, s_pitch, c_pitch);

    int32_t z2_wide = (int32_t)z1 * c_pitch + (int32_t)ys * s_pitch;
    int32_t y1_wide = (int32_t)ys * c_pitch - (int32_t)z1 * s_pitch;
    int8_t z2 = trunc8(z2_wide);
    int8_t y1 = trunc8(y1_wide);

    RotatedVertex out;
    out.px8 = x1;
    out.py8 = y1;
    out.pz8 = z2;
    out.px  = (int16_t)((int32_t)x1 << shift);
    out.py  = (int16_t)((int32_t)y1 << shift);
    return out;
}

// Bit-exact port of accel_cull.v's STAGE2_CULL cross-sign test: front-
// facing (per the same winding convention as sega-vector/3d/game.c's
// xy_cross_negative) iff dx1*dy2 - dy1*dx2 < 0, computed here as a direct
// comparison (dx1*dy2 < dy1*dx2) to match accel_cull.v's own
// `prod0 < mul_p` formulation exactly, rather than a wider subtract. The
// deltas are computed in int32_t from the raw int8 corner points (NOT
// pre-subtracted in int8_t by the caller) -- see the RTL header for the
// wraparound bug this avoids.
inline bool cross_negative(int8_t ax, int8_t ay, int8_t bx, int8_t by, int8_t cx, int8_t cy)
{
    int32_t dx1 = (int32_t)bx - ax;
    int32_t dy1 = (int32_t)by - ay;
    int32_t dx2 = (int32_t)cx - ax;
    int32_t dy2 = (int32_t)cy - ay;
    int64_t prod0 = (int64_t)dx1 * dy2;
    int64_t prod1 = (int64_t)dy1 * dx2;
    return prod0 < prod1;
}

struct RectToPolar {
    uint8_t  magnitude;
    uint16_t angle;
};

// Bit-exact port of accel_arith.v's rect_to_polar module: a CORDIC
// vectoring-mode iterator converting (dx,dy) to magnitude+angle in SEGA's
// 10-bit angle convention. x/y are widened well beyond the RTL's 24-bit
// registers (int64_t here vs [23:0] there) purely as safety headroom --
// the CORDIC gain is bounded (~1.647x max over 10 iterations) so the real
// values never approach either width's limit, and this header's other
// model functions use the same "wider than the RTL, never itself a source
// of divergence" convention (see this header's own comment on truncation
// points). x is seeded from dy and y from dx (not the more usual x from
// dx) -- matches accel_arith.v exactly, a consequence of the SEGA angle
// convention (0deg = "up") rather than a standard atan2 x-axis.
inline RectToPolar rect_to_polar(int16_t dx, int16_t dy)
{
    constexpr int     FRAC = 6;
    constexpr int     N    = 10;
    constexpr int64_t SCALE_CONST = 39797; // Q16, 1/CORDIC-gain
    static const uint8_t kAtanLut[10] = { 128, 76, 40, 20, 10, 5, 3, 1, 1, 0 };

    int64_t x, y;
    uint16_t angle_offset;
    if (dy < 0) {
        x = (int64_t)(-(int32_t)dy) << FRAC;
        y = (int64_t)(-(int32_t)dx) << FRAC;
        angle_offset = 512;
    } else {
        x = (int64_t)dy << FRAC;
        y = (int64_t)dx << FRAC;
        angle_offset = 0;
    }

    int32_t acc_angle = 0;
    for (int iter = 0; iter < N; iter++) {
        int64_t y_shifted = y >> iter;
        int64_t x_shifted = x >> iter;
        if (y > 0) {
            x = x + y_shifted;
            y = y - x_shifted;
            acc_angle += kAtanLut[iter];
        } else {
            x = x - y_shifted;
            y = y + x_shifted;
            acc_angle -= kAtanLut[iter];
        }
    }

    int64_t mag_wide    = x * SCALE_CONST;
    int64_t mag_shifted = mag_wide >> (16 + FRAC);
    uint8_t magnitude   = (mag_shifted < 0) ? 0 : (mag_shifted > 255 ? 255 : (uint8_t)mag_shifted);
    // matches accel_arith.v's `angle <= angle_offset + acc_angle[9:0];` into
    // a 10-bit reg -- (a+b) mod 1024 doesn't care which operand gets masked
    // first, so adding then masking (rather than masking acc_angle alone
    // before adding angle_offset) is equivalent and simpler here.
    uint16_t angle = (uint16_t)(angle_offset + acc_angle) & 0x03FF;

    RectToPolar out;
    out.magnitude = magnitude;
    out.angle     = angle;
    return out;
}

// Per-shape metadata + the fixed byte layout of the 3-shape shape_mem
// image (accel_shape_mem.v, 4KB, all three demo shapes resident at once).
// Each shape's blob is verts, faces, face_colors, edges, edge_colors,
// part_face_end concatenated in that order at consecutive offsets;
// edge_colors is always stored (0xFF-filled where a shape has no
// override) so there's no null-pointer-style special case.
struct ShapeInfo {
    const char *name;
    uint16_t base;           // shape_mem offset of verts[0].x
    uint8_t  vertex_count;
    uint8_t  face_count;
    uint8_t  edge_count;
    uint8_t  part_count;
    uint8_t  coord_shift;
    uint16_t verts_off, faces_off, face_colors_off, edges_off, edge_colors_off, part_face_end_off;
};

enum ShapeId : uint8_t { SHAPE_CUBE = 0, SHAPE_ENTERPRISE = 1, SHAPE_LEGOMAN = 2, SHAPE_COUNT = 3 };

inline const ShapeInfo kShapes[SHAPE_COUNT] = {
    // name         base  nverts nfaces nedges nparts shift  verts  faces  fcolor  edges  ecolor  pfend
    { "cube",          0,     8,     6,    12,     0,     0,     0,    48,     72,    78,    126,   138 },
    { "enterprise",  138,   110,    96,   212,     4,     1,   138,   798,   1182,  1278,   2126,  2338 },
    { "legoman",    2342,    62,    38,    87,     6,     1,  2342,  2714,   2866,  2904,   3252,  3339 },
};

// Bit-exact port of accel_vecbuild.v: walks every edge, draws it if at
// least one adjacent face is visible, no per-part hidden-line removal
// (backface-cull-only). Not the active path (see build_vecbuf_clip below);
// kept as a reference model matching accel_vecbuild.v, which is itself
// kept in the RTL for the same reason. `shape_mem` is the full shape_mem
// byte image (only edges_off/face_colors_off/edge_colors_off bytes are
// actually read); `face_vis` is STAGE2_CULL's output bitmap; `px`/`py` are
// STAGE1_ROTATE's real-world-scale per-vertex output. Writes up to
// edge_count*3 vector_t records (4 bytes each: color, magnitude, angle_lo,
// angle_hi -- matching sega-vector/3d/vector_t's own layout) into `dest`
// and returns the count actually written.
inline uint16_t build_vecbuf(const uint8_t *shape_mem, const uint8_t *face_vis,
                              const int16_t *px, const int16_t *py,
                              uint16_t edges_off, uint16_t face_colors_off, uint16_t edge_colors_off,
                              uint8_t edge_count, uint8_t *dest)
{
    constexpr uint8_t COLOR_CLEAR     = 0x00;
    constexpr uint8_t COLOR_LAST      = 0x80;
    constexpr uint8_t EDGE_COLOR_NONE = 0xFF;

    auto emit = [&](uint16_t idx, uint8_t color, RectToPolar r) {
        dest[idx * 4 + 0] = color;
        dest[idx * 4 + 1] = r.magnitude;
        dest[idx * 4 + 2] = (uint8_t)r.angle;
        dest[idx * 4 + 3] = (uint8_t)(r.angle >> 8);
    };

    int16_t  penx = 0, peny = 0;
    uint16_t write_idx = 0;
    bool     have_last = false;
    uint16_t last_idx  = 0;

    for (uint8_t i = 0; i < edge_count; i++) {
        uint16_t ea = edges_off + i * 4;
        uint8_t v0 = shape_mem[ea + 0], v1 = shape_mem[ea + 1];
        uint8_t faceA = shape_mem[ea + 2], faceB = shape_mem[ea + 3];

        bool fv_a = (face_vis[faceA >> 3] >> (faceA & 7)) & 1;
        bool fv_b = (face_vis[faceB >> 3] >> (faceB & 7)) & 1;
        if (!fv_a && !fv_b) continue;

        uint8_t chosen_color   = shape_mem[face_colors_off + (fv_a ? faceA : faceB)];
        uint8_t edge_color_ovr = shape_mem[edge_colors_off + i];

        int16_t px_v0 = px[v0], py_v0 = py[v0];
        int16_t px_v1 = px[v1], py_v1 = py[v1];

        if (px_v0 != penx || py_v0 != peny) {
            int16_t dx = (int16_t)(px_v0 - penx);
            int16_t dy = (int16_t)(py_v0 - peny);
            if (dx > 160 || dx < -160 || dy > 160 || dy < -160) {
                int16_t hop1_dx = dx >> 1, hop1_dy = dy >> 1; // matches >>>1, arithmetic
                int16_t hop2_dx = (int16_t)(dx - hop1_dx), hop2_dy = (int16_t)(dy - hop1_dy);
                emit(write_idx++, COLOR_CLEAR, rect_to_polar(hop1_dx, hop1_dy));
                emit(write_idx++, COLOR_CLEAR, rect_to_polar(hop2_dx, hop2_dy));
            } else {
                emit(write_idx++, COLOR_CLEAR, rect_to_polar(dx, dy));
            }
        }

        int16_t ddx = (int16_t)(px_v1 - px_v0), ddy = (int16_t)(py_v1 - py_v0);
        uint8_t drawn_color = (edge_color_ovr != EDGE_COLOR_NONE) ? edge_color_ovr : chosen_color;
        emit(write_idx, drawn_color, rect_to_polar(ddx, ddy));
        last_idx  = write_idx;
        have_last = true;
        write_idx++;

        penx = px_v1;
        peny = py_v1;
    }

    if (have_last) dest[last_idx * 4 + 0] |= COLOR_LAST;
    return write_idx;
}

// Q15 fixed-point divider: quotient = trunc(|numerator|*32768/
// |denominator|), sign-applied, saturating to the format's extremes
// (32767/-32768) whenever the true magnitude would need an integer part
// (|result|>=1.0) or denominator==0 -- bit-exact port of
// z80gpu/src/accel_arith.v's fixed_div (see that module's own header for
// why saturation, never wraparound, is the correct behavior here: a
// saturated result still correctly fails the caller's lo<=hi containment
// test, same as a mathematically exact huge value would).
inline int16_t fixed_div_q15(int64_t numerator, int64_t denominator)
{
    bool result_sign = (numerator < 0) != (denominator < 0);
    if (denominator == 0)
        return result_sign ? (int16_t)-32768 : (int16_t)32767;
    uint64_t abs_num = (numerator < 0) ? (uint64_t)(-numerator) : (uint64_t)numerator;
    uint64_t abs_den = (denominator < 0) ? (uint64_t)(-denominator) : (uint64_t)denominator;
    uint64_t quot = (abs_num << 15) / abs_den;
    if (quot > 32767)
        return result_sign ? (int16_t)-32768 : (int16_t)32767;
    return result_sign ? (int16_t)(-(int32_t)quot) : (int16_t)quot;
}

// Silhouette half-plane clip of segment (p0x,p0y)-(p1x,p1y) against
// convex polygon (poly_x,poly_y,nverts), in int8 rotated space -- bit-
// exact port of accel_clip.v's S_SIL_SETUP/S_SIL_DIV/S_SIL_APPLY loop
// (itself segag80v_cordic.h's own clip_to_polygon/clip_halfplane, redone
// in Q15 fixed point instead of double). Returns false the moment the
// [lo,hi] interval becomes empty (matches the RTL's early exit to
// S_NEXT_FACE), same as segag80v_cordic.h's own clip_to_polygon.
inline bool clip_to_polygon_q15(const int8_t *poly_x, const int8_t *poly_y, int nverts,
                                 int8_t p0x, int8_t p0y, int8_t p1x, int8_t p1y,
                                 int16_t &lo, int16_t &hi)
{
    for (int i = 0; i < nverts; i++) {
        int ni = (i + 1 == nverts) ? 0 : i + 1;
        int32_t edx = (int32_t)poly_x[ni] - poly_x[i];
        int32_t edy = (int32_t)poly_y[ni] - poly_y[i];
        int32_t A = edx * ((int32_t)p0y - poly_y[i]) - edy * ((int32_t)p0x - poly_x[i]);
        int32_t B = edx * ((int32_t)p1y - p0y) - edy * ((int32_t)p1x - p0x);
        if (B == 0) {
            if (A >= 0) return false;
            continue;
        }
        int16_t troot = fixed_div_q15(-(int64_t)A, (int64_t)B);
        if (B > 0) { if (troot < hi) hi = troot; }
        else       { if (troot > lo) lo = troot; }
        if (lo > hi) return false;
    }
    return true;
}

// Raw (signed) triple-product depth value for candidate face (f0,f1,f2)
// and query point q, all in int8 rotated space -- bit-exact port of
// accel_clip.v's d_nx/d_ny/d_nz/dot0/dot1 combinational expressions
// (equivalently, segag80v_cordic.h's own plane_dot, in fixed point).
// dot<0 means q is behind the face's plane (occluded).
inline int32_t plane_dot_q15(int8_t f0x, int8_t f0y, int8_t f0z,
                              int8_t f1x, int8_t f1y, int8_t f1z,
                              int8_t f2x, int8_t f2y, int8_t f2z,
                              int8_t qx, int8_t qy, int8_t qz)
{
    int32_t ux = (int32_t)f1x - f0x, uy = (int32_t)f1y - f0y, uz = (int32_t)f1z - f0z;
    int32_t vx = (int32_t)f2x - f0x, vy = (int32_t)f2y - f0y, vz = (int32_t)f2z - f0z;
    int32_t nx = uy * vz - uz * vy;
    int32_t ny = uz * vx - ux * vz;
    int32_t nz = ux * vy - uy * vx;
    int32_t dx = (int32_t)qx - f0x, dy = (int32_t)qy - f0y, dz = (int32_t)qz - f0z;
    return nx * dx + ny * dy + nz * dz;
}

// Bit-exact port of accel_clip.v (STAGE3_CLIP, exact per-part hidden-line
// removal) -- the active path (see z80gpu_run_frame, segag80v.cpp). Same
// signature shape as build_vecbuf above, plus the extra shape metadata
// (faces_off, part_face_end_off, part_count) accel_clip.v needs to find
// candidate occluder faces; px8/py8/pz8 are STAGE1_ROTATE's own int8
// rotated/shrunk per-vertex output (accel_scratch_mem's SCR_PX8/PY8/PZ8
// arrays), same array indexing shape_mem's vertex indices already use.
//
// Occluded-interval bookkeeping is bounded to MAX_INTERVALS(8), NOT the
// idealized segag80v_cordic.h's unbounded std::vector -- this function's
// whole purpose is bit-for-bit hardware fidelity, including accel_clip.v's
// own "9th+ distinct occluded interval on one edge is simply dropped"
// policy (never expected to trigger for these 3 shapes' real part counts,
// see accel_clip.v's own header) -- unlike that idealized model, which
// deliberately has no such cap.
inline uint16_t build_vecbuf_clip(const uint8_t *shape_mem, const uint8_t *face_vis,
                                   const uint8_t *px8, const uint8_t *py8, const uint8_t *pz8,
                                   const int16_t *px, const int16_t *py,
                                   uint16_t edges_off, uint16_t faces_off,
                                   uint16_t face_colors_off, uint16_t edge_colors_off,
                                   uint16_t part_face_end_off,
                                   uint8_t edge_count, uint8_t part_count,
                                   uint16_t dest_max, uint8_t *dest)
{
    constexpr uint8_t  COLOR_CLEAR     = 0x00;
    constexpr uint8_t  COLOR_LAST      = 0x80;
    constexpr uint8_t  EDGE_COLOR_NONE = 0xFF;
    constexpr int      MAX_INTERVALS   = 8;
    constexpr int16_t  Q15_ZERO        = 0;
    constexpr int16_t  Q15_ONE         = 32767; // ~1.0, see fixed_div_q15's own note on this Q15 boundary

    auto fv = [&](uint8_t f) -> bool { return (face_vis[f >> 3] >> (f & 7)) & 1; };
    auto i8 = [](const uint8_t *arr, uint8_t idx) -> int8_t { return (int8_t)arr[idx]; };

    uint16_t write_idx = 0;
    bool     have_last = false;
    uint16_t last_idx  = 0;
    int16_t  penx = 0, peny = 0;

    auto emit = [&](uint8_t color, int16_t dx, int16_t dy) -> bool {
        if (write_idx >= dest_max) return false;
        RectToPolar r = rect_to_polar(dx, dy);
        dest[write_idx * 4 + 0] = color;
        dest[write_idx * 4 + 1] = r.magnitude;
        dest[write_idx * 4 + 2] = (uint8_t)r.angle;
        dest[write_idx * 4 + 3] = (uint8_t)(r.angle >> 8);
        write_idx++;
        return true;
    };

    for (uint8_t i = 0; i < edge_count; i++) {
        uint16_t ea = edges_off + i * 4;
        uint8_t v0 = shape_mem[ea + 0], v1 = shape_mem[ea + 1];
        uint8_t faceA = shape_mem[ea + 2], faceB = shape_mem[ea + 3];

        bool fv_a = fv(faceA), fv_b = fv(faceB);
        if (!fv_a && !fv_b) continue;

        uint8_t chosen_color   = shape_mem[face_colors_off + (fv_a ? faceA : faceB)];
        uint8_t edge_color_ovr = shape_mem[edge_colors_off + i];

        int8_t v0x8 = i8(px8, v0), v0y8 = i8(py8, v0), v0z8 = i8(pz8, v0);
        int8_t v1x8 = i8(px8, v1), v1y8 = i8(py8, v1), v1z8 = i8(pz8, v1);
        int16_t px_v0 = px[v0], py_v0 = py[v0], px_v1 = px[v1], py_v1 = py[v1];

        // which part owns faceA/faceB -- found by range membership against
        // each part's own [start,end) as we consider skipping it (same as
        // accel_clip.v's S_PART_SKIP_CHECK; no face_part[] table).
        int16_t occ_lo[MAX_INTERVALS], occ_hi[MAX_INTERVALS];
        int     occ_count = 0;

        uint8_t part_start = 0;
        for (uint8_t p = 0; p < part_count; p++) {
            uint8_t part_end = shape_mem[part_face_end_off + p];
            bool owns_edge_face = (faceA >= part_start && faceA < part_end) ||
                                   (faceB >= part_start && faceB < part_end);
            if (!owns_edge_face) {
                for (uint8_t j = part_start; j < part_end; j++) {
                    if (!fv(j)) continue;

                    uint16_t fa = faces_off + j * 4;
                    uint8_t cf_v[4] = { shape_mem[fa+0], shape_mem[fa+1], shape_mem[fa+2], shape_mem[fa+3] };
                    bool is_quad = (cf_v[3] != cf_v[2]);
                    int  nverts  = is_quad ? 4 : 3;

                    int8_t cfx8[4], cfy8[4], cfz8[3];
                    for (int k = 0; k < nverts; k++) {
                        cfx8[k] = i8(px8, cf_v[k]);
                        cfy8[k] = i8(py8, cf_v[k]);
                    }
                    for (int k = 0; k < 3; k++) cfz8[k] = i8(pz8, cf_v[k]);

                    int16_t lo = Q15_ZERO, hi = Q15_ONE;
                    if (!clip_to_polygon_q15(cfx8, cfy8, nverts, v0x8, v0y8, v1x8, v1y8, lo, hi))
                        continue;

                    int32_t dot0 = plane_dot_q15(cfx8[0],cfy8[0],cfz8[0], cfx8[1],cfy8[1],cfz8[1],
                                                  cfx8[2],cfy8[2],cfz8[2], v0x8,v0y8,v0z8);
                    int32_t dot1 = plane_dot_q15(cfx8[0],cfy8[0],cfz8[0], cfx8[1],cfy8[1],cfz8[1],
                                                  cfx8[2],cfy8[2],cfz8[2], v1x8,v1y8,v1z8);
                    int32_t A = dot0, B = dot1 - dot0;
                    if (B == 0) {
                        if (A >= 0) continue; // constant, in front -- no occlusion from this face
                        // else: constant, behind -- whole [lo,hi] occluded, fall through to record
                    } else {
                        int16_t troot = fixed_div_q15(-(int64_t)A, (int64_t)B);
                        if (B > 0) { if (troot < hi) hi = troot; }
                        else       { if (troot > lo) lo = troot; }
                        if (lo > hi) continue;
                    }

                    if (hi > lo && occ_count < MAX_INTERVALS) {
                        occ_lo[occ_count] = lo;
                        occ_hi[occ_count] = hi;
                        occ_count++;
                    }
                }
            }
            part_start = part_end;
        }

        // sort + merge (matches accel_clip.v's S_SORT/S_MERGE; std::sort's
        // instability on tied `lo` values doesn't matter here -- merging
        // unions overlapping intervals regardless of which tied entry
        // comes first, see accel_clip.v's own header on this)
        {
            struct IV { int16_t lo, hi; };
            IV iv[MAX_INTERVALS];
            for (int k = 0; k < occ_count; k++) { iv[k].lo = occ_lo[k]; iv[k].hi = occ_hi[k]; }
            std::sort(iv, iv + occ_count, [](const IV &a, const IV &b) { return a.lo < b.lo; });
            for (int k = 0; k < occ_count; k++) { occ_lo[k] = iv[k].lo; occ_hi[k] = iv[k].hi; }
        }
        int16_t merged_lo[MAX_INTERVALS], merged_hi[MAX_INTERVALS];
        int     merged_count = 0;
        if (occ_count > 0) {
            int16_t cur_lo = occ_lo[0], cur_hi = occ_hi[0];
            for (int k = 1; k < occ_count; k++) {
                if (occ_lo[k] <= cur_hi) {
                    if (occ_hi[k] > cur_hi) cur_hi = occ_hi[k];
                } else {
                    merged_lo[merged_count] = cur_lo; merged_hi[merged_count] = cur_hi; merged_count++;
                    cur_lo = occ_lo[k]; cur_hi = occ_hi[k];
                }
            }
            merged_lo[merged_count] = cur_lo; merged_hi[merged_count] = cur_hi; merged_count++;
        }

        // complement -> visible sub-intervals (matches S_COMPLEMENT)
        int16_t vis_lo[MAX_INTERVALS + 1], vis_hi[MAX_INTERVALS + 1];
        int     vis_count = 0;
        int16_t cursor = Q15_ZERO;
        for (int k = 0; k < merged_count; k++) {
            if (merged_lo[k] > cursor) {
                vis_lo[vis_count] = cursor;
                vis_hi[vis_count] = merged_lo[k];
                vis_count++;
            }
            if (merged_hi[k] > cursor) cursor = merged_hi[k];
        }
        if (cursor < Q15_ONE) {
            vis_lo[vis_count] = cursor;
            vis_hi[vis_count] = Q15_ONE;
            vis_count++;
        }

        // emit each visible sub-segment (matches S_EMIT_T0..S_EMIT_NEXT):
        // t=Q15_ONE is only an approximation of 1.0 (32768 doesn't fit
        // signed 16-bit), so a visible bound that's genuinely the edge's
        // true endpoint uses the exact px_v1/py_v1 rather than a rounded
        // interpolation -- otherwise consecutive edges sharing a vertex
        // would spuriously need a pen-up move between them (see
        // accel_clip.v's own header on this, found via its testbench).
        auto lerp16 = [](int16_t v0, int16_t v1, int16_t t) -> int16_t {
            return (int16_t)(v0 + (int16_t)(((int32_t)t * (int32_t)(v1 - v0)) >> 15));
        };
        bool overflowed = false;
        for (int s = 0; s < vis_count && !overflowed; s++) {
            int16_t seg_x0 = (vis_lo[s] == Q15_ONE) ? px_v1 : lerp16(px_v0, px_v1, vis_lo[s]);
            int16_t seg_y0 = (vis_lo[s] == Q15_ONE) ? py_v1 : lerp16(py_v0, py_v1, vis_lo[s]);
            int16_t seg_x1 = (vis_hi[s] == Q15_ONE) ? px_v1 : lerp16(px_v0, px_v1, vis_hi[s]);
            int16_t seg_y1 = (vis_hi[s] == Q15_ONE) ? py_v1 : lerp16(py_v0, py_v1, vis_hi[s]);

            if (seg_x0 != penx || seg_y0 != peny) {
                int16_t dx = (int16_t)(seg_x0 - penx), dy = (int16_t)(seg_y0 - peny);
                if (dx > 160 || dx < -160 || dy > 160 || dy < -160) {
                    int16_t hop1_dx = dx >> 1, hop1_dy = dy >> 1;
                    int16_t hop2_dx = (int16_t)(dx - hop1_dx), hop2_dy = (int16_t)(dy - hop1_dy);
                    if (!emit(COLOR_CLEAR, hop1_dx, hop1_dy)) { overflowed = true; break; }
                    if (!emit(COLOR_CLEAR, hop2_dx, hop2_dy)) { overflowed = true; break; }
                } else {
                    if (!emit(COLOR_CLEAR, dx, dy)) { overflowed = true; break; }
                }
            }

            uint8_t drawn_color = (edge_color_ovr != EDGE_COLOR_NONE) ? edge_color_ovr : chosen_color;
            last_idx  = write_idx;
            have_last = true;
            if (!emit(drawn_color, (int16_t)(seg_x1 - seg_x0), (int16_t)(seg_y1 - seg_y0))) { overflowed = true; break; }
            penx = seg_x1;
            peny = seg_y1;
        }
        if (overflowed) break;
    }

    if (have_last) dest[last_idx * 4 + 0] |= COLOR_LAST;
    return write_idx;
}

} // namespace z80gpu_accel

#endif // MAME_SEGA_SEGAG80V_Z80GPU_ACCEL_H
