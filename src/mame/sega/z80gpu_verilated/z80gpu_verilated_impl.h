// Implementation of z80gpu_verilated_accel: runs the real z80gpu RTL
// (z80gpu's src/accel_top.v and everything it instantiates) via Verilator,
// driven through its real Z80 bus pins, instead of a hand-ported C++
// reimplementation. #include this from segag80v.cpp only (see
// z80gpu_verilated.h). generated/ is Verilator's own output for
// `verilator --cc --top-module accel_top <accel_*.v files>` (z80gpu repo);
// regenerate and recopy Vaccel_top* here if the RTL changes.
#pragma once

// Verilator's Makefile normally passes these as -D flags; MAME's build
// doesn't, and compiles with -Werror -Wundef, so define them first.
#define VERILATOR 1
#define VM_COVERAGE 0
#define VM_SC 0
#define VM_TIMING 0
#define VM_TRACE 0
#define VM_TRACE_FST 0
#define VM_TRACE_VCD 0
#define VM_TRACE_SAIF 0
#define VM_VPI 0

// Verilator's own Makefiles compile this code with these warnings
// suppressed; replicate that here rather than touching MAME's global flags.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-variable"
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-but-set-variable"
#pragma clang diagnostic ignored "-Wunused-but-set-parameter"
#pragma clang diagnostic ignored "-Wsign-compare"
#pragma clang diagnostic ignored "-Wshadow"
#pragma clang diagnostic ignored "-Wtautological-compare"
#pragma clang diagnostic ignored "-Wuninitialized"
#pragma clang diagnostic ignored "-Wbool-operation"
#pragma clang diagnostic ignored "-Wparentheses-equality"
#pragma clang diagnostic ignored "-Wc++11-narrowing"

#include "generated/Vaccel_top.h"
#include "generated/verilated.cpp"
#include "generated/verilated_threads.cpp"
#include "generated/Vaccel_top__ALL.cpp"

#pragma clang diagnostic pop

// Required by Verilator when not linking SystemC; unused by this design.
double sc_time_stamp() { return 0; }

z80gpu_verilated_accel::z80gpu_verilated_accel()
{
	m_top = std::make_unique<Vaccel_top>();
	m_top->rst_ni = 0;
	m_top->iorq_n = 1;
	m_top->rd_n = 1;
	m_top->wr_n = 1;
	m_top->addr = 0;
	m_top->data_in = 0;
	tick();
	tick();
	m_top->rst_ni = 1;
	tick();
}

z80gpu_verilated_accel::~z80gpu_verilated_accel() = default;

// One full clk period, matching the sim testbenches' `always #5 clk = ~clk;`.
void z80gpu_verilated_accel::tick()
{
	m_top->clk = 0; m_top->eval();
	m_top->clk = 1; m_top->eval();
	m_cycles++;
}

// Assert addr/data/iorq_n/wr_n for one clock, then release -- matches
// sim/accel_top_tb.v's io_write task.
void z80gpu_verilated_accel::bus_write(uint8_t addr, uint8_t data)
{
	m_top->addr = addr;
	m_top->data_in = data;
	m_top->iorq_n = 0;
	m_top->wr_n = 0;
	tick();
	m_top->iorq_n = 1;
	m_top->wr_n = 1;
	tick();
}

// One bus read transaction -- matches sim/accel_top_tb.v's io_read task.
uint8_t z80gpu_verilated_accel::bus_read(uint8_t addr)
{
	m_top->addr = addr;
	m_top->iorq_n = 0;
	m_top->rd_n = 0;
	tick();
	uint8_t data = m_top->data_out;
	m_top->iorq_n = 1;
	m_top->rd_n = 1;
	tick();
	return data;
}

// Polls CTRL/STATUS (0xC9) until BUSY clears, same as a real Z80 driver
// loop. Returns clk_cpu cycles consumed, for segag80v.cpp's busy-time estimate.
uint32_t z80gpu_verilated_accel::run_to_done()
{
	uint64_t start = m_cycles;
	uint32_t spins = 0;
	while (bus_read(0xC9) & 0x01) {
		if (++spins > 1'000'000) {
			fprintf(stderr, "z80gpu_verilated_accel: accel_top never cleared BUSY -- real RTL hang?\n");
			break;
		}
	}
	return (uint32_t)(m_cycles - start);
}
