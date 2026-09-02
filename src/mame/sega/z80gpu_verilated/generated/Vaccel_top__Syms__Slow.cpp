// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vaccel_top__pch.h"

Vaccel_top__Syms::Vaccel_top__Syms(VerilatedContext* contextp, const char* namep, Vaccel_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(922);
    // Setup sub module instances
    TOP__accel_top__DOT__u_rotate__DOT__sc_pitch.ctor(this, "accel_top.u_rotate.sc_pitch");
    TOP__accel_top__DOT__u_rotate__DOT__sc_yaw.ctor(this, "accel_top.u_rotate.sc_yaw");
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__accel_top__DOT__u_rotate__DOT__sc_pitch = &TOP__accel_top__DOT__u_rotate__DOT__sc_pitch;
    TOP.__PVT__accel_top__DOT__u_rotate__DOT__sc_yaw = &TOP__accel_top__DOT__u_rotate__DOT__sc_yaw;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__accel_top__DOT__u_rotate__DOT__sc_pitch.__Vconfigure(true);
    TOP__accel_top__DOT__u_rotate__DOT__sc_yaw.__Vconfigure(false);
}

Vaccel_top__Syms::~Vaccel_top__Syms() {
    // Tear down scopes
    // Tear down sub module instances
    TOP__accel_top__DOT__u_rotate__DOT__sc_yaw.dtor();
    TOP__accel_top__DOT__u_rotate__DOT__sc_pitch.dtor();
}
