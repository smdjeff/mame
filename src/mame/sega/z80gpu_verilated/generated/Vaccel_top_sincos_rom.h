// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaccel_top.h for the primary calling header

#ifndef VERILATED_VACCEL_TOP_SINCOS_ROM_H_
#define VERILATED_VACCEL_TOP_SINCOS_ROM_H_  // guard

#include "verilated.h"


class Vaccel_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vaccel_top_sincos_rom final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ sin_q7;
    CData/*7:0*/ cos_q7;
    SData/*9:0*/ angle;
    IData/*19:0*/ __VdfgRegularize_hebeb780c_0_12;
    IData/*19:0*/ __VdfgRegularize_hebeb780c_0_14;
    IData/*19:0*/ __VdfgRegularize_hebeb780c_0_18;
    IData/*19:0*/ __VdfgRegularize_hebeb780c_0_20;
    VlUnpacked<CData/*7:0*/, 256> __PVT__rom;

    // INTERNAL VARIABLES
    Vaccel_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vaccel_top_sincos_rom();
    ~Vaccel_top_sincos_rom();
    void ctor(Vaccel_top__Syms* symsp, const char* namep);
    void dtor();
    VL_UNCOPYABLE(Vaccel_top_sincos_rom);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
