// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaccel_top.h for the primary calling header

#include "Vaccel_top__pch.h"

void Vaccel_top___024root___ctor_var_reset(Vaccel_top___024root* vlSelf);

Vaccel_top___024root::Vaccel_top___024root(Vaccel_top__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vaccel_top___024root___ctor_var_reset(this);
}

void Vaccel_top___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vaccel_top___024root::~Vaccel_top___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
