// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VACCEL_TOP__SYMS_H_
#define VERILATED_VACCEL_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vaccel_top.h"

// INCLUDE MODULE CLASSES
#include "Vaccel_top___024root.h"
#include "Vaccel_top_sincos_rom.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vaccel_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vaccel_top* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vaccel_top___024root           TOP;
    Vaccel_top_sincos_rom          TOP__accel_top__DOT__u_rotate__DOT__sc_pitch;
    Vaccel_top_sincos_rom          TOP__accel_top__DOT__u_rotate__DOT__sc_yaw;

    // CONSTRUCTORS
    Vaccel_top__Syms(VerilatedContext* contextp, const char* namep, Vaccel_top* modelp);
    ~Vaccel_top__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
