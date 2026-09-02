// license:BSD-3-Clause
// copyright-holders:Aaron Giles
//
// DISABLED, NOT COMPILED: not #include'd from segag80v.cpp; its ports,
// handler declarations, and member state were removed from
// main_portmap()/segag80v.h. Kept on disk as reference; restore via git
// history if needed again.
//
// See each handler's own comment below for its specific wire protocol,
// load/run split, and hidden-line algorithm (Roberts' 1963).

#ifndef MAME_SEGA_SEGAG80V_CORDIC_H
#define MAME_SEGA_SEGAG80V_CORDIC_H

#pragma once

// magnitude (clamped to the 8-bit output register) and angle (10-bit fraction
// of a turn, 0 = +y axis, 256 = +x axis) of (dx,dy)
static void polarToVector( int16_t dx, int16_t dy, u8 *magnitude, u16 *direction )
{
	double mag = std::hypot( (double)dx, (double)dy );
	*magnitude = (u8)std::min( 255.0, std::round( mag ) );

	if ( dx == 0 && dy == 0 ) {
		*direction = 0;
		return;
	}

	double turns = std::atan2( (double)dx, (double)dy ) / (2.0 * M_PI);
	*direction = (u16)std::lround( turns * 1024.0 ) & 0x03FF;
}

inline void segag80v_state::rect_to_polar_w(u8 data)
{
	m_polar_data[m_polar_windex] = data;
	m_polar_windex = (m_polar_windex + 1) & 3;
	if ( m_polar_windex != 0 )
		return;

	int16_t dx = m_polar_data[0] | (m_polar_data[1] << 8);
	int16_t dy = m_polar_data[2] | (m_polar_data[3] << 8);

	u8 magnitude;
	u16 direction;
	polarToVector( dx, dy, &magnitude, &direction );

	m_polar_vector = magnitude | (direction << 8);
}

inline u8 segag80v_state::rect_to_polar_r()
{
	u8 result = m_polar_vector;
	m_polar_vector >>= 8;
	return result;
}

// rotates (a,b) by angle (same 10-bit turn units as polarToVector's *direction);
// wraps like the real 8-bit output register rather than saturating
static void cordicRotate( int8_t a, int8_t b, u16 angle, int8_t *ar, int8_t *br )
{
	double theta = (angle & 0x03FF) * (2.0 * M_PI / 1024.0);
	double s = std::sin( theta );
	double c = std::cos( theta );

	*ar = (int8_t)(u8)std::lround( a * c + b * s );
	*br = (int8_t)(u8)std::lround( b * c - a * s );
}

inline void segag80v_state::cordic_rotate_w(u8 data)
{
	m_rotate_data[m_rotate_windex] = data;
	m_rotate_windex = (m_rotate_windex + 1) & 3;
	if ( m_rotate_windex != 0 )
		return;

	int8_t a = (int8_t)m_rotate_data[0];
	int8_t b = (int8_t)m_rotate_data[1];
	u16 angle = m_rotate_data[2] | (m_rotate_data[3] << 8);

	int8_t ar, br;
	cordicRotate( a, b, angle, &ar, &br );

	m_rotate_vector = (u8)ar | ((u8)br << 8);
}

inline u8 segag80v_state::cordic_rotate_r()
{
	u8 result = m_rotate_vector;
	m_rotate_vector >>= 8;
	return result;
}

// sign of the 2D cross product (b-a)x(c-a) for a triangle a,b,c (or any
// three winding points); only one byte comes back since callers only ever
// test the sign, never the magnitude. Takes the three raw points rather
// than two pre-subtracted edge vectors (an earlier version of this
// register did) for the same reason cordic_triple_sign_w and
// cordic_point_in_tri_w do: a coordinate delta between two corners of a
// wide face can exceed +-127, and subtracting in the Z80 caller's int8_t
// before the hardware ever sees it just wraps silently -- for this
// register specifically, that showed up as backface culling flipping a
// wide face's own front/back sign, which then made it unusable as an
// occluder for anything behind it (the face wasn't being drawn wrong, it
// was being *excluded from the occluder search* wrong).
inline void segag80v_state::cordic_cross_sign_w(u8 data)
{
	m_cross_data[m_cross_windex] = data;
	m_cross_windex = (m_cross_windex + 1) % 6;
	if ( m_cross_windex != 0 )
		return;

	int8_t ax = (int8_t)m_cross_data[0], ay = (int8_t)m_cross_data[1];
	int8_t bx = (int8_t)m_cross_data[2], by = (int8_t)m_cross_data[3];
	int8_t cx = (int8_t)m_cross_data[4], cy = (int8_t)m_cross_data[5];

	int32_t dx1 = (int32_t)bx - ax, dy1 = (int32_t)by - ay;
	int32_t dx2 = (int32_t)cx - ax, dy2 = (int32_t)cy - ay;

	int64_t cross = (int64_t)dx1 * dy2 - (int64_t)dy1 * dx2;
	m_cross_result = (cross < 0) ? 1 : 0;
}

inline u8 segag80v_state::cordic_cross_sign_r()
{
	return m_cross_result;
}

// sign of the scalar triple product (b-a)x(c-a) . (q-a), for a triangle
// a,b,c and a query point q -- tells which side of the triangle's plane q
// is on, using the same winding/sign convention as cordic_cross_sign
// (whose 2D cross is exactly this triple product's z-only special case).
// Takes the four raw points rather than three pre-subtracted edge
// vectors (an earlier version of this register did) so the a/b/c/q-a
// subtractions happen here, in int32_t, rather than in the Z80 caller's
// int8_t: a coordinate delta between two corners of a wide face (e.g. a
// box part's own diagonal) can easily exceed +-127 and wrap silently if
// computed by the caller and passed in already-subtracted, which read as
// spurious un-occluded edges specifically on the widest parts of a shape.
// Same principle as cordic_point_in_tri_w below: let the reference model
// carry full precision throughout, the way a real bit-serial MAC datapath
// (cf. the Star Wars mathbox) never truncates mid-pipeline either.
inline void segag80v_state::cordic_triple_sign_w(u8 data)
{
	m_triple_data[m_triple_windex] = data;
	m_triple_windex = (m_triple_windex + 1) % 12;
	if (m_triple_windex != 0)
		return;

	int8_t ax = (int8_t)m_triple_data[0],  ay = (int8_t)m_triple_data[1],  az = (int8_t)m_triple_data[2];
	int8_t bx = (int8_t)m_triple_data[3],  by = (int8_t)m_triple_data[4],  bz = (int8_t)m_triple_data[5];
	int8_t cx = (int8_t)m_triple_data[6],  cy = (int8_t)m_triple_data[7],  cz = (int8_t)m_triple_data[8];
	int8_t qx = (int8_t)m_triple_data[9],  qy = (int8_t)m_triple_data[10], qz = (int8_t)m_triple_data[11];

	int32_t ux = (int32_t)bx - ax, uy = (int32_t)by - ay, uz = (int32_t)bz - az;
	int32_t vx = (int32_t)cx - ax, vy = (int32_t)cy - ay, vz = (int32_t)cz - az;
	int32_t dx = (int32_t)qx - ax, dy = (int32_t)qy - ay, dz = (int32_t)qz - az;

	int64_t nx = (int64_t)uy * vz - (int64_t)uz * vy;
	int64_t ny = (int64_t)uz * vx - (int64_t)ux * vz;
	int64_t nz = (int64_t)ux * vy - (int64_t)uy * vx;
	int64_t dot = nx * dx + ny * dy + nz * dz;

	m_triple_result = (dot < 0) ? 1 : 0;
}

inline u8 segag80v_state::cordic_triple_sign_r()
{
	return m_triple_result;
}

// true if point (qx,qy) is inside triangle (ax,ay)-(bx,by)-(cx,cy), using
// the same "all three edge cross-tests share the triangle's own winding
// sign" rule the Z80 software version (pointInTriangle, game.c) computes
// via three separate cordic_cross_sign_r() round trips -- collapsed to one
// hardware call here, and (as with cordic_triple_sign_w above) done at
// full precision rather than pre-shifted int8_t deltas.
inline void segag80v_state::cordic_point_in_tri_w(u8 data)
{
	m_pit_data[m_pit_windex] = data;
	m_pit_windex = (m_pit_windex + 1) % 8;
	if (m_pit_windex != 0)
		return;

	int8_t ax = (int8_t)m_pit_data[0], ay = (int8_t)m_pit_data[1];
	int8_t bx = (int8_t)m_pit_data[2], by = (int8_t)m_pit_data[3];
	int8_t cx = (int8_t)m_pit_data[4], cy = (int8_t)m_pit_data[5];
	int8_t qx = (int8_t)m_pit_data[6], qy = (int8_t)m_pit_data[7];

	auto cross_neg = [](int16_t dx1, int16_t dy1, int16_t dx2, int16_t dy2) {
		return ((int32_t)dx1 * dy2 - (int32_t)dy1 * dx2) < 0;
	};

	bool inside = cross_neg(bx - ax, by - ay, qx - ax, qy - ay)
	           && cross_neg(cx - bx, cy - by, qx - bx, qy - by)
	           && cross_neg(ax - cx, ay - cy, qx - cx, qy - cy);

	m_pit_result = inside ? 1 : 0;
}

inline u8 segag80v_state::cordic_point_in_tri_r()
{
	return m_pit_result;
}


// LOAD half of CORDIC_PROJECT_POINT's wire protocol (port 0xc7) -- see
// cordic_project_args_t's comment (sega-vector/3d's game.c) for the
// load/run split. Fired once per shape switch; just latches the fields that
// don't change between calls (verts_ptr/count/shift/output pointers) into
// persistent members, no computation happens here.
//
// wire format (14 bytes): verts_ptr(u16), count(u8), shift(u8), px_ptr(u16),
// py_ptr(u16), px8_ptr(u16), py8_ptr(u16), pz8_ptr(u16)
inline void segag80v_state::cordic_project_point_load_w(u8 data)
{
	m_proj_load_data[m_proj_load_windex] = data;
	m_proj_load_windex = (m_proj_load_windex + 1) % 14;
	if (m_proj_load_windex != 0)
		return;

	auto rd16 = [this](int off) -> u16 { return m_proj_load_data[off] | (m_proj_load_data[off + 1] << 8); };

	m_proj_verts_ptr = rd16(0);
	m_proj_count     = m_proj_load_data[2];
	m_proj_shift     = m_proj_load_data[3];
	m_proj_px_ptr    = rd16(4);
	m_proj_py_ptr    = rd16(6);
	m_proj_px8_ptr   = rd16(8);
	m_proj_py8_ptr   = rd16(10);
	m_proj_pz8_ptr   = rd16(12);
}


// The CORDIC projection handler accesses Z80 memory through MAME's normal
// program-space read/write dispatch (m_maincpu->space(AS_PROGRAM)), making it
// functionally equivalent to a bus-mastering coprocessor performing DMA-style
// memory transfers outside the Z80 instruction stream. The handler is invoked
// when the final OUT of the RUN command sequence is written (see
// cordic_project_point_load_w above for the LOAD half, fired once per shape
// switch rather than every call). Although the emulated Z80 runs at 3.867 MHz
// (VIDEO_CLOCK/4), the entire C++ routine executes synchronously on the host
// and consumes no additional emulated T-states beyond the triggering OUT
// instruction. Consequently, all vertex processing appears instantaneous
// from the emulated system's perspective. Real hardware would require
// BUSRQ/BUSAK arbitration and incur per-byte bus transfer latency; this
// implementation intentionally models an idealized, zero-overhead
// coprocessor rather than cycle-accurate bus contention.
//
// wire format (4 bytes): yaw(u16), pitch(u16)
inline void segag80v_state::cordic_project_point_w(u8 data)
{
	m_proj_data[m_proj_windex] = data;
	m_proj_windex = (m_proj_windex + 1) % 4;
	if (m_proj_windex != 0)
		return;

	auto rd16 = [this](int off) -> u16 { return m_proj_data[off] | (m_proj_data[off + 1] << 8); };

	u16 verts_ptr = m_proj_verts_ptr;
	u8  count     = m_proj_count;
	u16 yaw       = rd16(0);
	u16 pitch     = rd16(2);
	u8  shift     = m_proj_shift;
	u16 px_ptr    = m_proj_px_ptr;
	u16 py_ptr    = m_proj_py_ptr;
	u16 px8_ptr   = m_proj_px8_ptr;
	u16 py8_ptr   = m_proj_py8_ptr;
	u16 pz8_ptr   = m_proj_pz8_ptr;

	address_space &prog = m_maincpu->space(AS_PROGRAM);

	double yawRad = (yaw & 0x03FF) * (2.0 * M_PI / 1024.0);
	double cy = std::cos(yawRad), sy = std::sin(yawRad);
	double pitchRad = (pitch & 0x03FF) * (2.0 * M_PI / 1024.0);
	double cp = std::cos(pitchRad), sp = std::sin(pitchRad);
	double scale = 1.0 / (double)(1 << shift);

	printf("%s: start pc:%04X:cordic_project_point_w %d\n", machine().scheduler().time().as_string(), m_maincpu->pc(), count);

	for (u8 i = 0; i < count; i++)
	{
		u16 va = verts_ptr + i * 6;
		int16_t x = (int16_t)(prog.read_byte(va + 0) | (prog.read_byte(va + 1) << 8));
		int16_t y = (int16_t)(prog.read_byte(va + 2) | (prog.read_byte(va + 3) << 8));
		int16_t z = (int16_t)(prog.read_byte(va + 4) | (prog.read_byte(va + 5) << 8));

		// rotate about Y (yaw): (x,z) -> (x1,z1)
		double x1 = (double)x * cy + (double)z * sy;
		double z1 = (double)z * cy - (double)x * sy;

		// rotate about X (pitch): (z1,y) -> (z2,y1) -- z1 stays a double
		// the whole way through, never quantized between the two rotations
		double z2 = z1 * cp + (double)y * sp;
		double y1 = (double)y * cp - z1 * sp;

		int16_t px = (int16_t)(int32_t)std::lround(x1);
		int16_t py = (int16_t)(int32_t)std::lround(y1);
		int8_t px8 = (int8_t)(int32_t)std::lround(x1 * scale);
		int8_t py8 = (int8_t)(int32_t)std::lround(y1 * scale);
		int8_t pz8 = (int8_t)(int32_t)std::lround(z2 * scale);

		prog.write_byte(px_ptr + i * 2 + 0, (u8)px);
		prog.write_byte(px_ptr + i * 2 + 1, (u8)((u16)px >> 8));
		prog.write_byte(py_ptr + i * 2 + 0, (u8)py);
		prog.write_byte(py_ptr + i * 2 + 1, (u8)((u16)py >> 8));
		prog.write_byte(px8_ptr + i, (u8)px8);
		prog.write_byte(py8_ptr + i, (u8)py8);
		prog.write_byte(pz8_ptr + i, (u8)pz8);
	}

	printf("%s: complete pc:%04X:cordic_project_point_w %d\n", machine().scheduler().time().as_string(), m_maincpu->pc(), count);

}


// Roberts' Algorithm (Roberts, 1963): the shape is decomposed into convex
// parts (part_face_end/part_count), and every edge that survives backface
// culling gets clipped against every *other* part's front-facing faces --
// real segment-vs-convex-polygon clipping (Liang-Barsky style: each
// occluder's polygon edges and depth-plane are linear constraints on the
// segment's parameter t), not a per-endpoint containment test, so an edge
// can legitimately split into multiple visible pieces if it passes behind
// more than one occluder. Writes the finished vector_t chain (color, size,
// angle, pen-up moves, SEGA_LAST) directly into the destination buffer.
//
// Considered Appel's Algorithm (Appel, 1967) instead, which propagates
// visibility incrementally along mesh connectivity rather than reclipping
// every edge against every candidate occluder -- cheaper at runtime when it
// applies. Rejected: its incremental propagation only works within one
// *connected* mesh, so it doesn't extend to multiple independent on-screen
// objects (nothing to propagate across between two objects that share no
// edges/vertices), and a robust implementation is roughly 3x the code of
// this Roberts'-style version. Roberts' generalizes to multiple objects for
// free -- it never distinguishes "occluded by another part of this shape"
// from "occluded by a different object" in the first place.
//
// None of the per-candidate-face math here costs anything on the emulated
// Z80 (same idealized zero-T-state coprocessor model as
// cordic_project_point_w above).
//
// LOAD half of CORDIC_HIDDEN_LINE's wire protocol (port 0xc8) -- see
// cordic_hidden_line_args_t's comment (sega-vector/3d's game.c) for the
// load/run split. Fired once per shape switch; just latches everything that
// doesn't change between calls into persistent members, no computation
// happens here.
//
// wire format (26 bytes):
//   0: px8_ptr (u16)          -- shape3dFrame's rotated/shrunk vertex arrays (silhouette + depth tests)
//   2: py8_ptr (u16)
//   4: pz8_ptr (u16)
//   6: px_ptr (u16)           -- real-world-scale (int16) rotated vertex arrays (final segment coords)
//   8: py_ptr (u16)
//  10: faces_ptr (u16)        -- shape->faces, u8[face_count][4]
//  12: face_colors_ptr (u16)  -- shape->face_colors, u8[face_count], one SEGA_COLOR_* byte per face
//  14: edges_ptr (u16)        -- shape->edges, u8[edge_count][4] (v0,v1,faceA,faceB)
//  16: edge_count (u8)
//  17: edge_colors_ptr (u16)  -- shape->edge_colors, u8[edge_count] per-edge override, 0xFF="no override"; NULL(0) if unused
//  19: part_face_end_ptr (u16)
//  21: part_count (u8)
//  22: dest_max (u16)         -- capacity of dest, in vector_t entries (shape_max_vec) -- safety cap, never overflowed
//  24: count_ptr (u16)        -- output: u16, how many vector_t entries were actually written
inline void segag80v_state::cordic_hidden_line_load_w(u8 data)
{
	m_hl_load_data[m_hl_load_windex] = data;
	m_hl_load_windex = (m_hl_load_windex + 1) % 26;
	if (m_hl_load_windex != 0)
		return;

	auto rd16 = [this](int off) -> u16 { return m_hl_load_data[off] | (m_hl_load_data[off + 1] << 8); };

	m_hl_px8_ptr           = rd16(0);
	m_hl_py8_ptr           = rd16(2);
	m_hl_pz8_ptr           = rd16(4);
	m_hl_px_ptr            = rd16(6);
	m_hl_py_ptr            = rd16(8);
	m_hl_faces_ptr         = rd16(10);
	m_hl_face_colors_ptr   = rd16(12);
	m_hl_edges_ptr         = rd16(14);
	m_hl_edge_count        = m_hl_load_data[16];
	m_hl_edge_colors_ptr   = rd16(17);
	m_hl_part_face_end_ptr = rd16(19);
	m_hl_part_count        = m_hl_load_data[21];
	m_hl_dest_max          = rd16(22);
	m_hl_count_ptr         = rd16(24);
}


// RUN half of CORDIC_HIDDEN_LINE's wire protocol (port 0xc6, unchanged) --
// fired every call with just the two fields that actually change (see
// cordic_hidden_line_load_w above for the LOAD half).
//
// wire format (4 bytes): face_vis_ptr (u16), dest_ptr (u16)
inline void segag80v_state::cordic_hidden_line_w(u8 data)
{
	m_hl_data[m_hl_windex] = data;
	m_hl_windex = (m_hl_windex + 1) % 4;
	if (m_hl_windex != 0)
		return;

	auto rd16 = [this](int off) -> u16 { return m_hl_data[off] | (m_hl_data[off + 1] << 8); };

	u16 px8_ptr           = m_hl_px8_ptr;
	u16 py8_ptr           = m_hl_py8_ptr;
	u16 pz8_ptr           = m_hl_pz8_ptr;
	u16 px_ptr            = m_hl_px_ptr;
	u16 py_ptr            = m_hl_py_ptr;
	u16 faces_ptr         = m_hl_faces_ptr;
	u16 face_colors_ptr   = m_hl_face_colors_ptr;
	u16 edges_ptr         = m_hl_edges_ptr;
	u8  edge_count        = m_hl_edge_count;
	u16 edge_colors_ptr   = m_hl_edge_colors_ptr;
	u16 face_vis_ptr      = rd16(0);
	u16 part_face_end_ptr = m_hl_part_face_end_ptr;
	u8  part_count        = m_hl_part_count;
	u16 dest_ptr          = rd16(2);
	u16 dest_max          = m_hl_dest_max;
	u16 count_ptr         = m_hl_count_ptr;

	address_space &prog = m_maincpu->space(AS_PROGRAM);

	auto px8 = [&](int i) -> int { return (int8_t)prog.read_byte(px8_ptr + i); };
	auto py8 = [&](int i) -> int { return (int8_t)prog.read_byte(py8_ptr + i); };
	auto pz8 = [&](int i) -> int { return (int8_t)prog.read_byte(pz8_ptr + i); };
	auto px16 = [&](int i) -> int16_t { return (int16_t)(prog.read_byte(px_ptr + i*2) | (prog.read_byte(px_ptr + i*2 + 1) << 8)); };
	auto py16 = [&](int i) -> int16_t { return (int16_t)(prog.read_byte(py_ptr + i*2) | (prog.read_byte(py_ptr + i*2 + 1) << 8)); };
	auto face_vis  = [&](int j) { return (prog.read_byte(face_vis_ptr + (j >> 3)) >> (j & 7)) & 1; };
	auto face_v    = [&](int f, int k) { return prog.read_byte(faces_ptr + f * 4 + k); }; // face f's vertex index k (0-3)
	auto face_color = [&](int f) -> u8 { return prog.read_byte(face_colors_ptr + f); };
	auto edge_v    = [&](int e, int k) { return prog.read_byte(edges_ptr + e * 4 + k); }; // edge e's field k: v0,v1,faceA,faceB
	auto part_end  = [&](int p) { return prog.read_byte(part_face_end_ptr + p); };

	// which part owns each face -- part_face_end's boundaries are
	// monotonic, same single forward pass game.c's Z80 version used to do
	u8 face_part[256];
	{
		int part_i = 0;
		int face_count_total = part_count ? part_end(part_count - 1) : 0; // last part's end == shape's face_count
		for (int f = 0; f < face_count_total; f++) {
			while (f >= part_end(part_i)) part_i++;
			face_part[f] = part_i;
		}
	}

	// clip [lo,hi] (in/out, a subinterval of t in [0,1]) against the
	// half-plane "A + t*B < 0" -- used both for a candidate face's polygon
	// edges (silhouette) and its depth-plane test (see below), since both
	// reduce to exactly this shape once expanded in terms of t. Returns
	// false if the interval becomes empty (fully outside this constraint).
	auto clip_halfplane = [](double A, double B, double &lo, double &hi) -> bool {
		if (B == 0.0) {
			if (A >= 0.0) return false; // constant and outside: no t satisfies it
			return lo <= hi;            // constant and inside: no restriction
		}
		double troot = -A / B;
		if (B > 0.0) { if (troot < hi) hi = troot; }
		else         { if (troot > lo) lo = troot; }
		return lo <= hi;
	};

	// silhouette clip: segment (p0x,p0y)-(p1x,p1y) against the convex
	// polygon poly (3 or 4 verts, in the shape data's own winding order --
	// "inside" is cross(edge_dir, Q-E) < 0 for every polygon edge, the same
	// convention pointInTriangle/xy_cross_negative already use elsewhere in
	// this driver). Degenerates to a triangle clip when poly.size()==3.
	auto clip_to_polygon = [&](const std::vector<std::pair<double,double>> &poly,
	                            double p0x, double p0y, double p1x, double p1y,
	                            double &lo, double &hi) -> bool {
		int n = (int)poly.size();
		for (int i = 0; i < n; i++) {
			double ex = poly[i].first, ey = poly[i].second;
			double fx = poly[(i + 1) % n].first, fy = poly[(i + 1) % n].second;
			double edx = fx - ex, edy = fy - ey;
			double A = edx * (p0y - ey) - edy * (p0x - ex);
			double B = edx * (p1y - p0y) - edy * (p1x - p0x);
			if (!clip_halfplane(A, B, lo, hi)) return false;
		}
		return lo <= hi;
	};

	// raw (signed) triple-product depth value -- same formula as
	// cordic_triple_sign_w above, dot<0 means "behind the face's plane"
	// (occluded); kept as a plain double here (not just its sign) since the
	// depth constraint needs to be solved as a linear function of t too.
	auto plane_dot = [&](int f0, int f1, int f2, int q) -> double {
		double ax = px8(f0), ay = py8(f0), az = pz8(f0);
		double bx = px8(f1), by = py8(f1), bz = pz8(f1);
		double cx = px8(f2), cy = py8(f2), cz = pz8(f2);
		double qx = px8(q),  qy = py8(q),  qz = pz8(q);
		double ux = bx - ax, uy = by - ay, uz = bz - az;
		double vx = cx - ax, vy = cy - ay, vz = cz - az;
		double dx = qx - ax, dy = qy - ay, dz = qz - az;
		double nx = uy * vz - uz * vy;
		double ny = uz * vx - ux * vz;
		double nz = ux * vy - uy * vx;
		return nx * dx + ny * dy + nz * dz;
	};

	static constexpr u8 COLOR_CLEAR = 0;      // SEGA_CLEAR, sega.h
	static constexpr u8 COLOR_LAST  = 0x80;   // SEGA_LAST, sega.h
	static constexpr u8 EDGE_COLOR_NONE = 0xFF; // shape3d_t's edge_colors sentinel, sega.h

	u16 write_idx = 0;
	auto emit = [&](u8 color, double dx, double dy) -> bool {
		if (write_idx >= dest_max) return false;
		u8 magnitude; u16 direction;
		polarToVector((int16_t)std::lround(dx), (int16_t)std::lround(dy), &magnitude, &direction);
		u16 addr = dest_ptr + write_idx * 4;
		prog.write_byte(addr + 0, color);
		prog.write_byte(addr + 1, magnitude);
		prog.write_byte(addr + 2, (u8)direction);
		prog.write_byte(addr + 3, (u8)(direction >> 8));
		write_idx++;
		return true;
	};

	double penx = 0.0, peny = 0.0;

	// diagnostic only: how many (edge, candidate-face) pairs actually get considered vs.
	// how many survive the silhouette clip to reach plane_dot -- turns the "zero-cost
	// coprocessor" assumption into a real number instead of an order-of-magnitude guess.
	u32 candidate_pairs = 0;
	u32 plane_dot_pairs = 0;

	for (int i = 0; i < edge_count; i++) {
		int v0 = edge_v(i, 0), v1 = edge_v(i, 1), fa = edge_v(i, 2), fb = edge_v(i, 3);
		if (!face_vis(fa) && !face_vis(fb)) continue; // both adjacent faces hidden -> edge hidden, same as before

		// color from whichever adjacent face is front-facing (prefer fa),
		// unless this edge has its own override -- see shape3d_t's comment
		// (sega.h) on edge_colors for why (e.g. legoman's eyes/mouth marks,
		// which share a face with no color of their own to draw from).
		u8 edge_color = face_vis(fa) ? face_color(fa) : face_color(fb);
		if (edge_colors_ptr != 0) {
			u8 override_color = prog.read_byte(edge_colors_ptr + i);
			if (override_color != EDGE_COLOR_NONE) edge_color = override_color;
		}

		int part_a = face_part[fa], part_b = face_part[fb];
		double sx0 = px8(v0), sy0 = py8(v0), sx1 = px8(v1), sy1 = py8(v1);

		std::vector<std::pair<double,double>> removed; // (lo,hi) pairs
		for (int p = 0; p < part_count; p++) {
			if (p == part_a || p == part_b) continue;
			int start = p ? part_end(p - 1) : 0;
			int end = part_end(p);
			for (int j = start; j < end; j++) {
				if (!face_vis(j)) continue;
				candidate_pairs++;

				int f0 = face_v(j, 0), f1 = face_v(j, 1), f2 = face_v(j, 2), f3 = face_v(j, 3);
				std::vector<std::pair<double,double>> poly;
				poly.push_back({(double)px8(f0), (double)py8(f0)});
				poly.push_back({(double)px8(f1), (double)py8(f1)});
				poly.push_back({(double)px8(f2), (double)py8(f2)});
				if (f3 != f2) poly.push_back({(double)px8(f3), (double)py8(f3)});

				double lo = 0.0, hi = 1.0;
				if (!clip_to_polygon(poly, sx0, sy0, sx1, sy1, lo, hi)) continue;

				plane_dot_pairs++;
				double dot0 = plane_dot(f0, f1, f2, v0);
				double dot1 = plane_dot(f0, f1, f2, v1);
				if (!clip_halfplane(dot0, dot1 - dot0, lo, hi)) continue;

				if (hi - lo > 1e-9) removed.push_back({lo, hi});
			}
		}

		// merge overlapping/adjacent occluded intervals, then take the
		// complement within [0,1] to get the visible sub-segment(s)
		std::sort(removed.begin(), removed.end());
		std::vector<std::pair<double,double>> merged;
		for (auto &iv : removed) {
			if (!merged.empty() && iv.first <= merged.back().second) {
				if (iv.second > merged.back().second) merged.back().second = iv.second;
			} else {
				merged.push_back(iv);
			}
		}
		std::vector<std::pair<double,double>> visible;
		double cursor = 0.0;
		for (auto &iv : merged) {
			if (iv.first > cursor) visible.push_back({cursor, iv.first});
			if (iv.second > cursor) cursor = iv.second;
		}
		if (cursor < 1.0) visible.push_back({cursor, 1.0});

		double x0 = px16(v0), y0 = py16(v0), x1 = px16(v1), y1 = py16(v1);
		bool overflowed = false;
		for (auto &iv : visible) {
			if (iv.second - iv.first < 1e-6) continue;
			double sx = x0 + iv.first  * (x1 - x0), sy = y0 + iv.first  * (y1 - y0);
			double ex = x0 + iv.second * (x1 - x0), ey = y0 + iv.second * (y1 - y0);

			double dx = sx - penx, dy = sy - peny;
			if (dx != 0.0 || dy != 0.0) {
				// same >160 pen-up split rule cullAndBuild used to apply
				if (std::abs(dx) > 160.0 || std::abs(dy) > 160.0) {
					double midx = penx + dx / 2.0, midy = peny + dy / 2.0;
					if (!emit(COLOR_CLEAR, midx - penx, midy - peny)) { overflowed = true; break; }
					if (!emit(COLOR_CLEAR, sx - midx, sy - midy))     { overflowed = true; break; }
				} else {
					if (!emit(COLOR_CLEAR, dx, dy)) { overflowed = true; break; }
				}
			}
			if (!emit(edge_color, ex - sx, ey - sy)) { overflowed = true; break; }
			penx = ex; peny = ey;
		}
		if (overflowed) break;
	}

	if (write_idx > 0) {
		u16 last_addr = dest_ptr + (write_idx - 1) * 4;
		u8 last_color = prog.read_byte(last_addr + 0);
		prog.write_byte(last_addr + 0, last_color | COLOR_LAST);
	}
	prog.write_byte(count_ptr + 0, (u8)write_idx);
	prog.write_byte(count_ptr + 1, (u8)(write_idx >> 8));

	printf("%s: cordic_hidden_line_w: %u edges, %u candidate pairs, %u reached plane_dot (%.1f%% survival), %u vectors emitted\n",
			machine().scheduler().time().as_string(), edge_count, candidate_pairs, plane_dot_pairs,
			candidate_pairs ? (100.0 * plane_dot_pairs / candidate_pairs) : 0.0, write_idx);
}

#endif // MAME_SEGA_SEGAG80V_CORDIC_H
