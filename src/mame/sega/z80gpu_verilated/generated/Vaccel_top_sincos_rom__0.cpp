// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaccel_top.h for the primary calling header

#include "Vaccel_top__pch.h"

void Vaccel_top_sincos_rom___nba_sequent__TOP__accel_top__DOT__u_rotate__DOT__sc_yaw__0(Vaccel_top_sincos_rom* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaccel_top_sincos_rom___nba_sequent__TOP__accel_top__DOT__u_rotate__DOT__sc_yaw__0\n"); );
    Vaccel_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdfgRegularize_hebeb780c_0_15;
    __VdfgRegularize_hebeb780c_0_15 = 0;
    CData/*7:0*/ __VdfgRegularize_hebeb780c_0_16;
    __VdfgRegularize_hebeb780c_0_16 = 0;
    // Body
    __VdfgRegularize_hebeb780c_0_15 = (0x000000ffU 
                                       & (- vlSelfRef.__PVT__rom
                                          [(0x000000ffU 
                                            & ((IData)(0xffU) 
                                               - (IData)(vlSymsp->TOP.accel_top__DOT__yaw_reg)))]));
    __VdfgRegularize_hebeb780c_0_16 = (0x000000ffU 
                                       & (- vlSelfRef.__PVT__rom
                                          [(0x000000ffU 
                                            & (IData)(vlSymsp->TOP.accel_top__DOT__yaw_reg))]));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_12 = (0x000fffffU 
                                                 & VL_EXTENDS_II(20,8, 
                                                                 ((0U 
                                                                   == 
                                                                   (3U 
                                                                    & ((IData)(vlSymsp->TOP.accel_top__DOT__yaw_reg) 
                                                                       >> 8U)))
                                                                   ? vlSelfRef.__PVT__rom
                                                                  [
                                                                  (0x000000ffU 
                                                                   & ((IData)(0xffU) 
                                                                      - (IData)(vlSymsp->TOP.accel_top__DOT__yaw_reg)))]
                                                                   : 
                                                                  ((1U 
                                                                    == 
                                                                    (3U 
                                                                     & ((IData)(vlSymsp->TOP.accel_top__DOT__yaw_reg) 
                                                                        >> 8U)))
                                                                    ? (IData)(__VdfgRegularize_hebeb780c_0_16)
                                                                    : 
                                                                   ((2U 
                                                                     == 
                                                                     (3U 
                                                                      & ((IData)(vlSymsp->TOP.accel_top__DOT__yaw_reg) 
                                                                         >> 8U)))
                                                                     ? (IData)(__VdfgRegularize_hebeb780c_0_15)
                                                                     : vlSelfRef.__PVT__rom
                                                                    [
                                                                    (0x000000ffU 
                                                                     & (IData)(vlSymsp->TOP.accel_top__DOT__yaw_reg))])))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_14 = (0x000fffffU 
                                                 & VL_EXTENDS_II(20,8, 
                                                                 ((0U 
                                                                   == 
                                                                   (3U 
                                                                    & ((IData)(vlSymsp->TOP.accel_top__DOT__yaw_reg) 
                                                                       >> 8U)))
                                                                   ? vlSelfRef.__PVT__rom
                                                                  [
                                                                  (0x000000ffU 
                                                                   & (IData)(vlSymsp->TOP.accel_top__DOT__yaw_reg))]
                                                                   : 
                                                                  ((1U 
                                                                    == 
                                                                    (3U 
                                                                     & ((IData)(vlSymsp->TOP.accel_top__DOT__yaw_reg) 
                                                                        >> 8U)))
                                                                    ? vlSelfRef.__PVT__rom
                                                                   [
                                                                   (0x000000ffU 
                                                                    & ((IData)(0xffU) 
                                                                       - (IData)(vlSymsp->TOP.accel_top__DOT__yaw_reg)))]
                                                                    : 
                                                                   ((2U 
                                                                     == 
                                                                     (3U 
                                                                      & ((IData)(vlSymsp->TOP.accel_top__DOT__yaw_reg) 
                                                                         >> 8U)))
                                                                     ? (IData)(__VdfgRegularize_hebeb780c_0_16)
                                                                     : (IData)(__VdfgRegularize_hebeb780c_0_15))))));
}

void Vaccel_top_sincos_rom___nba_sequent__TOP__accel_top__DOT__u_rotate__DOT__sc_pitch__0(Vaccel_top_sincos_rom* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaccel_top_sincos_rom___nba_sequent__TOP__accel_top__DOT__u_rotate__DOT__sc_pitch__0\n"); );
    Vaccel_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*7:0*/ __VdfgRegularize_hebeb780c_0_21;
    __VdfgRegularize_hebeb780c_0_21 = 0;
    CData/*7:0*/ __VdfgRegularize_hebeb780c_0_22;
    __VdfgRegularize_hebeb780c_0_22 = 0;
    // Body
    __VdfgRegularize_hebeb780c_0_21 = (0x000000ffU 
                                       & (- vlSelfRef.__PVT__rom
                                          [(0x000000ffU 
                                            & ((IData)(0xffU) 
                                               - (IData)(vlSymsp->TOP.accel_top__DOT__pitch_reg)))]));
    __VdfgRegularize_hebeb780c_0_22 = (0x000000ffU 
                                       & (- vlSelfRef.__PVT__rom
                                          [(0x000000ffU 
                                            & (IData)(vlSymsp->TOP.accel_top__DOT__pitch_reg))]));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_18 = (0x000fffffU 
                                                 & VL_EXTENDS_II(20,8, 
                                                                 ((0U 
                                                                   == 
                                                                   (3U 
                                                                    & ((IData)(vlSymsp->TOP.accel_top__DOT__pitch_reg) 
                                                                       >> 8U)))
                                                                   ? vlSelfRef.__PVT__rom
                                                                  [
                                                                  (0x000000ffU 
                                                                   & ((IData)(0xffU) 
                                                                      - (IData)(vlSymsp->TOP.accel_top__DOT__pitch_reg)))]
                                                                   : 
                                                                  ((1U 
                                                                    == 
                                                                    (3U 
                                                                     & ((IData)(vlSymsp->TOP.accel_top__DOT__pitch_reg) 
                                                                        >> 8U)))
                                                                    ? (IData)(__VdfgRegularize_hebeb780c_0_22)
                                                                    : 
                                                                   ((2U 
                                                                     == 
                                                                     (3U 
                                                                      & ((IData)(vlSymsp->TOP.accel_top__DOT__pitch_reg) 
                                                                         >> 8U)))
                                                                     ? (IData)(__VdfgRegularize_hebeb780c_0_21)
                                                                     : vlSelfRef.__PVT__rom
                                                                    [
                                                                    (0x000000ffU 
                                                                     & (IData)(vlSymsp->TOP.accel_top__DOT__pitch_reg))])))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_20 = (0x000fffffU 
                                                 & VL_EXTENDS_II(20,8, 
                                                                 ((0U 
                                                                   == 
                                                                   (3U 
                                                                    & ((IData)(vlSymsp->TOP.accel_top__DOT__pitch_reg) 
                                                                       >> 8U)))
                                                                   ? vlSelfRef.__PVT__rom
                                                                  [
                                                                  (0x000000ffU 
                                                                   & (IData)(vlSymsp->TOP.accel_top__DOT__pitch_reg))]
                                                                   : 
                                                                  ((1U 
                                                                    == 
                                                                    (3U 
                                                                     & ((IData)(vlSymsp->TOP.accel_top__DOT__pitch_reg) 
                                                                        >> 8U)))
                                                                    ? vlSelfRef.__PVT__rom
                                                                   [
                                                                   (0x000000ffU 
                                                                    & ((IData)(0xffU) 
                                                                       - (IData)(vlSymsp->TOP.accel_top__DOT__pitch_reg)))]
                                                                    : 
                                                                   ((2U 
                                                                     == 
                                                                     (3U 
                                                                      & ((IData)(vlSymsp->TOP.accel_top__DOT__pitch_reg) 
                                                                         >> 8U)))
                                                                     ? (IData)(__VdfgRegularize_hebeb780c_0_22)
                                                                     : (IData)(__VdfgRegularize_hebeb780c_0_21))))));
}
