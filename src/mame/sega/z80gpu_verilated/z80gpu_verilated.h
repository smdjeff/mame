// Declaration-only header (see z80gpu_verilated_impl.h for the real thing).
// Split PIMPL-style so this is safe to include from segag80v.h, which
// several translation units pull in -- the implementation must compile
// into exactly one of them or symbols collide at link time.
#pragma once

#include <cstdint>
#include <cstdio>
#include <memory>

class Vaccel_top;

class z80gpu_verilated_accel
{
public:
	z80gpu_verilated_accel();
	~z80gpu_verilated_accel();

	void tick();
	void bus_write(uint8_t addr, uint8_t data);
	uint8_t bus_read(uint8_t addr);
	uint32_t run_to_done();

private:
	std::unique_ptr<Vaccel_top> m_top;
	uint64_t m_cycles = 0;
};
