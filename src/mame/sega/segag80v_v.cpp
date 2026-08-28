// license:BSD-3-Clause
// copyright-holders:Aaron Giles
/*************************************************************************

    Sega vector hardware

*************************************************************************/

#include "emu.h"
#include "segag80v.h"

#define VECTOR_CLOCK        15468480            // master crystal
// The first 74LS161/163 stage cuts the 15.46848MHz master crystal exactly in
// half to produce the 7.73424MHz signal that drives the state machine's own
// logic loops, edge triggers, and multiplexers (U51's 4-bit phase counter
// included) -- a separate divider chain off the same crystal from the one
// that produces the CPU's 40Hz EDGINT interrupt (VECTOR_CLOCK/3/0x1f788, see
// update_int()'s comment in segag80v.cpp -- that's also the vector PC's own
// 40Hz reset; see vblank_callback() and vg_start_pass()). The Z80 is a
// further /2 of VCL_CLOCK (3.86712MHz, == VIDEO_CLOCK/4 in the Z80(config,
// ...) call below).
#define VCL_CLOCK           (VECTOR_CLOCK/2)    // clock for vector generator
#define U51_CLOCK           (VCL_CLOCK/16)      // clock for phase generator


static constexpr attoseconds_t VCL_ATTOS = HZ_TO_ATTOSECONDS(VCL_CLOCK);
static constexpr attoseconds_t U51_ATTOS = HZ_TO_ATTOSECONDS(U51_CLOCK);

//

/*

    Vector system is clocked by a 15-phase clock.

    The counter is a LS161 4-bit binary counter at U51, and its output
    goes to a LS154 1-of-16 decoder at U50.

    Each phase various things happen. The phases are:

     0 -> (sheet 7/7) clocks CD7 in

     1 -> (sheet 5/7) loads CD0-7 into counters at U15/U16
          (sheet 6/7) clear LS175 flip flops at U35, U36, U37, U38

     2 -> (sheet 5/7) loads CD0-3 into counter at U17

     3 -> (sheet 5/7) loads CD0-7 into counters at U18/U19

     4 -> (sheet 5/7) loads CD0-3 into counter at U20

     5 ->             loads CD0-7 (or counts) into U10,U11,U20 to set RAM addr

     6 ->             loads CD0-3 into U21

     7 -> (sheet 6/7) at end, latches CD0-7 into LS374 tri-state flip flop at U55 (SYM angle)

     8 -> (sheet 6/7) at end, latches CD0-1 into LS74 flip flops at U26 (upper SYM angle)

     9 -> (sheet 4/7) at end, latches CD0-7 into 25LS14 multiplier X input at U8 (scale)

    10 -> (sheet 4/7) at end, latches CD0-CD7 into LS374 tri-state flip flop at U2 (attributes)
          (sheet 7/7) at end, latches CD7 into U52 (low), which sets the preload value
            for the LS161 at U51 to be either 0 (if CD7==1) or 10 (if CD7==0)

    11 -> (sheet 4/7) at end, starts multiply circuit

    12 -> (sheet 6/7) at end, latches CD0-7 into LS374 tri-state flip flop at U56 (VEC angle)

    13 -> (sheet 6/7) at end, latches output from 2708 PROM(sin lut) into tri-state flip flop at U48
          (sheet 6/7) at end, latches bit $200 of angle into D/UX output

    14 -> (sheet 6/7) at end, latches output from 2708 PROM into tri-state flip flop at U49
          (sheet 6/7) at end, latches bit $200 of angle into D/UY output
          (sheet 7/7) signals /PE on the LS161 at U51, loading the new value for the state clock
          (sheet 7/7) sets up the DRAW signal to clock on the next VCL edge

    15 ->



    PROM inputs:
        A0 = GND
        A1-A8 = sum of VEC angle and SYM angle (low 8 bits)
        A9 = sum of bit 8 of VEC angle and SYM angle, plus 1 for phase 13

*/



inline bool segag80v_state::adjust_xy(int rawx, int rawy, int &outx, int &outy)
{
	bool clipped = false;

	// first apply the XOR at 0x200
	outx = (rawx & 0x7ff) ^ 0x200;
	outy = (rawy & 0x7ff) ^ 0x200;

	// apply clipping logic to X
	if ((outx & 0x600) == 0x200)
		outx = 0x000, clipped = true;
	else if ((outx & 0x600) == 0x400)
		outx = 0x3ff, clipped = true;
	else
		outx &= 0x3ff;

	// apply clipping logic to Y
	if ((outy & 0x600) == 0x200)
		outy = 0x000, clipped = true;
	else if ((outy & 0x600) == 0x400)
		outy = 0x3ff, clipped = true;
	else
		outy &= 0x3ff;

	// convert into .16 values
	outx = (outx - (m_min_x - 512)) << 16;
	outy = (outy - (m_min_y - 512)) << 16;
	return clipped;
}


// (Re)starts a pass over the symbol table from the top, exactly like the real vector PC's
// unconditional 40Hz reset. Called ONLY from vblank_callback() (segag80v.cpp) -- never from
// inside vg_clock() itself -- since real hardware's reset isn't this state machine deciding
// it's done, it's an external signal that fires on a fixed schedule no matter what state the
// walk is in. If the previous pass hadn't gone idle yet (still mid-symbol/mid-vector), this
// cuts it off right where it was, same as hardware has "no way to stop" that from happening.
void segag80v_state::vg_start_pass()
{
	if (!m_vg_idle)
	{
		attoseconds_t busy = (machine().scheduler().time() - m_vg_pass_start_time).as_attoseconds();
		printf("%s: vector system overflow (still busy after %.3fms, %u symbols %u vectors)\n",
				machine().scheduler().time().as_string(), busy / 1.0e15, m_vg_symbol_count, m_vg_vector_count);
	}

	// atomically present the just-completed pass: screen_update_segag80v() runs on its
	// own independent 40Hz timer, so this is the only point where m_vector's list is
	// allowed to change -- never mid-pass -- to guarantee it always holds one complete,
	// self-consistent frame rather than whatever vg_clock() happened to have drawn so far.
	m_vector->clear_list();
	for (const vg_point &p : m_vg_pending)
		m_vector->add_point(p.x, p.y, p.color, p.intensity);
	m_vg_pending.clear();

	printf("%s: vector pass start\n", machine().scheduler().time().as_string());

	m_vg_symaddr = 0;
	m_vg_phase = 0;
	m_vg_idle = false;
	m_vg_pass_start_time = machine().scheduler().time(); // diagnostic only, see vg_finish_vector()
	m_vg_symbol_count = 0;
	m_vg_vector_count = 0;
}


void segag80v_state::vg_add_point(int x, int y, u32 color, u8 intensity)
{
	m_vg_pending.push_back({x, y, color, intensity});
}


// Diagnostic only: reports how much real (scheduler) time this pass actually took to walk
// the whole symbol table and reach Last Symbol, out of curiosity re: how much headroom is
// left before the next vblank-driven reset would have caught it mid-pass.
void segag80v_state::vg_go_idle()
{
	attoseconds_t busy = (machine().scheduler().time() - m_vg_pass_start_time).as_attoseconds();
	printf("%s: vector pass complete after %.3fms, %u symbols %u vectors\n",
			machine().scheduler().time().as_string(), busy / 1.0e15, m_vg_symbol_count, m_vg_vector_count);
	m_vg_idle = true;
}


// One phase of the vector generator's state machine, timed to fire exactly when the real
// U51/U50 phase counter chain would reach it -- one call per phase, matching the phase
// list in the comment block above 1:1 (m_vg_phase IS that counter's current value).
// Because MAME schedules this via a real emu_timer alongside the Z80's own execution,
// m_vector_pc updates happen at genuine, CPU-concurrent scheduler time instead of being
// computed all at once per video frame -- an XY_PC_H/L read from the Z80 always sees
// whatever this state machine's real current position is, no approximation needed. This
// also fixes a subtler bug an earlier version of this function had: batching phases 0-9
// (or 10-14) into one step made the vecaddr latch (phase 6) only become visible once the
// *whole* batch's time had elapsed, not at phase 6's own boundary -- a real few-microsecond
// skew per symbol that per-phase timing removes entirely.
//
// Phase 15 (the per-pixel "length" draw) is likewise clocked one VCL tick at a time even
// though nothing can read the beam position mid-vector -- only m_vector_pc at the next
// symbol/vector latch -- so this buys no additional externally-observable accuracy over
// batching it. It's still done this way for literal 1:1 fidelity to the real phase counter,
// accepting the cost: a long vector list can burn a lot of real time in per-pixel steps
// before the next 40Hz reset catches up with it, up to ~VCL_CLOCK many timer events/sec
// (millions) in the worst case.
//
// Only ever called while !m_vg_idle -- vg_start_pass() is this state machine's sole reset
// path, and it's only ever invoked externally, from vblank_callback()'s real 40Hz signal.
TIMER_CALLBACK_MEMBER(segag80v_state::vg_clock)
{
	u8 *sintable = memregion("proms")->base();
	u8 *vectorram = m_vectorram;

	switch (m_vg_phase)
	{
	case 0:
		// Real bus arbitration would give the generator exclusive access to
		// vectorram for this whole 10-byte header burst; model that as one
		// atomic snapshot here rather than 10 separately-timed reads (see the
		// m_vg_header_snap comment in the header). The "draw" flag itself is
		// clocked at the end of phase 0.
		for (int i = 0; i < 10; i++)
			m_vg_header_snap[i] = vectorram[(m_vg_symaddr + i) & 0xfff];
		m_vg_symaddr += 10;
		m_vg_draw = m_vg_header_snap[0];
		m_vg_symbol_count++;
		break;

	case 1:
		// The low byte of the X coordinate is latched into the
		// up/down counters at U15/U16 during phase 1.
		m_vg_curx = m_vg_header_snap[1];
		break;

	case 2:
		// The low 3 bits of the high byte of the X coordinate are
		// latched into the up/down counter at U17 during phase 2.
		// Bit 2 of the input is latched as both bit 2 and 3.
		m_vg_curx |= (m_vg_header_snap[2] & 7) << 8;
		m_vg_curx |= (m_vg_curx << 1) & 0x800;
		break;

	case 3:
		// The low byte of the Y coordinate is latched into the
		// up/down counters at U18/U19 during phase 3.
		m_vg_cury = m_vg_header_snap[3];
		break;

	case 4:
		// The low 3 bits of the high byte of the X coordinate are
		// latched into the up/down counter at U17 during phase 4.
		// Bit 2 of the input is latched as both bit 2 and 3.
		m_vg_cury |= (m_vg_header_snap[4] & 7) << 8;
		m_vg_cury |= (m_vg_cury << 1) & 0x800;
		break;

	case 5:
		// The low byte of the vector address is latched into the
		// counters at U10/U11 during phase 5.
		m_vg_vecaddr = m_vg_header_snap[5];
		break;

	case 6:
		// The low 4 bits of the high byte of the vector address is
		// latched into the counter at U12 during phase 6. This is
		// the XY_PC_H/L readback -- update it right here, live.
		m_vg_vecaddr |= (m_vg_header_snap[6] & 0xf) << 8;
		m_vector_pc = m_vg_vecaddr;
		break;

	case 7:
		// The low byte of the symbol angle is latched into the tri-
		// state flip flop at U55 at the end of phase 7.
		m_vg_symangle = m_vg_header_snap[7];
		break;

	case 8:
		// The low 2 bits of the high byte of the symbol angle are
		// latched into flip flops at U26 at the end of phase 8.
		m_vg_symangle |= (m_vg_header_snap[8] & 3) << 8;
		break;

	case 9:
	{
		// The scale is latched in phase 9 as the X input to the
		// 25LS14 multiplier at U8. At the end of phase 9, CD7 (the
		// draw flag's high bit) preloads U51 to either 0 (new symbol
		// next) or 10 (another vector next) -- see phase 10's comment.
		m_vg_scale = m_vg_header_snap[9];
		m_vg_symbol_is_last = (m_vg_draw & 0x80) != 0;

		if (m_vg_draw & 1)
		{
			// Add a starting point to the vector list.
			int adjx, adjy;
			if (!adjust_xy(m_vg_curx, m_vg_cury, adjx, adjy))
				vg_add_point(adjx, adjy, 0, 0);
			m_vg_phase = 10;
		}
		else
		{
			// nothing to draw for this symbol -- straight to the next header,
			// or go idle (stop -- wait for vblank_callback()'s next reset) if
			// this was flagged as the last one
			if (m_vg_symbol_is_last)
			{
				vg_go_idle();
				return;
			}
			m_vg_phase = 0;
		}

		m_vg_timer->adjust(attotime(0, U51_ATTOS));
		return;
	}

	case 10:
		// Same atomic-burst reasoning as phase 0's header snapshot (see the
		// m_vg_vector_snap comment in the header): this vector's 4 address-fetch
		// bytes are read here as one atomic snapshot rather than 4 separately-
		// timed reads, so a concurrent CPU write can't tear vecangle/length
		// mid-fetch. The 'attribute' byte itself is latched at the end of
		// phase 10 into the tri-state flip flop at U2. The low bit controls
		// whether or not the beam is enabled. Bits 1-6 control the RGB color
		// (2 bits per component). Bit 7 of this value is latched into U52,
		// which controls the pre-load value for the phase generator (0 = new
		// symbol, 10 = another vector -- see phase 9).
		for (int i = 0; i < 4; i++)
			m_vg_vector_snap[i] = vectorram[(m_vg_vecaddr + i) & 0xfff];
		m_vg_attrib = m_vg_vector_snap[0];
		m_vg_vector_count++;
		break;

	case 11:
		// The length of the vector is loaded into the shift registers
		// at U6/U7 during phase 11. During phase 12, the 25LS14
		// multiplier at U8 is used to multiply the length by the
		// scale that was loaded during phase 9. The length is clocked
		// bit by bit out of U6/U7 and the result is clocked into the
		// other side. After the multiply, the 9 MSBs are loaded into
		// the counter chain at U15/16/17 and are used to count how
		// long to draw the vector.
		m_vg_length = (m_vg_vector_snap[1] * m_vg_scale) >> 7;
		break;

	case 12:
		// The vector angle low byte is latched at the end of phase 12
		// into the tri-state flip flop at U56.
		m_vg_vecangle = m_vg_vector_snap[2];
		break;

	case 13:
		// The vector angle high byte is preset on the CD bus during
		// phases 13 and 14, and is used as inputs to the adder at U46.
		// This is the vector's 4th and final address-fetch byte, so
		// the pointer's post-increment (and m_vector_pc) land here.
		//
		// The X increment value is looked up first (phase 13). The
		// sum of the latched symbol angle and the vector angle is
		// used as input to the PROM at U39. A0 is tied to ground.
		// A1-A9 map to bits 0-8 of the summed angles. The output from
		// the PROM is latched into U48.
		m_vg_vecangle |= (m_vg_vector_snap[3] & 3) << 8;
		m_vg_vecaddr += 4;
		m_vector_pc = m_vg_vecaddr;
		m_vg_deltax = sintable[((m_vg_vecangle + m_vg_symangle) & 0x1ff) << 1];
		break;

	case 14:
	{
		// The Y increment value is looked up second (phase 14). The
		// angle sum is used once again as the input to the PROM, but
		// this time an additional 0x100 is effectively added to it
		// before it is used; this separates sin from cos. The output
		// from the PROM is latched into U49. This also "sets up the
		// DRAW signal to clock on the next VCL edge" -- phase 15 below,
		// one VCL tick per length unit, matching the real hardware.
		m_vg_deltay = sintable[((m_vg_vecangle + m_vg_symangle + 0x100) & 0x1ff) << 1];

		// Compute color/intensity values from the attributes
		u32 color = vector_device::color222((m_vg_attrib >> 1) & 0x3f);
		u8 intensity = 0;
		if ((m_vg_attrib & 1) && color)
			intensity = 0xff;
		m_vg_color = color;
		m_vg_intensity = intensity;

		int adjx, adjy;
		m_vg_clipped = adjust_xy(m_vg_curx, m_vg_cury, adjx, adjy);
		m_vg_xaccum = 0;
		m_vg_yaccum = 0;
		m_vg_draw_remaining = m_vg_length;

		if (m_vg_draw_remaining == 0)
		{
			// zero-length vector -- nothing to clock through phase 15, finish now
			vg_finish_vector(adjx, adjy);
			return;
		}

		m_vg_phase = 15;
		m_vg_timer->adjust(attotime(0, VCL_ATTOS));
		return;
	}

	case 15:
	{
		// One VCL-clocked step of the beam draw, repeated once per length unit.

		// The adders at U44/U45 are used as X accumulators. The value
		// from U48 is repeatedly added to itself here. The carry out
		// of bit 8 clocks the up/down counters at U15/U16/U17. Bit 7
		// of the input value from U48 is used as a carry in to round
		// small values downward and larger values upward.
		m_vg_xaccum += m_vg_deltax + (m_vg_deltax >> 7);

		// Bit 9 of the summed angles controls the direction the up/
		// down counters at U15/U16/U17.
		if (((m_vg_vecangle + m_vg_symangle) & 0x200) == 0)
			m_vg_curx += m_vg_xaccum >> 8;
		else
			m_vg_curx -= m_vg_xaccum >> 8;
		m_vg_xaccum &= 0xff;

		// The adders at U46/U47 are used as Y accumulators. The value
		// from U49 is repeatedly added to itself here. The carry out
		// of bit 8 clocks the up/down counters at U18/U19/U20. Bit 7
		// of the input value from U49 is used as a carry in to round
		// small values downward and larger values upward.
		m_vg_yaccum += m_vg_deltay + (m_vg_deltay >> 7);

		// Bit 9 of the summed angles controls the direction the up/
		// down counters at U18/U19/U20.
		if (((m_vg_vecangle + m_vg_symangle + 0x100) & 0x200) == 0)
			m_vg_cury += m_vg_yaccum >> 8;
		else
			m_vg_cury -= m_vg_yaccum >> 8;
		m_vg_yaccum &= 0xff;

		// Apply the clipping from the DAC circuit. If the values clip
		// the beam is turned off, but the computations continue right
		// on going.
		int adjx, adjy;
		bool newclip = adjust_xy(m_vg_curx, m_vg_cury, adjx, adjy);
		if (newclip != m_vg_clipped)
		{
			// if we're just becoming unclipped, add an empty point
			if (!newclip)
				vg_add_point(adjx, adjy, 0, 0);

			// otherwise, add a colored point
			else
				vg_add_point(adjx, adjy, m_vg_color, m_vg_intensity);
		}
		m_vg_clipped = newclip;

		if (--m_vg_draw_remaining == 0)
		{
			vg_finish_vector(adjx, adjy);
			return;
		}

		m_vg_timer->adjust(attotime(0, VCL_ATTOS));
		return;
	}
	}

	// phases 0-8 and 10-13 just latch one byte/value each and advance to the next
	// phase, one U51 tick later; phases 9, 14, and 15 branch elsewhere and return above.
	m_vg_phase++;
	m_vg_timer->adjust(attotime(0, U51_ATTOS));
}


// Finishes a vector once phase 15's per-pixel draw runs out of length (or the vector was
// zero-length to begin with): adds the final point if the beam ended up unclipped, then
// decides whether the next phase is another vector in this symbol (10), a fresh symbol
// header (0), or -- if this was the last vector of the last symbol -- idle (stop, wait for
// vblank_callback()'s next reset), same branch phase 9 uses for a non-drawing symbol.
void segag80v_state::vg_finish_vector(int adjx, int adjy)
{
	if (!m_vg_clipped)
		vg_add_point(adjx, adjy, m_vg_color, m_vg_intensity);

	if (m_vg_attrib & 0x80)
	{
		if (m_vg_symbol_is_last)
		{
			vg_go_idle();
			return;
		}
		m_vg_phase = 0;
	}
	else
	{
		m_vg_phase = 10;
	}

	m_vg_timer->adjust(attotime(0, U51_ATTOS));
}


/***************************************************************************

  Start the video hardware emulation.

***************************************************************************/

void segag80v_state::video_start()
{
	if (!m_vectorram.bytes())
		throw emu_fatalerror("segag80v_state::video_start: !vectorram.bytes()");

	m_min_x = m_screen->visible_area().min_x;
	m_min_y = m_screen->visible_area().min_y;

	// allocate the vector generator's phase-clock timer, but don't start it here --
	// m_vg_idle starts true, so it stays parked (matching real hardware: nothing drawn
	// yet) until vblank_callback()'s first real 40Hz tick calls vg_start_pass() and
	// kicks it off, same as every reset after this one.
	m_vg_timer = timer_alloc(FUNC(segag80v_state::vg_clock), this);
}


u32 segag80v_state::screen_update_segag80v(screen_device &screen, bitmap_rgb32 &bitmap, const rectangle &cliprect)
{
	// the vector generator now runs continuously on its own VCL-clocked timer
	// (see vg_clock), independent of this 40Hz screen refresh callback -- this just
	// paints whatever it's accumulated into m_vector's point list so far.
	m_vector->screen_update(screen, bitmap, cliprect);
	return 0;
}
