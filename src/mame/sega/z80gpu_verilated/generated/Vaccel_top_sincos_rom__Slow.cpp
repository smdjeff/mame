// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaccel_top.h for the primary calling header

#include "Vaccel_top__pch.h"

void Vaccel_top_sincos_rom___ctor_var_reset(Vaccel_top_sincos_rom* vlSelf);

Vaccel_top_sincos_rom::Vaccel_top_sincos_rom() = default;
Vaccel_top_sincos_rom::~Vaccel_top_sincos_rom() = default;

void Vaccel_top_sincos_rom::ctor(Vaccel_top__Syms* symsp, const char* namep) {
    vlSymsp = symsp;
    vlNamep = strdup(Verilated::catName(vlSymsp->name(), namep));
    // Reset structure values
    Vaccel_top_sincos_rom___ctor_var_reset(this);
}

void Vaccel_top_sincos_rom::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

void Vaccel_top_sincos_rom::dtor() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
