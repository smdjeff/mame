// license:BSD-3-Clause
// copyright-holders:Aaron Giles
/*************************************************************************

    Sega vector hardware

*************************************************************************/
#ifndef MAME_SEGA_SEGAG80V_H
#define MAME_SEGA_SEGAG80V_H

#pragma once

#include "segag80.h"
#include "segag80v_z80gpu_accel.h"
#include "segaspeech.h"
#include "segausb.h"

#include "cpu/z80/z80.h"
#include "segag80_m.h"
#include "sound/ay8910.h"
#include "sound/samples.h"
#include "sound/tms5110.h"
#include "video/vector.h"

#include "screen.h"

#include <vector>

#define CPU_CLOCK           8000000     /* not used when video boards are connected */
#define VIDEO_CLOCK         15468480

class segag80v_state : public driver_device
{
public:
	segag80v_state(const machine_config &mconfig, device_type type, const char *tag) :
		driver_device(mconfig, type, tag),
		m_mainrom(*this, "maincpu"),
		m_mainram(*this, "mainram"),
		m_vectorram(*this, "vectorram"),
		m_maincpu(*this, "maincpu"),
		m_samples(*this, "samples"),
		m_speech(*this, "speech"),
		m_usb(*this, "usbsnd"),
		m_g80_audio(*this, "g80sound"),
		m_aysnd(*this, "aysnd"),
		m_vector(*this, "vector"),
		m_screen(*this, "screen"),
		m_d7d6(*this, "D7D6"),
		m_d5d4(*this, "D5D4"),
		m_d3d2(*this, "D3D2"),
		m_d1d0(*this, "D1D0"),
		m_fc(*this, "FC"),
		m_coins(*this, "COINS"),
		m_spinner(*this, "SPINNER"),
		m_mult_data{0,0},
		m_mult_result(0),
		m_vector_pc(0),
		m_polar_windex(0),
		m_polar_data{0,0,0,0},
		m_polar_vector(0),
		m_rotate_windex(0),
		m_rotate_data{0,0,0,0},
		m_rotate_vector(0),
		m_cross_windex(0),
		m_cross_data{0,0,0,0,0,0},
		m_cross_result(0),
		m_triple_windex(0),
		m_triple_data{0,0,0,0,0,0,0,0,0,0,0,0},
		m_triple_result(0),
		m_pit_windex(0),
		m_pit_data{0,0,0,0,0,0,0,0},
		m_pit_result(0),
		m_proj_load_windex(0),
		m_proj_load_data{0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		m_proj_verts_ptr(0),
		m_proj_count(0),
		m_proj_shift(0),
		m_proj_px_ptr(0),
		m_proj_py_ptr(0),
		m_proj_px8_ptr(0),
		m_proj_py8_ptr(0),
		m_proj_pz8_ptr(0),
		m_proj_windex(0),
		m_proj_data{0,0,0,0},
		m_hl_load_windex(0),
		m_hl_load_data{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		m_hl_px8_ptr(0),
		m_hl_py8_ptr(0),
		m_hl_pz8_ptr(0),
		m_hl_px_ptr(0),
		m_hl_py_ptr(0),
		m_hl_faces_ptr(0),
		m_hl_face_colors_ptr(0),
		m_hl_edges_ptr(0),
		m_hl_edge_count(0),
		m_hl_edge_colors_ptr(0),
		m_hl_part_face_end_ptr(0),
		m_hl_part_count(0),
		m_hl_dest_max(0),
		m_hl_count_ptr(0),
		m_hl_windex(0),
		m_hl_data{0,0,0,0},
		m_accel_ctrl(0),
		m_accel_shape_select(0),
		m_accel_yaw(0),
		m_accel_pitch(0),
		m_accel_vec_count(0),
		m_accel_vec_data_idx(0),
		m_accel_load_addr(0),
		m_accel_busy_until(attotime::zero),
		m_spinner_select(0),
		m_spinner_sign(0),
		m_spinner_count(0),
		m_coin_ff_state(0),
		m_coin_last_state(0),
		m_edgint_ff_state(0),
		m_scrambled_write_pc(0),
		m_decrypt(nullptr),
		m_min_x(0),
		m_min_y(0),
		m_fpga_timing(false),
		m_vg_timer(nullptr),
		m_vg_phase(0),
		m_vg_symaddr(0),
		m_vg_curx(0),
		m_vg_cury(0),
		m_vg_vecaddr(0),
		m_vg_header_snap{0,0,0,0,0,0,0,0,0,0},
		m_vg_vector_snap{0,0,0,0},
		m_vg_draw(0),
		m_vg_symangle(0),
		m_vg_scale(0),
		m_vg_attrib(0),
		m_vg_length(0),
		m_vg_vecangle(0),
		m_vg_deltax(0),
		m_vg_deltay(0),
		m_vg_draw_remaining(0),
		m_vg_xaccum(0),
		m_vg_yaccum(0),
		m_vg_clipped(false),
		m_vg_color(0),
		m_vg_intensity(0),
		m_vg_symbol_is_last(false),
		m_vg_idle(true),
		m_vg_pass_start_time(attotime::zero),
		m_vg_symbol_count(0),
		m_vg_vector_count(0)
	{ }

	void g80v_base(machine_config &config);
	void tacscan(machine_config &config);
	void elim2(machine_config &config);
	void startrek(machine_config &config);
	void zektor(machine_config &config);
	void spacfury(machine_config &config);
	void spacfurybl(machine_config &config);

	// z80gpu FPGA-replacement timing model -- see init_waitstates_fpga()'s
	// own comment. Only wired up for zektor so far; the same
	// "existing_config(config); m_maincpu->set_clock(FPGA_CPU_CLOCK);"
	// pattern applies unchanged to the other five games in this driver.
	void zektor_fpga(machine_config &config);
	void startrek_fpga(machine_config &config);

	void init_waitstates();
	void init_zektor();
	void init_startrek();
	void init_elim4();
	void init_elim2();
	void init_tacscan();
	void init_spacfury();
	void init_spacfurybl();

	void init_waitstates_fpga();
	void init_zektor_fpga();
	void init_startrek_fpga();

	int elim4_joint_coin_r();
	int draw_r();
	void service_switch_w(int state);
	void irq_ack_w(int state);

	template<int Index>
	void coin_w(int state)
	{
		const u8 mask = 1 << Index;

		if (state == 0 && (m_coin_last_state & mask) != 0)
			m_coin_ff_state |= mask;
		else
			m_coin_ff_state &= ~mask;

		if (state)
			m_coin_last_state |= mask;
		else
			m_coin_last_state &= ~mask;

		update_int();
	}

private:
	required_memory_region m_mainrom;
	required_shared_ptr<u8> m_mainram;
	required_shared_ptr<u8> m_vectorram;

	required_device<z80_device> m_maincpu;
	optional_device<samples_device> m_samples;
	optional_device<sega_speech_device> m_speech;
	optional_device<usb_sound_device> m_usb;
	optional_device<segag80_audio_device_base> m_g80_audio;
	optional_device<ay8912_device> m_aysnd;
	required_device<vector_device> m_vector;
	required_device<screen_device> m_screen;

	required_ioport m_d7d6;
	required_ioport m_d5d4;
	required_ioport m_d3d2;
	required_ioport m_d1d0;
	required_ioport m_fc;
	optional_ioport m_coins;
	optional_ioport m_spinner;

	u8 m_mult_data[2];
	u16 m_mult_result;
	u16 m_vector_pc;

// xy_rect_to_polar( int16_t dx, int16_t dy, uint8_t* size, uint16_t* angle )
	u8 m_polar_windex;
	u8 m_polar_data[4];
	u32 m_polar_vector;

	u8 m_rotate_windex;
	u8 m_rotate_data[4];
	u16 m_rotate_vector;

	u8 m_cross_windex;
	u8 m_cross_data[6];
	u8 m_cross_result;

	u8 m_triple_windex;
	u8 m_triple_data[12];
	u8 m_triple_result;

	u8 m_pit_windex;
	u8 m_pit_data[8];
	u8 m_pit_result;

	// CORDIC_PROJECT_POINT split into a LOAD burst (fired once per shape
	// switch, m_proj_load_*, persisted as plain members between calls) and a
	// RUN burst (fired every frame, m_proj_windex/m_proj_data, just
	// yaw/pitch) -- see cordic_project_args_t's comment, sega-vector/3d's
	// game.c, for why. cordic_project_point_load_w latches the LOAD fields
	// below; cordic_project_point_w (the RUN handler) reads them back
	// alongside the freshly-received yaw/pitch.
	u8  m_proj_load_windex;
	u8  m_proj_load_data[14];
	u16 m_proj_verts_ptr;
	u8  m_proj_count;
	u8  m_proj_shift;
	u16 m_proj_px_ptr, m_proj_py_ptr, m_proj_px8_ptr, m_proj_py8_ptr, m_proj_pz8_ptr;
	u8 m_proj_windex;
	u8 m_proj_data[4];

	// same LOAD/RUN split as CORDIC_PROJECT_POINT above, see
	// cordic_hidden_line_args_t's comment (game.c) -- only face_vis_ptr/
	// dest_ptr are sent every call, everything else is loaded once per shape.
	u8  m_hl_load_windex;
	u8  m_hl_load_data[26];
	u16 m_hl_px8_ptr, m_hl_py8_ptr, m_hl_pz8_ptr;
	u16 m_hl_px_ptr, m_hl_py_ptr;
	u16 m_hl_faces_ptr;
	u16 m_hl_face_colors_ptr;
	u16 m_hl_edges_ptr;
	u8  m_hl_edge_count;
	u16 m_hl_edge_colors_ptr;
	u16 m_hl_part_face_end_ptr;
	u8  m_hl_part_count;
	u16 m_hl_dest_max;
	u16 m_hl_count_ptr;
	u8 m_hl_windex;
	u8 m_hl_data[4];

	// z80gpu 3D accelerator model (segag80v_z80gpu_accel.h) -- bit-exact
	// port of the real RTL's fixed-point algorithm (accel_rotate.v/
	// accel_cull.v/accel_vecbuild.v), NOT the idealized CORDIC members
	// above. main_portmap() maps ports 0xC9-0xD4 to the handlers below, in
	// every machine config (no separate variant needed -- see
	// main_portmap()'s own comment).
	//
	// STAGE1_ROTATE+STAGE2_CULL+STAGE3_VECBUILD (accel_vecbuild.v's
	// steel-thread output stage -- backface-cull-only, no per-part
	// hidden-line removal yet) all run in z80gpu_run_frame(); STAGE3_EDGE
	// (accel_clip.v, exact per-part hidden-line removal) doesn't exist in
	// the RTL yet, only its simpler steel-thread predecessor -- swap
	// build_vecbuf's call for that RTL's own C++ port once it lands, same
	// signature. Real hardware has no port exposing m_accel_scratch_mem's
	// intermediate contents (px8/py8/pz8/face_vis) directly -- by design,
	// matching accel_top.v's protocol, which only ever hands back a
	// finished vector_t chain -- so this model doesn't add one either;
	// validating STAGE1/STAGE2/STAGE3 in isolation is what z80gpu's
	// sim/model/check_against_rtl_refs.cpp is for.
	u8  m_accel_shape_mem[4096];   // mirrors accel_shape_mem.v's byte layout (see kShapes)
	u8  m_accel_scratch_mem[4096]; // mirrors accel_scratch_mem.v's byte layout (grown from 2048 -- see that module's own header for why)
	u8  m_accel_ctrl;              // read: bit0 BUSY, bit1 DONE, bit2 OVERFLOW; write: bit0 START, bit1 ABORT
	u8  m_accel_shape_select;
	u16 m_accel_yaw, m_accel_pitch;
	u16 m_accel_vec_count;
	u16 m_accel_vec_data_idx;      // VEC_DATA burst-read auto-increment pointer
	u16 m_accel_load_addr;         // LOAD_ADDR flat write pointer into m_accel_shape_mem
	// "busy until" machine-time threshold, set on START from an estimated
	// STAGE1/STAGE2 cycle count (derived from accel_rotate.v/accel_cull.v's
	// own per-vertex/per-face FSM cycle counts at clk_cpu's 50MHz/20ns) so
	// a Z80 polling loop sees a realistic delay instead of DONE on the very
	// next instruction -- see z80gpu_ctrl_w's own comment for the estimate.
	attotime m_accel_busy_until;

	u8 m_spinner_select;
	u8 m_spinner_sign;
	u8 m_spinner_count;
	u8 m_coin_ff_state;
	u8 m_coin_last_state;
	u8 m_edgint_ff_state;
	offs_t m_scrambled_write_pc;
	segag80_decrypt_func m_decrypt;
	int m_min_x;
	int m_min_y;

	// Set by init_waitstates_fpga() -- selects the z80gpu FPGA-replacement
	// timing model (see FPGA_CPU_CLOCK/FPGA_*_CYCLES and init_waitstates_fpga()
	// near WAIT_STATES) instead of the real board's timing (init_waitstates()).
	// Checked in multiply_w() since that stall is modeled as a manual
	// adjust_icount() call outside the normal M1/MREQ/IORQ cycle-cost path,
	// so it isn't automatically covered by either timing model and has to be
	// switched explicitly: the real Am25LS14A's serial-multiply stall
	// (MULTIPLY_WAIT_STATES) isn't reproduced by the FPGA's xy_mult8x8.v,
	// which computes the product combinationally/instantly instead.
	bool m_fpga_timing;

	// vector generator state machine (segag80v_v.cpp) -- runs as its own free-running,
	// VCL-clocked device via m_vg_timer, genuinely interleaved with Z80 execution through
	// MAME's scheduler, instead of being computed as one synchronous batch per video frame.
	// m_vector_pc is updated live at each symbol/vector address latch, exactly like the
	// real U10/U11/U12 counter chain, so XY_PC_H/L reads always see the true current value.
	//
	// Per the G80 hardware reference: "The vector PC is reset 40 times/second... there is
	// no way to stop [it]... Display list state machine stops when Last Symbol detected."
	// So the reset is NOT this state machine deciding it's done and looping back -- it's
	// vblank_callback() (segag80v.cpp), driven by the real screen's absolute 40Hz refresh
	// (the same EDGINT signal/divider chain as the CPU's own 40Hz interrupt -- see
	// update_int()'s comment), unconditionally restarting the walk from symbol 0 every
	// tick, cutting off whatever wasn't finished. If the list finishes early, this instead
	// goes idle and does nothing until that same vblank callback wakes it back up.
	emu_timer *m_vg_timer;
	u8  m_vg_phase;             // current U51 phase: 0-9 header, 10-14 vector fetch, 15 per-pixel draw
	u16 m_vg_symaddr;           // walk position in the symbol table
	u16 m_vg_curx, m_vg_cury;   // beam position, persists across vectors within a symbol
	u16 m_vg_vecaddr;           // walk position in the current symbol's vector list

	// MAME models the Z80 and the vector generator sharing plain m_vectorram with no bus
	// arbitration between them (real hardware has one). Since phases 0-9 and 10-13 are now
	// individually time-spaced (~U51_ATTOS apart) instead of one atomic burst, a CPU write
	// landing between two of those phases would tear a multi-byte field like vecaddr or
	// vecangle -- one phase reading the old byte, the next reading one the CPU already
	// overwrote. Each group instead does its underlying vectorram read as one atomic burst
	// at the group's first phase, into these snapshots; later phases in the same group just
	// unpack already-fetched bytes rather than re-reading memory, so m_vector_pc still only
	// becomes visible at its correct phase (6, 13) with no tear window in between.
	u8  m_vg_header_snap[10];
	u8  m_vg_vector_snap[4];

	u8  m_vg_draw;              // symbol header's draw byte (phase 0), used at phase 9
	u16 m_vg_symangle;
	u8  m_vg_scale;
	u8  m_vg_attrib;            // vector's attribute byte (phase 10), used through phase 15
	u16 m_vg_length;
	u16 m_vg_vecangle;
	u16 m_vg_deltax, m_vg_deltay;
	u16 m_vg_draw_remaining;    // phase 15: length units still to draw, one VCL tick each
	u16 m_vg_xaccum, m_vg_yaccum;
	bool m_vg_clipped;
	u32 m_vg_color;
	u8  m_vg_intensity;
	bool m_vg_symbol_is_last;   // current symbol's draw byte had bit 7 set (stop after its vectors)
	bool m_vg_idle;             // true once Last Symbol is reached; waits for the next vblank
	attotime m_vg_pass_start_time; // diagnostic only (see vg_start_pass()'s printf) -- not used
	                                // for any timing/reset decision, unlike its old role
	u32 m_vg_symbol_count, m_vg_vector_count; // diagnostic only -- content walked this pass

	// vg_clock() draws into this shadow buffer instead of m_vector directly, since it now
	// runs on its own timer independent of screen_update_segag80v()'s own 40Hz one -- without
	// this, screen_update() could catch m_vector's list mid-pass (partial image) or right
	// after a clear_list() (blank flash). vg_start_pass() flushes the just-completed pass's
	// points into m_vector in one shot before starting the next, so screen_update() -- firing
	// whenever it likes -- only ever sees a complete, self-consistent prior pass.
	struct vg_point { int x, y; u32 color; u8 intensity; };
	std::vector<vg_point> m_vg_pending;
	void vg_add_point(int x, int y, u32 color, u8 intensity);

	void vg_start_pass();
	void vg_finish_vector(int adjx, int adjy);
	void vg_go_idle();
	TIMER_CALLBACK_MEMBER(vg_clock);

	u8 opcode_r(offs_t offset);
	u8 mainrom_r(offs_t offset);
	void mainram_w(offs_t offset, u8 data);
	void vectorram_w(offs_t offset, u8 data);
	u8 mangled_ports_r(offs_t offset);
	void spinner_select_w(u8 data);
	u8 spinner_input_r();
	u8 elim4_input_r();
	void multiply_w(offs_t offset, u8 data);
	u8 multiply_r();
	u8 vector_pc_lsb_r();
	u8 vector_pc_msb_r();

	void rect_to_polar_w(u8 data);
	u8 rect_to_polar_r();

	void cordic_rotate_w(u8 data);
	u8 cordic_rotate_r();

	void cordic_cross_sign_w(u8 data);
	u8 cordic_cross_sign_r();

	void cordic_triple_sign_w(u8 data);
	u8 cordic_triple_sign_r();

	void cordic_point_in_tri_w(u8 data);
	u8 cordic_point_in_tri_r();

	void cordic_project_point_load_w(u8 data);
	void cordic_project_point_w(u8 data);

	void cordic_hidden_line_load_w(u8 data);
	void cordic_hidden_line_w(u8 data);

	// z80gpu 3D accelerator model -- see m_accel_* members' own comment.
	void z80gpu_ctrl_w(u8 data);
	u8   z80gpu_ctrl_r();
	void z80gpu_shape_select_w(u8 data);
	void z80gpu_yaw_lo_w(u8 data);
	void z80gpu_yaw_hi_w(u8 data);
	void z80gpu_pitch_lo_w(u8 data);
	void z80gpu_pitch_hi_w(u8 data);
	u8   z80gpu_vec_count_lo_r();
	u8   z80gpu_vec_count_hi_r();
	u8   z80gpu_vec_data_r();
	void z80gpu_load_addr_lo_w(u8 data);
	void z80gpu_load_addr_hi_w(u8 data);
	void z80gpu_load_data_w(u8 data);
	void z80gpu_run_frame();

	void coin_count_w(u8 data);
	void unknown_w(u8 data);
	void update_int();
	void vblank_callback(screen_device &screen, bool state);

	void usb_ram_w(offs_t offset, u8 data);

	virtual void machine_start() override ATTR_COLD;
	virtual void video_start() override ATTR_COLD;
	uint32_t screen_update_segag80v(screen_device &screen, bitmap_rgb32 &bitmap, const rectangle &cliprect);
	inline bool adjust_xy(int rawx, int rawy, int &outx, int &outy);
	offs_t decrypt_offset(offs_t offset);
	inline u8 demangle(u8 d7d6, u8 d5d4, u8 d3d2, u8 d1d0);

	void main_map(address_map &map) ATTR_COLD;
	void opcodes_map(address_map &map) ATTR_COLD;
	void main_portmap(address_map &map) ATTR_COLD;
	void spacfurybl_speech_prg_map(address_map &map) ATTR_COLD;
	void spacfurybl_speech_io_map(address_map &map) ATTR_COLD;
};

#endif // MAME_SEGA_SEGAG80V_H
