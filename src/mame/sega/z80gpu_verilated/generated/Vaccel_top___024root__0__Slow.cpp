// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaccel_top.h for the primary calling header

#include "Vaccel_top__pch.h"

VL_ATTR_COLD void Vaccel_top___024root___eval_static(Vaccel_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccel_top___024root___eval_static\n"); );
    Vaccel_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_ni__0 = vlSelfRef.rst_ni;
    vlSelfRef.__Vtrigprevexpr___TOP__addr__0 = vlSelfRef.addr;
    vlSelfRef.__Vtrigprevexpr___TOP__iorq_n__0 = vlSelfRef.iorq_n;
    vlSelfRef.__Vtrigprevexpr___TOP__rd_n__0 = vlSelfRef.rd_n;
    vlSelfRef.__Vtrigprevexpr___TOP__wr_n__0 = vlSelfRef.wr_n;
    vlSelfRef.__Vtrigprevexpr___TOP__data_in__0 = vlSelfRef.data_in;
    vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_ni__1 = vlSelfRef.rst_ni;
}

VL_ATTR_COLD void Vaccel_top___024root___eval_initial__TOP(Vaccel_top___024root* vlSelf);
VL_ATTR_COLD void Vaccel_top_sincos_rom___eval_initial__TOP__accel_top__DOT__u_rotate__DOT__sc_yaw(Vaccel_top_sincos_rom* vlSelf);

VL_ATTR_COLD void Vaccel_top___024root___eval_initial(Vaccel_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccel_top___024root___eval_initial\n"); );
    Vaccel_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vaccel_top___024root___eval_initial__TOP(vlSelf);
    Vaccel_top_sincos_rom___eval_initial__TOP__accel_top__DOT__u_rotate__DOT__sc_yaw((&vlSymsp->TOP__accel_top__DOT__u_rotate__DOT__sc_yaw));
    Vaccel_top_sincos_rom___eval_initial__TOP__accel_top__DOT__u_rotate__DOT__sc_yaw((&vlSymsp->TOP__accel_top__DOT__u_rotate__DOT__sc_pitch));
}

VL_ATTR_COLD void Vaccel_top___024root___eval_initial__TOP(Vaccel_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccel_top___024root___eval_initial__TOP\n"); );
    Vaccel_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[0U] = 0U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[1U] = 2U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[2U] = 3U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[3U] = 5U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[4U] = 6U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[5U] = 8U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[6U] = 9U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[7U] = 0x0bU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[8U] = 0x0dU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[9U] = 0x0eU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[10U] = 0x10U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[11U] = 0x11U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[12U] = 0x13U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[13U] = 0x14U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[14U] = 0x16U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[15U] = 0x18U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[16U] = 0x19U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[17U] = 0x1bU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[18U] = 0x1cU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[19U] = 0x1eU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[20U] = 0x1fU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[21U] = 0x21U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[22U] = 0x22U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[23U] = 0x24U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[24U] = 0x26U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[25U] = 0x27U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[26U] = 0x29U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[27U] = 0x2aU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[28U] = 0x2cU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[29U] = 0x2dU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[30U] = 0x2fU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[31U] = 0x30U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[32U] = 0x32U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[33U] = 0x34U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[34U] = 0x35U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[35U] = 0x37U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[36U] = 0x38U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[37U] = 0x3aU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[38U] = 0x3bU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[39U] = 0x3dU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[40U] = 0x3eU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[41U] = 0x40U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[42U] = 0x41U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[43U] = 0x43U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[44U] = 0x44U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[45U] = 0x46U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[46U] = 0x47U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[47U] = 0x49U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[48U] = 0x4aU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[49U] = 0x4cU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[50U] = 0x4dU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[51U] = 0x4fU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[52U] = 0x50U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[53U] = 0x52U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[54U] = 0x53U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[55U] = 0x55U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[56U] = 0x56U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[57U] = 0x58U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[58U] = 0x59U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[59U] = 0x5bU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[60U] = 0x5cU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[61U] = 0x5eU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[62U] = 0x5fU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[63U] = 0x61U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[64U] = 0x62U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[65U] = 0x64U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[66U] = 0x65U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[67U] = 0x66U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[68U] = 0x68U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[69U] = 0x69U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[70U] = 0x6bU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[71U] = 0x6cU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[72U] = 0x6eU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[73U] = 0x6fU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[74U] = 0x70U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[75U] = 0x72U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[76U] = 0x73U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[77U] = 0x75U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[78U] = 0x76U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[79U] = 0x77U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[80U] = 0x79U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[81U] = 0x7aU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[82U] = 0x7cU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[83U] = 0x7dU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[84U] = 0x7eU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[85U] = 0x80U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[86U] = 0x81U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[87U] = 0x82U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[88U] = 0x84U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[89U] = 0x85U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[90U] = 0x86U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[91U] = 0x88U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[92U] = 0x89U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[93U] = 0x8aU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[94U] = 0x8cU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[95U] = 0x8dU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[96U] = 0x8eU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[97U] = 0x90U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[98U] = 0x91U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[99U] = 0x92U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[100U] = 0x94U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[101U] = 0x95U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[102U] = 0x96U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[103U] = 0x97U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[104U] = 0x99U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[105U] = 0x9aU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[106U] = 0x9bU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[107U] = 0x9cU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[108U] = 0x9eU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[109U] = 0x9fU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[110U] = 0xa0U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[111U] = 0xa1U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[112U] = 0xa3U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[113U] = 0xa4U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[114U] = 0xa5U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[115U] = 0xa6U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[116U] = 0xa7U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[117U] = 0xa9U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[118U] = 0xaaU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[119U] = 0xabU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[120U] = 0xacU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[121U] = 0xadU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[122U] = 0xaeU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[123U] = 0xb0U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[124U] = 0xb1U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[125U] = 0xb2U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[126U] = 0xb3U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[127U] = 0xb4U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[128U] = 0xb5U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[129U] = 0xb6U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[130U] = 0xb7U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[131U] = 0xb8U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[132U] = 0xbaU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[133U] = 0xbbU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[134U] = 0xbcU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[135U] = 0xbdU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[136U] = 0xbeU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[137U] = 0xbfU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[138U] = 0xc0U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[139U] = 0xc1U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[140U] = 0xc2U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[141U] = 0xc3U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[142U] = 0xc4U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[143U] = 0xc5U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[144U] = 0xc6U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[145U] = 0xc7U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[146U] = 0xc8U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[147U] = 0xc9U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[148U] = 0xcaU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[149U] = 0xcbU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[150U] = 0xccU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[151U] = 0xcdU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[152U] = 0xceU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[153U] = 0xcfU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[154U] = 0xd0U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[155U] = 0xd1U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[156U] = 0xd1U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[157U] = 0xd2U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[158U] = 0xd3U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[159U] = 0xd4U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[160U] = 0xd5U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[161U] = 0xd6U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[162U] = 0xd7U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[163U] = 0xd8U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[164U] = 0xd8U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[165U] = 0xd9U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[166U] = 0xdaU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[167U] = 0xdbU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[168U] = 0xdcU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[169U] = 0xddU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[170U] = 0xddU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[171U] = 0xdeU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[172U] = 0xdfU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[173U] = 0xe0U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[174U] = 0xe0U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[175U] = 0xe1U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[176U] = 0xe2U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[177U] = 0xe3U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[178U] = 0xe3U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[179U] = 0xe4U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[180U] = 0xe5U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[181U] = 0xe5U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[182U] = 0xe6U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[183U] = 0xe7U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[184U] = 0xe8U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[185U] = 0xe8U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[186U] = 0xe9U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[187U] = 0xeaU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[188U] = 0xeaU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[189U] = 0xebU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[190U] = 0xebU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[191U] = 0xecU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[192U] = 0xedU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[193U] = 0xedU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[194U] = 0xeeU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[195U] = 0xeeU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[196U] = 0xefU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[197U] = 0xf0U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[198U] = 0xf0U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[199U] = 0xf1U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[200U] = 0xf1U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[201U] = 0xf2U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[202U] = 0xf2U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[203U] = 0xf3U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[204U] = 0xf3U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[205U] = 0xf4U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[206U] = 0xf4U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[207U] = 0xf5U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[208U] = 0xf5U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[209U] = 0xf6U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[210U] = 0xf6U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[211U] = 0xf6U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[212U] = 0xf7U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[213U] = 0xf7U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[214U] = 0xf8U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[215U] = 0xf8U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[216U] = 0xf8U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[217U] = 0xf9U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[218U] = 0xf9U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[219U] = 0xfaU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[220U] = 0xfaU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[221U] = 0xfaU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[222U] = 0xfbU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[223U] = 0xfbU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[224U] = 0xfbU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[225U] = 0xfbU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[226U] = 0xfcU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[227U] = 0xfcU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[228U] = 0xfcU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[229U] = 0xfdU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[230U] = 0xfdU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[231U] = 0xfdU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[232U] = 0xfdU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[233U] = 0xfeU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[234U] = 0xfeU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[235U] = 0xfeU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[236U] = 0xfeU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[237U] = 0xfeU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[238U] = 0xfeU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[239U] = 0xffU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[240U] = 0xffU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[241U] = 0xffU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[242U] = 0xffU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[243U] = 0xffU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[244U] = 0xffU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[245U] = 0xffU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[246U] = 0xffU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[247U] = 0xffU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[248U] = 0xffU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[249U] = 0xffU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[250U] = 0xffU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[251U] = 0xffU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[252U] = 0xffU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[253U] = 0xffU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[254U] = 0xffU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[255U] = 0xffU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[256U] = 0xffU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[257U] = 0xffU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[258U] = 0xffU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[259U] = 0xffU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[260U] = 0xffU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[261U] = 0xffU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[262U] = 0xffU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[263U] = 0xffU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[264U] = 0xffU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[265U] = 0xffU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[266U] = 0xffU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[267U] = 0xffU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[268U] = 0xffU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[269U] = 0xffU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[270U] = 0xffU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[271U] = 0xffU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[272U] = 0xffU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[273U] = 0xffU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[274U] = 0xfeU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[275U] = 0xfeU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[276U] = 0xfeU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[277U] = 0xfeU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[278U] = 0xfeU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[279U] = 0xfdU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[280U] = 0xfdU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[281U] = 0xfdU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[282U] = 0xfdU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[283U] = 0xfcU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[284U] = 0xfcU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[285U] = 0xfcU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[286U] = 0xfcU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[287U] = 0xfbU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[288U] = 0xfbU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[289U] = 0xfbU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[290U] = 0xfaU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[291U] = 0xfaU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[292U] = 0xfaU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[293U] = 0xf9U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[294U] = 0xf9U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[295U] = 0xf9U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[296U] = 0xf8U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[297U] = 0xf8U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[298U] = 0xf7U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[299U] = 0xf7U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[300U] = 0xf7U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[301U] = 0xf6U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[302U] = 0xf6U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[303U] = 0xf5U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[304U] = 0xf5U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[305U] = 0xf4U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[306U] = 0xf4U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[307U] = 0xf3U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[308U] = 0xf3U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[309U] = 0xf2U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[310U] = 0xf2U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[311U] = 0xf1U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[312U] = 0xf1U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[313U] = 0xf0U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[314U] = 0xf0U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[315U] = 0xefU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[316U] = 0xefU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[317U] = 0xeeU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[318U] = 0xeeU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[319U] = 0xedU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[320U] = 0xecU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[321U] = 0xecU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[322U] = 0xebU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[323U] = 0xeaU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[324U] = 0xeaU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[325U] = 0xe9U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[326U] = 0xe9U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[327U] = 0xe8U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[328U] = 0xe7U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[329U] = 0xe7U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[330U] = 0xe6U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[331U] = 0xe5U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[332U] = 0xe4U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[333U] = 0xe4U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[334U] = 0xe3U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[335U] = 0xe2U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[336U] = 0xe2U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[337U] = 0xe1U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[338U] = 0xe0U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[339U] = 0xdfU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[340U] = 0xdeU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[341U] = 0xdeU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[342U] = 0xddU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[343U] = 0xdcU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[344U] = 0xdbU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[345U] = 0xdaU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[346U] = 0xdaU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[347U] = 0xd9U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[348U] = 0xd8U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[349U] = 0xd7U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[350U] = 0xd6U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[351U] = 0xd5U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[352U] = 0xd5U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[353U] = 0xd4U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[354U] = 0xd3U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[355U] = 0xd2U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[356U] = 0xd1U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[357U] = 0xd0U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[358U] = 0xcfU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[359U] = 0xceU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[360U] = 0xcdU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[361U] = 0xccU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[362U] = 0xcbU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[363U] = 0xcaU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[364U] = 0xc9U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[365U] = 0xc8U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[366U] = 0xc8U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[367U] = 0xc7U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[368U] = 0xc6U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[369U] = 0xc5U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[370U] = 0xc4U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[371U] = 0xc2U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[372U] = 0xc1U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[373U] = 0xc0U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[374U] = 0xbfU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[375U] = 0xbeU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[376U] = 0xbdU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[377U] = 0xbcU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[378U] = 0xbbU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[379U] = 0xbaU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[380U] = 0xb9U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[381U] = 0xb8U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[382U] = 0xb7U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[383U] = 0xb6U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[384U] = 0xb5U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[385U] = 0xb3U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[386U] = 0xb2U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[387U] = 0xb1U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[388U] = 0xb0U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[389U] = 0xafU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[390U] = 0xaeU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[391U] = 0xadU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[392U] = 0xabU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[393U] = 0xaaU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[394U] = 0xa9U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[395U] = 0xa8U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[396U] = 0xa7U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[397U] = 0xa6U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[398U] = 0xa4U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[399U] = 0xa3U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[400U] = 0xa2U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[401U] = 0xa1U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[402U] = 0x9fU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[403U] = 0x9eU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[404U] = 0x9dU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[405U] = 0x9cU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[406U] = 0x9bU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[407U] = 0x99U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[408U] = 0x98U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[409U] = 0x97U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[410U] = 0x95U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[411U] = 0x94U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[412U] = 0x93U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[413U] = 0x92U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[414U] = 0x90U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[415U] = 0x8fU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[416U] = 0x8eU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[417U] = 0x8cU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[418U] = 0x8bU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[419U] = 0x8aU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[420U] = 0x88U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[421U] = 0x87U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[422U] = 0x86U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[423U] = 0x84U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[424U] = 0x83U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[425U] = 0x82U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[426U] = 0x80U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[427U] = 0x7fU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[428U] = 0x7eU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[429U] = 0x7cU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[430U] = 0x7bU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[431U] = 0x79U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[432U] = 0x78U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[433U] = 0x77U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[434U] = 0x75U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[435U] = 0x74U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[436U] = 0x73U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[437U] = 0x71U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[438U] = 0x70U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[439U] = 0x6eU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[440U] = 0x6dU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[441U] = 0x6bU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[442U] = 0x6aU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[443U] = 0x69U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[444U] = 0x67U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[445U] = 0x66U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[446U] = 0x64U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[447U] = 0x63U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[448U] = 0x61U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[449U] = 0x60U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[450U] = 0x5eU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[451U] = 0x5dU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[452U] = 0x5bU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[453U] = 0x5aU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[454U] = 0x59U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[455U] = 0x57U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[456U] = 0x56U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[457U] = 0x54U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[458U] = 0x53U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[459U] = 0x51U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[460U] = 0x50U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[461U] = 0x4eU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[462U] = 0x4dU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[463U] = 0x4bU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[464U] = 0x4aU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[465U] = 0x48U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[466U] = 0x47U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[467U] = 0x45U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[468U] = 0x44U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[469U] = 0x42U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[470U] = 0x41U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[471U] = 0x3fU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[472U] = 0x3dU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[473U] = 0x3cU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[474U] = 0x3aU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[475U] = 0x39U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[476U] = 0x37U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[477U] = 0x36U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[478U] = 0x34U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[479U] = 0x33U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[480U] = 0x31U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[481U] = 0x30U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[482U] = 0x2eU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[483U] = 0x2dU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[484U] = 0x2bU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[485U] = 0x29U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[486U] = 0x28U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[487U] = 0x26U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[488U] = 0x25U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[489U] = 0x23U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[490U] = 0x22U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[491U] = 0x20U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[492U] = 0x1fU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[493U] = 0x1dU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[494U] = 0x1bU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[495U] = 0x1aU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[496U] = 0x18U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[497U] = 0x17U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[498U] = 0x15U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[499U] = 0x14U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[500U] = 0x12U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[501U] = 0x10U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[502U] = 0x0fU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[503U] = 0x0dU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[504U] = 0x0cU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[505U] = 0x0aU;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[506U] = 9U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[507U] = 7U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[508U] = 6U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[509U] = 4U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[510U] = 2U;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[511U] = 1U;
}

VL_ATTR_COLD void Vaccel_top___024root___eval_final(Vaccel_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccel_top___024root___eval_final\n"); );
    Vaccel_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaccel_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vaccel_top___024root___eval_phase__stl(Vaccel_top___024root* vlSelf);

VL_ATTR_COLD void Vaccel_top___024root___eval_settle(Vaccel_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccel_top___024root___eval_settle\n"); );
    Vaccel_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vaccel_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("src/accel_top.v", 82, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vaccel_top___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD bool Vaccel_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaccel_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccel_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vaccel_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vaccel_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccel_top___024root___trigger_anySet__stl\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

VL_ATTR_COLD void Vaccel_top___024root___stl_sequent__TOP__0(Vaccel_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccel_top___024root___stl_sequent__TOP__0\n"); );
    Vaccel_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ __VdfgRegularize_hebeb780c_0_6;
    __VdfgRegularize_hebeb780c_0_6 = 0;
    SData/*15:0*/ __VdfgRegularize_hebeb780c_0_7;
    __VdfgRegularize_hebeb780c_0_7 = 0;
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_8;
    __VdfgRegularize_hebeb780c_0_8 = 0;
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_10;
    __VdfgRegularize_hebeb780c_0_10 = 0;
    SData/*8:0*/ __VdfgRegularize_hebeb780c_0_23;
    __VdfgRegularize_hebeb780c_0_23 = 0;
    SData/*8:0*/ __VdfgRegularize_hebeb780c_0_24;
    __VdfgRegularize_hebeb780c_0_24 = 0;
    IData/*23:0*/ __VdfgRegularize_hebeb780c_0_27;
    __VdfgRegularize_hebeb780c_0_27 = 0;
    IData/*23:0*/ __VdfgRegularize_hebeb780c_0_28;
    __VdfgRegularize_hebeb780c_0_28 = 0;
    IData/*19:0*/ __VdfgRegularize_hebeb780c_0_29;
    __VdfgRegularize_hebeb780c_0_29 = 0;
    IData/*19:0*/ __VdfgRegularize_hebeb780c_0_30;
    __VdfgRegularize_hebeb780c_0_30 = 0;
    IData/*19:0*/ __VdfgRegularize_hebeb780c_0_31;
    __VdfgRegularize_hebeb780c_0_31 = 0;
    IData/*19:0*/ __VdfgRegularize_hebeb780c_0_32;
    __VdfgRegularize_hebeb780c_0_32 = 0;
    IData/*19:0*/ __VdfgRegularize_hebeb780c_0_33;
    __VdfgRegularize_hebeb780c_0_33 = 0;
    IData/*19:0*/ __VdfgRegularize_hebeb780c_0_34;
    __VdfgRegularize_hebeb780c_0_34 = 0;
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_35;
    __VdfgRegularize_hebeb780c_0_35 = 0;
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_36;
    __VdfgRegularize_hebeb780c_0_36 = 0;
    IData/*31:0*/ __VdfgRegularize_hebeb780c_0_37;
    __VdfgRegularize_hebeb780c_0_37 = 0;
    // Body
    vlSelfRef.shape_load_data = vlSelfRef.data_in;
    vlSelfRef.shape_load_addr = (0x00000fffU & (IData)(vlSelfRef.accel_top__DOT__load_addr_reg));
    vlSelfRef.accel_top__DOT__u_rotate__DOT__vidx2 
        = ((IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__vidx) 
           << 1U);
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__mag_shifted 
        = (0x000003ffffffffffULL & VL_SHIFTRS_QQI(42,42,32, vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__mag_wide, 0x00000016U));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_11 = (0x000fffffU 
                                                 & VL_EXTENDS_II(20,8, (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__xs)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_13 = (0x000fffffU 
                                                 & VL_EXTENDS_II(20,8, (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__zs)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_17 = (0x000fffffU 
                                                 & VL_EXTENDS_II(20,8, (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__z1)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_19 = (0x000fffffU 
                                                 & VL_EXTENDS_II(20,8, (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__ys)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_38 = ((0x00000100U 
                                                  & ((IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__ax) 
                                                     << 1U)) 
                                                 | (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__ax));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_39 = ((0x00000100U 
                                                  & ((IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__ay) 
                                                     << 1U)) 
                                                 | (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__ay));
    vlSelfRef.accel_top__DOT__clip_effective_part_count 
        = ((IData)(vlSelfRef.accel_top__DOT__desc_part_count_reg) 
           & (- (IData)((IData)(vlSelfRef.accel_top__DOT__clip_enable_reg))));
    vlSelfRef.accel_top__DOT__u_clip__DOT__interp_result 
        = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, VL_MULS_III(32, 
                                                              VL_EXTENDS_II(32,16, (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__interp_t)), 
                                                              VL_EXTENDS_II(32,16, (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__interp_delta))), 0x0000000fU));
    vlSelfRef.accel_top__DOT__u_cull__DOT__mul_p = 
        (0x0003ffffU & VL_MULS_III(18, (0x0003ffffU 
                                        & VL_EXTENDS_II(18,9, (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__mul_a))), 
                                   (0x0003ffffU & VL_EXTENDS_II(18,9, (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__mul_b)))));
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_div__DOT__shifted_rem 
        = (((QData)((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__u_div__DOT__rem)) 
            << 1U) | (QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.accel_top__DOT__u_clip__DOT__u_div__DOT__quot 
                                                    >> 0x0000002eU))))));
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__y_shifted 
        = (0x00ffffffU & VL_SHIFTRS_III(24,24,4, vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__y, (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__iter)));
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__x_shifted 
        = (0x00ffffffU & VL_SHIFTRS_III(24,24,4, vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__x, (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__iter)));
    vlSelfRef.accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__shifted_rem 
        = (((QData)((IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__rem)) 
            << 1U) | (QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__quot 
                                                    >> 0x0000002eU))))));
    __VdfgRegularize_hebeb780c_0_6 = (0x000000ffU & 
                                      (((0x000001ffU 
                                         & ((1U & (vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom
                                                   [
                                                   (0x000001ffU 
                                                    & ((IData)(0x0100U) 
                                                       + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_angle_latched)))] 
                                                   >> 7U)) 
                                            + vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom
                                            [(0x000001ffU 
                                              & ((IData)(0x0100U) 
                                                 + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_angle_latched)))])) 
                                        * (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_mag_latched)) 
                                       >> 8U));
    __VdfgRegularize_hebeb780c_0_7 = (0x000000ffU & 
                                      (((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_mag_latched) 
                                        * (0x000001ffU 
                                           & ((1U & 
                                               (vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom
                                                [(0x000001ffU 
                                                  & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_angle_latched))] 
                                                >> 7U)) 
                                              + vlSelfRef.accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom
                                              [(0x000001ffU 
                                                & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_angle_latched))]))) 
                                       >> 8U));
    __VdfgRegularize_hebeb780c_0_8 = VL_EXTENDS_II(32,16, 
                                                   (0x0000ffffU 
                                                    & (((0x0000ff00U 
                                                         & ((- (IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__x1) 
                                                                           >> 7U)))) 
                                                            << 8U)) 
                                                        | (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__x1)) 
                                                       << (IData)(vlSelfRef.accel_top__DOT__desc_coord_shift_reg))));
    __VdfgRegularize_hebeb780c_0_10 = VL_EXTENDS_II(32,16, 
                                                    (0x0000ffffU 
                                                     & (((0x0000ff00U 
                                                          & ((- (IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__y1) 
                                                                            >> 7U)))) 
                                                             << 8U)) 
                                                         | (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__y1)) 
                                                        << (IData)(vlSelfRef.accel_top__DOT__desc_coord_shift_reg))));
    vlSelfRef.accel_top__DOT__faces_base = (0x00000fffU 
                                            & ((IData)(vlSelfRef.accel_top__DOT__desc_base_reg) 
                                               + ((IData)(6U) 
                                                  * (IData)(vlSelfRef.accel_top__DOT__desc_vertex_count_reg))));
    vlSelfRef.accel_top__DOT__io_write = (1U & (~ ((IData)(vlSelfRef.iorq_n) 
                                                   | (IData)(vlSelfRef.wr_n))));
    vlSelfRef.accel_top__DOT__u_clip__DOT__ev8_which 
        = ((((1U == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__ev8sub)) 
             | (4U == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__ev8sub)))
             ? 1U : 2U) & (- (IData)((1U & (~ ((0U 
                                                == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__ev8sub)) 
                                               | (3U 
                                                  == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__ev8sub))))))));
    __VdfgRegularize_hebeb780c_0_23 = (0x000001ffU 
                                       & VL_EXTENDS_II(9,8, vlSelfRef.accel_top__DOT__u_clip__DOT__cfx8
                                                       [
                                                       (3U 
                                                        & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__pe))]));
    __VdfgRegularize_hebeb780c_0_24 = (0x000001ffU 
                                       & VL_EXTENDS_II(9,8, vlSelfRef.accel_top__DOT__u_clip__DOT__cfy8
                                                       [
                                                       (3U 
                                                        & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__pe))]));
    vlSelfRef.accel_top__DOT__u_clip__DOT__is_last_poly_edge 
        = ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__pe) 
           == (0x0000000fU & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__nverts) 
                              - (IData)(1U))));
    __VdfgRegularize_hebeb780c_0_29 = (0x000fffffU 
                                       & VL_EXTENDS_II(20,9, 
                                                       (0x000001ffU 
                                                        & (VL_EXTENDS_II(9,8, vlSelfRef.accel_top__DOT__u_clip__DOT__cfy8[1U]) 
                                                           - 
                                                           VL_EXTENDS_II(9,8, vlSelfRef.accel_top__DOT__u_clip__DOT__cfy8[0U])))));
    __VdfgRegularize_hebeb780c_0_30 = (0x000fffffU 
                                       & VL_EXTENDS_II(20,9, 
                                                       (0x000001ffU 
                                                        & (VL_EXTENDS_II(9,8, vlSelfRef.accel_top__DOT__u_clip__DOT__cfz8[2U]) 
                                                           - 
                                                           VL_EXTENDS_II(9,8, vlSelfRef.accel_top__DOT__u_clip__DOT__cfz8[0U])))));
    __VdfgRegularize_hebeb780c_0_31 = (0x000fffffU 
                                       & VL_EXTENDS_II(20,9, 
                                                       (0x000001ffU 
                                                        & (VL_EXTENDS_II(9,8, vlSelfRef.accel_top__DOT__u_clip__DOT__cfz8[1U]) 
                                                           - 
                                                           VL_EXTENDS_II(9,8, vlSelfRef.accel_top__DOT__u_clip__DOT__cfz8[0U])))));
    __VdfgRegularize_hebeb780c_0_32 = (0x000fffffU 
                                       & VL_EXTENDS_II(20,9, 
                                                       (0x000001ffU 
                                                        & (VL_EXTENDS_II(9,8, vlSelfRef.accel_top__DOT__u_clip__DOT__cfy8[2U]) 
                                                           - 
                                                           VL_EXTENDS_II(9,8, vlSelfRef.accel_top__DOT__u_clip__DOT__cfy8[0U])))));
    __VdfgRegularize_hebeb780c_0_33 = (0x000fffffU 
                                       & VL_EXTENDS_II(20,9, 
                                                       (0x000001ffU 
                                                        & (VL_EXTENDS_II(9,8, vlSelfRef.accel_top__DOT__u_clip__DOT__cfx8[2U]) 
                                                           - 
                                                           VL_EXTENDS_II(9,8, vlSelfRef.accel_top__DOT__u_clip__DOT__cfx8[0U])))));
    __VdfgRegularize_hebeb780c_0_34 = (0x000fffffU 
                                       & VL_EXTENDS_II(20,9, 
                                                       (0x000001ffU 
                                                        & (VL_EXTENDS_II(9,8, vlSelfRef.accel_top__DOT__u_clip__DOT__cfx8[1U]) 
                                                           - 
                                                           VL_EXTENDS_II(9,8, vlSelfRef.accel_top__DOT__u_clip__DOT__cfx8[0U])))));
    vlSelfRef.accel_top__DOT__io_read = (1U & (~ ((IData)(vlSelfRef.iorq_n) 
                                                  | (IData)(vlSelfRef.rd_n))));
    vlSelfRef.accel_top__DOT__u_clip__DOT__hw_dy = 
        (0x0000ffffU & ((0x00000200U & ((IData)(0x0100U) 
                                        + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_angle_latched)))
                         ? (- (IData)(__VdfgRegularize_hebeb780c_0_6))
                         : (IData)(__VdfgRegularize_hebeb780c_0_6)));
    vlSelfRef.accel_top__DOT__u_clip__DOT__hw_dx = 
        (0x0000ffffU & ((0x00000200U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_angle_latched))
                         ? (- (IData)(__VdfgRegularize_hebeb780c_0_7))
                         : (IData)(__VdfgRegularize_hebeb780c_0_7)));
    if ((0U != (IData)(vlSelfRef.accel_top__DOT__distance_reg))) {
        vlSelfRef.accel_top__DOT__u_rotate__DOT__px_final 
            = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                            VL_MULS_III(32, __VdfgRegularize_hebeb780c_0_8, 
                                                        VL_EXTENDS_II(32,16, (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__scale_q15))), 0x0000000fU));
        vlSelfRef.accel_top__DOT__u_rotate__DOT__py_final 
            = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, 
                                            VL_MULS_III(32, 
                                                        VL_EXTENDS_II(32,16, (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__scale_q15)), __VdfgRegularize_hebeb780c_0_10), 0x0000000fU));
    } else {
        vlSelfRef.accel_top__DOT__u_rotate__DOT__px_final 
            = (0x0000ffffU & __VdfgRegularize_hebeb780c_0_8);
        vlSelfRef.accel_top__DOT__u_rotate__DOT__py_final 
            = (0x0000ffffU & __VdfgRegularize_hebeb780c_0_10);
    }
    vlSelfRef.accel_top__DOT__face_colors_base = (0x00000fffU 
                                                  & (((IData)(vlSelfRef.accel_top__DOT__desc_face_count_reg) 
                                                      << 2U) 
                                                     + (IData)(vlSelfRef.accel_top__DOT__faces_base)));
    vlSelfRef.accel_top__DOT__write_clip_enable = ((IData)(vlSelfRef.accel_top__DOT__io_write) 
                                                   & (0xd5U 
                                                      == (IData)(vlSelfRef.addr)));
    vlSelfRef.shape_load_we = ((~ (IData)(vlSelfRef.accel_top__DOT__busy)) 
                               & ((IData)(vlSelfRef.accel_top__DOT__io_write) 
                                  & (0xd4U == (IData)(vlSelfRef.addr))));
    vlSelfRef.accel_top__DOT__write_ctrl = ((IData)(vlSelfRef.accel_top__DOT__io_write) 
                                            & (0xc9U 
                                               == (IData)(vlSelfRef.addr)));
    vlSelfRef.accel_top__DOT__scratch_a_addr = (0x00000fffU 
                                                & ((1U 
                                                    == (IData)(vlSelfRef.accel_top__DOT__active_stage))
                                                    ? (IData)(vlSelfRef.accel_top__DOT__rotate_scr_addr)
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelfRef.accel_top__DOT__active_stage))
                                                     ? 
                                                    ((IData)(vlSelfRef.accel_top__DOT__cull_scr_we)
                                                      ? (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__write_addr_reg)
                                                      : 
                                                     (((1U 
                                                        & (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__csub))
                                                        ? 0x0226U
                                                        : 0x01b8U) 
                                                      + 
                                                      (vlSelfRef.accel_top__DOT__u_cull__DOT__fv
                                                       [
                                                       (3U 
                                                        & ((IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__csub) 
                                                           >> 1U))] 
                                                       & (- (IData)(
                                                                    (2U 
                                                                     >= 
                                                                     (3U 
                                                                      & ((IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__csub) 
                                                                         >> 1U))))))))
                                                     : 
                                                    (((IData)(vlSelfRef.accel_top__DOT__clip_scr_we)
                                                       ? (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__write_addr_reg)
                                                       : 
                                                      (((3U 
                                                         == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state)) 
                                                        | (4U 
                                                           == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state)))
                                                        ? 
                                                       ((IData)(0x0302U) 
                                                        + 
                                                        (0x0000001fU 
                                                         & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__fvsub)
                                                             ? 
                                                            ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__faceB) 
                                                             >> 3U)
                                                             : 
                                                            ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__faceA) 
                                                             >> 3U))))
                                                        : 
                                                       (((0x13U 
                                                          == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state)) 
                                                         | (0x14U 
                                                            == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state)))
                                                         ? 
                                                        ((IData)(0x0302U) 
                                                         + 
                                                         (0x0000001fU 
                                                          & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__j) 
                                                             >> 3U)))
                                                         : 
                                                        (((8U 
                                                           == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state)) 
                                                          | (9U 
                                                             == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state)))
                                                          ? 
                                                         (((0U 
                                                            == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__ev8_which))
                                                            ? 0x01b8U
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__ev8_which))
                                                             ? 0x0226U
                                                             : 0x0294U)) 
                                                          + 
                                                          ((3U 
                                                            <= (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__ev8sub))
                                                            ? (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__v1)
                                                            : (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__v0)))
                                                          : 
                                                         (((0x0aU 
                                                            == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state)) 
                                                           | (0x0bU 
                                                              == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state)))
                                                           ? 
                                                          ((0x00dcU 
                                                            & (- (IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__ev16sub) 
                                                                             >> 1U))))) 
                                                           + 
                                                           ((1U 
                                                             & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__ev16sub)) 
                                                            + 
                                                            (((4U 
                                                               <= (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__ev16sub))
                                                               ? (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__v1)
                                                               : (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__v0)) 
                                                             << 1U)))
                                                           : 
                                                          (((8U 
                                                             & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__cfcrdsub))
                                                             ? 
                                                            ((IData)(0x0294U) 
                                                             + vlSelfRef.accel_top__DOT__u_clip__DOT__cf_v
                                                             [
                                                             (3U 
                                                              & ((8U 
                                                                  & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__cfcrdsub))
                                                                  ? (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__cfcrdsub)
                                                                  : 
                                                                 ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__cfcrdsub) 
                                                                  >> 1U)))])
                                                             : 
                                                            (((1U 
                                                               & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__cfcrdsub))
                                                               ? 0x0226U
                                                               : 0x01b8U) 
                                                             + vlSelfRef.accel_top__DOT__u_clip__DOT__cf_v
                                                             [
                                                             (3U 
                                                              & ((8U 
                                                                  & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__cfcrdsub))
                                                                  ? (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__cfcrdsub)
                                                                  : 
                                                                 ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__cfcrdsub) 
                                                                  >> 1U)))])) 
                                                           & (- (IData)(
                                                                        ((0x15U 
                                                                          == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state)) 
                                                                         | (0x16U 
                                                                            == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))))))))))) 
                                                     & (- (IData)(
                                                                  (3U 
                                                                   == (IData)(vlSelfRef.accel_top__DOT__active_stage))))))));
    vlSelfRef.accel_top__DOT__u_clip__DOT__pe_next 
        = (3U & (((IData)(1U) + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__pe)) 
                 & (- (IData)((1U & (~ (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__is_last_poly_edge)))))));
    __VdfgRegularize_hebeb780c_0_35 = VL_EXTENDS_II(32,20, 
                                                    (0x000fffffU 
                                                     & (VL_MULS_III(20, __VdfgRegularize_hebeb780c_0_29, __VdfgRegularize_hebeb780c_0_30) 
                                                        - 
                                                        VL_MULS_III(20, __VdfgRegularize_hebeb780c_0_31, __VdfgRegularize_hebeb780c_0_32))));
    __VdfgRegularize_hebeb780c_0_36 = VL_EXTENDS_II(32,20, 
                                                    (0x000fffffU 
                                                     & (VL_MULS_III(20, __VdfgRegularize_hebeb780c_0_31, __VdfgRegularize_hebeb780c_0_33) 
                                                        - 
                                                        VL_MULS_III(20, __VdfgRegularize_hebeb780c_0_30, __VdfgRegularize_hebeb780c_0_34))));
    __VdfgRegularize_hebeb780c_0_37 = VL_EXTENDS_II(32,20, 
                                                    (0x000fffffU 
                                                     & (VL_MULS_III(20, __VdfgRegularize_hebeb780c_0_32, __VdfgRegularize_hebeb780c_0_34) 
                                                        - 
                                                        VL_MULS_III(20, __VdfgRegularize_hebeb780c_0_29, __VdfgRegularize_hebeb780c_0_33))));
    vlSelfRef.accel_top__DOT__read_ctrl = ((IData)(vlSelfRef.accel_top__DOT__io_read) 
                                           & (0xc9U 
                                              == (IData)(vlSelfRef.addr)));
    vlSelfRef.accel_top__DOT__read_vec_count_lo = ((IData)(vlSelfRef.accel_top__DOT__io_read) 
                                                   & (0xcfU 
                                                      == (IData)(vlSelfRef.addr)));
    vlSelfRef.accel_top__DOT__read_vec_count_hi = ((IData)(vlSelfRef.accel_top__DOT__io_read) 
                                                   & (0xd0U 
                                                      == (IData)(vlSelfRef.addr)));
    vlSelfRef.accel_top__DOT__read_vec_data = ((IData)(vlSelfRef.accel_top__DOT__io_read) 
                                               & (0xd1U 
                                                  == (IData)(vlSelfRef.addr)));
    vlSelfRef.accel_top__DOT__read_clip_enable = ((IData)(vlSelfRef.accel_top__DOT__io_read) 
                                                  & (0xd5U 
                                                     == (IData)(vlSelfRef.addr)));
    vlSelfRef.accel_top__DOT__edges_base = (0x00000fffU 
                                            & ((IData)(vlSelfRef.accel_top__DOT__desc_face_count_reg) 
                                               + (IData)(vlSelfRef.accel_top__DOT__face_colors_base)));
    vlSelfRef.accel_top__DOT__start_pulse = ((IData)(vlSelfRef.accel_top__DOT__write_ctrl) 
                                             & ((~ (IData)(vlSelfRef.accel_top__DOT__busy)) 
                                                & (IData)(vlSelfRef.data_in)));
    __VdfgRegularize_hebeb780c_0_27 = (0x00ffffffU 
                                       & VL_EXTENDS_II(24,9, 
                                                       (0x000001ffU 
                                                        & (VL_EXTENDS_II(9,8, vlSelfRef.accel_top__DOT__u_clip__DOT__cfx8
                                                                         [vlSelfRef.accel_top__DOT__u_clip__DOT__pe_next]) 
                                                           - (IData)(__VdfgRegularize_hebeb780c_0_23)))));
    __VdfgRegularize_hebeb780c_0_28 = (0x00ffffffU 
                                       & VL_EXTENDS_II(24,9, 
                                                       (0x000001ffU 
                                                        & (VL_EXTENDS_II(9,8, vlSelfRef.accel_top__DOT__u_clip__DOT__cfy8
                                                                         [vlSelfRef.accel_top__DOT__u_clip__DOT__pe_next]) 
                                                           - (IData)(__VdfgRegularize_hebeb780c_0_24)))));
    vlSelfRef.accel_top__DOT__u_clip__DOT__dot0 = (
                                                   VL_MULS_III(32, __VdfgRegularize_hebeb780c_0_35, 
                                                               VL_EXTENDS_II(32,9, 
                                                                             (0x000001ffU 
                                                                              & (VL_EXTENDS_II(9,8, (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__v0x8)) 
                                                                                - 
                                                                                VL_EXTENDS_II(9,8, vlSelfRef.accel_top__DOT__u_clip__DOT__cfx8[0U]))))) 
                                                   + 
                                                   (VL_MULS_III(32, __VdfgRegularize_hebeb780c_0_36, 
                                                                VL_EXTENDS_II(32,9, 
                                                                              (0x000001ffU 
                                                                               & (VL_EXTENDS_II(9,8, (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__v0y8)) 
                                                                                - 
                                                                                VL_EXTENDS_II(9,8, vlSelfRef.accel_top__DOT__u_clip__DOT__cfy8[0U]))))) 
                                                    + 
                                                    VL_MULS_III(32, __VdfgRegularize_hebeb780c_0_37, 
                                                                VL_EXTENDS_II(32,9, 
                                                                              (0x000001ffU 
                                                                               & (VL_EXTENDS_II(9,8, (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__v0z8)) 
                                                                                - 
                                                                                VL_EXTENDS_II(9,8, vlSelfRef.accel_top__DOT__u_clip__DOT__cfz8[0U])))))));
    vlSelfRef.accel_top__DOT__u_clip__DOT__dot1 = (
                                                   VL_MULS_III(32, __VdfgRegularize_hebeb780c_0_35, 
                                                               VL_EXTENDS_II(32,9, 
                                                                             (0x000001ffU 
                                                                              & (VL_EXTENDS_II(9,8, (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__v1x8)) 
                                                                                - 
                                                                                VL_EXTENDS_II(9,8, vlSelfRef.accel_top__DOT__u_clip__DOT__cfx8[0U]))))) 
                                                   + 
                                                   (VL_MULS_III(32, __VdfgRegularize_hebeb780c_0_36, 
                                                                VL_EXTENDS_II(32,9, 
                                                                              (0x000001ffU 
                                                                               & (VL_EXTENDS_II(9,8, (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__v1y8)) 
                                                                                - 
                                                                                VL_EXTENDS_II(9,8, vlSelfRef.accel_top__DOT__u_clip__DOT__cfy8[0U]))))) 
                                                    + 
                                                    VL_MULS_III(32, __VdfgRegularize_hebeb780c_0_37, 
                                                                VL_EXTENDS_II(32,9, 
                                                                              (0x000001ffU 
                                                                               & (VL_EXTENDS_II(9,8, (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__v1z8)) 
                                                                                - 
                                                                                VL_EXTENDS_II(9,8, vlSelfRef.accel_top__DOT__u_clip__DOT__cfz8[0U])))))));
    vlSelfRef.sel = ((IData)(vlSelfRef.accel_top__DOT__read_ctrl) 
                     | ((IData)(vlSelfRef.accel_top__DOT__read_vec_count_lo) 
                        | ((IData)(vlSelfRef.accel_top__DOT__read_vec_count_hi) 
                           | ((IData)(vlSelfRef.accel_top__DOT__read_vec_data) 
                              | (IData)(vlSelfRef.accel_top__DOT__read_clip_enable)))));
    vlSelfRef.data_out = (0x000000ffU & ((IData)(vlSelfRef.accel_top__DOT__read_ctrl)
                                          ? (((IData)(vlSelfRef.accel_top__DOT__done_latch) 
                                              << 1U) 
                                             | (IData)(vlSelfRef.accel_top__DOT__busy))
                                          : ((IData)(vlSelfRef.accel_top__DOT__read_vec_count_lo)
                                              ? (IData)(vlSelfRef.accel_top__DOT__vec_count_reg)
                                              : ((IData)(vlSelfRef.accel_top__DOT__read_vec_count_hi)
                                                  ? 
                                                 ((IData)(vlSelfRef.accel_top__DOT__vec_count_reg) 
                                                  >> 8U)
                                                  : 
                                                 ((IData)(vlSelfRef.accel_top__DOT__read_vec_data)
                                                   ? (IData)(vlSelfRef.accel_top__DOT__vec_data_latch)
                                                   : 
                                                  ((- (IData)((IData)(vlSelfRef.accel_top__DOT__read_clip_enable))) 
                                                   & (((IData)(vlSelfRef.accel_top__DOT__hw_pen_correct_reg) 
                                                       << 1U) 
                                                      | (IData)(vlSelfRef.accel_top__DOT__clip_enable_reg))))))));
    vlSelfRef.accel_top__DOT__edge_colors_base = (0x00000fffU 
                                                  & (((IData)(vlSelfRef.accel_top__DOT__desc_edge_count_reg) 
                                                      << 2U) 
                                                     + (IData)(vlSelfRef.accel_top__DOT__edges_base)));
    vlSelfRef.accel_top__DOT__u_clip__DOT__sil_A = 
        (0x00ffffffU & (VL_MULS_III(24, __VdfgRegularize_hebeb780c_0_27, 
                                    (0x00ffffffU & 
                                     VL_EXTENDS_II(24,9, 
                                                   (0x000001ffU 
                                                    & (VL_EXTENDS_II(9,8, (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__v0y8)) 
                                                       - (IData)(__VdfgRegularize_hebeb780c_0_24)))))) 
                        - VL_MULS_III(24, __VdfgRegularize_hebeb780c_0_28, 
                                      (0x00ffffffU 
                                       & VL_EXTENDS_II(24,9, 
                                                       (0x000001ffU 
                                                        & (VL_EXTENDS_II(9,8, (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__v0x8)) 
                                                           - (IData)(__VdfgRegularize_hebeb780c_0_23))))))));
    vlSelfRef.accel_top__DOT__u_clip__DOT__sil_B = 
        (0x00ffffffU & (VL_MULS_III(24, __VdfgRegularize_hebeb780c_0_27, 
                                    (0x00ffffffU & 
                                     VL_EXTENDS_II(24,9, 
                                                   (0x000001ffU 
                                                    & (VL_EXTENDS_II(9,8, (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__v1y8)) 
                                                       - 
                                                       VL_EXTENDS_II(9,8, (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__v0y8))))))) 
                        - VL_MULS_III(24, __VdfgRegularize_hebeb780c_0_28, 
                                      (0x00ffffffU 
                                       & VL_EXTENDS_II(24,9, 
                                                       (0x000001ffU 
                                                        & (VL_EXTENDS_II(9,8, (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__v1x8)) 
                                                           - 
                                                           VL_EXTENDS_II(9,8, (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__v0x8)))))))));
}

void Vaccel_top_sincos_rom___nba_sequent__TOP__accel_top__DOT__u_rotate__DOT__sc_yaw__0(Vaccel_top_sincos_rom* vlSelf);
void Vaccel_top_sincos_rom___nba_sequent__TOP__accel_top__DOT__u_rotate__DOT__sc_pitch__0(Vaccel_top_sincos_rom* vlSelf);

VL_ATTR_COLD bool Vaccel_top___024root___eval_phase__stl(Vaccel_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccel_top___024root___eval_phase__stl\n"); );
    Vaccel_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__stl
        vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                          & vlSelfRef.__VstlTriggered[0U]) 
                                         | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vaccel_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vaccel_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vaccel_top___024root___stl_sequent__TOP__0(vlSelf);
                Vaccel_top_sincos_rom___nba_sequent__TOP__accel_top__DOT__u_rotate__DOT__sc_yaw__0((&vlSymsp->TOP__accel_top__DOT__u_rotate__DOT__sc_yaw));
                Vaccel_top_sincos_rom___nba_sequent__TOP__accel_top__DOT__u_rotate__DOT__sc_pitch__0((&vlSymsp->TOP__accel_top__DOT__u_rotate__DOT__sc_pitch));
            }
        }
    }
    return (__VstlExecute);
}

bool Vaccel_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaccel_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccel_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vaccel_top___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @( clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( rst_ni)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( addr)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( iorq_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( rd_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @( wr_n)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @( data_in)\n");
    }
    if ((1U & (IData)(triggers[1U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 64 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vaccel_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaccel_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccel_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vaccel_top___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge rst_ni)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vaccel_top___024root___ctor_var_reset(Vaccel_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccel_top___024root___ctor_var_reset\n"); );
    Vaccel_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_ni = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3161515032326629241ull);
    vlSelf->addr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14934084843038794831ull);
    vlSelf->iorq_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11899967842544616261ull);
    vlSelf->rd_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4917808325942757789ull);
    vlSelf->wr_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9096275881558974566ull);
    vlSelf->data_in = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10574596302020702150ull);
    vlSelf->data_out = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11675680895196038875ull);
    vlSelf->sel = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14660815779230110548ull);
    vlSelf->shape_load_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 4644824697138028765ull);
    vlSelf->shape_load_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4028890240104795267ull);
    vlSelf->shape_load_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15903042221522758969ull);
    vlSelf->accel_top__DOT__io_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 185199155278986550ull);
    vlSelf->accel_top__DOT__io_read = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13883343449443544284ull);
    vlSelf->accel_top__DOT__write_ctrl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10179758642734376036ull);
    vlSelf->accel_top__DOT__write_clip_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6377064335883769098ull);
    vlSelf->accel_top__DOT__read_ctrl = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10685417081481356617ull);
    vlSelf->accel_top__DOT__read_vec_count_lo = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6073832849435811893ull);
    vlSelf->accel_top__DOT__read_vec_count_hi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4231366018648998195ull);
    vlSelf->accel_top__DOT__read_vec_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1316486560093578517ull);
    vlSelf->accel_top__DOT__read_clip_enable = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15191565305938371037ull);
    vlSelf->accel_top__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18255158543766285186ull);
    vlSelf->accel_top__DOT__done_latch = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10248093767764473645ull);
    vlSelf->accel_top__DOT__desc_base_reg = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3704082495292412178ull);
    vlSelf->accel_top__DOT__desc_vertex_count_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4785393872685330000ull);
    vlSelf->accel_top__DOT__desc_face_count_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11675069129748830341ull);
    vlSelf->accel_top__DOT__desc_edge_count_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16745622247417892729ull);
    vlSelf->accel_top__DOT__desc_part_count_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13804543938585357894ull);
    vlSelf->accel_top__DOT__desc_coord_shift_reg = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7436921123580368144ull);
    vlSelf->accel_top__DOT__yaw_reg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17556711679774354210ull);
    vlSelf->accel_top__DOT__pitch_reg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3926974165367174375ull);
    vlSelf->accel_top__DOT__distance_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7597978693734703959ull);
    vlSelf->accel_top__DOT__vec_count_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6085122469841759051ull);
    vlSelf->accel_top__DOT__load_addr_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8768243245136359953ull);
    vlSelf->accel_top__DOT__vec_data_idx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 926603250797723416ull);
    vlSelf->accel_top__DOT__vec_data_latch = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10878740391778121922ull);
    vlSelf->accel_top__DOT__prev_read_vec_data = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17850311157694915030ull);
    vlSelf->accel_top__DOT__clip_enable_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5935839077895006708ull);
    vlSelf->accel_top__DOT__hw_pen_correct_reg = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5759517408614664159ull);
    vlSelf->accel_top__DOT__vecbuf_rdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12693162476669911416ull);
    vlSelf->accel_top__DOT__start_pulse = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12631613224130822427ull);
    vlSelf->accel_top__DOT__faces_base = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 12070261669048284103ull);
    vlSelf->accel_top__DOT__face_colors_base = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5285434642454646667ull);
    vlSelf->accel_top__DOT__edges_base = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 2041383241637344908ull);
    vlSelf->accel_top__DOT__edge_colors_base = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6238911357484378524ull);
    vlSelf->accel_top__DOT__rotate_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4144275757652401480ull);
    vlSelf->accel_top__DOT__cull_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14192576791055858709ull);
    vlSelf->accel_top__DOT__clip_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14733713589230943361ull);
    vlSelf->accel_top__DOT__rotate_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5823580623600819628ull);
    vlSelf->accel_top__DOT__cull_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3287226624738538511ull);
    vlSelf->accel_top__DOT__clip_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3625822254491172184ull);
    vlSelf->accel_top__DOT__clip_vec_count = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1507097965833622961ull);
    vlSelf->accel_top__DOT__rotate_scr_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6242418956906751590ull);
    vlSelf->accel_top__DOT__rotate_scr_wdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3220369355286410681ull);
    vlSelf->accel_top__DOT__rotate_scr_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5475870535209027096ull);
    vlSelf->accel_top__DOT__cull_scr_wdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15858930258477376767ull);
    vlSelf->accel_top__DOT__cull_scr_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12474130953896712753ull);
    vlSelf->accel_top__DOT__clip_scr_wdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12539557511452790977ull);
    vlSelf->accel_top__DOT__clip_scr_we = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1434930294394664734ull);
    vlSelf->accel_top__DOT__clip_effective_part_count = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7099288965645540940ull);
    vlSelf->accel_top__DOT__active_stage = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9431822737038648040ull);
    vlSelf->accel_top__DOT__mstate = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3813114235160299546ull);
    vlSelf->accel_top__DOT__shape_mem_rd_data = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2245951250842899890ull);
    vlSelf->accel_top__DOT__scratch_a_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 10090184855784887895ull);
    vlSelf->accel_top__DOT__scratch_a_rdata = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15418990854119843053ull);
    vlSelf->accel_top__DOT__u_clip__DOT__state = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9988075636292632985ull);
    vlSelf->accel_top__DOT__u_clip__DOT__i = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8126292050524453073ull);
    vlSelf->accel_top__DOT__u_clip__DOT__esub = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10058917647420951270ull);
    vlSelf->accel_top__DOT__u_clip__DOT__v0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13618140052814545356ull);
    vlSelf->accel_top__DOT__u_clip__DOT__v1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12871721959375425303ull);
    vlSelf->accel_top__DOT__u_clip__DOT__faceA = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12913058753843325734ull);
    vlSelf->accel_top__DOT__u_clip__DOT__faceB = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15662281415361247080ull);
    vlSelf->accel_top__DOT__u_clip__DOT__fv_a = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10388595889149247741ull);
    vlSelf->accel_top__DOT__u_clip__DOT__fv_b = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4062314083340853995ull);
    vlSelf->accel_top__DOT__u_clip__DOT__chosen_color = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5510290464437694861ull);
    vlSelf->accel_top__DOT__u_clip__DOT__edge_color_ovr = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12048148672108762572ull);
    vlSelf->accel_top__DOT__u_clip__DOT__colsub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17029206117560191312ull);
    vlSelf->accel_top__DOT__u_clip__DOT__fvsub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14523049085288460868ull);
    vlSelf->accel_top__DOT__u_clip__DOT__v0x8 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4077358011626813616ull);
    vlSelf->accel_top__DOT__u_clip__DOT__v0y8 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 129171487531452598ull);
    vlSelf->accel_top__DOT__u_clip__DOT__v0z8 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6962512428048153268ull);
    vlSelf->accel_top__DOT__u_clip__DOT__v1x8 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4357906852820531145ull);
    vlSelf->accel_top__DOT__u_clip__DOT__v1y8 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13151920844837476060ull);
    vlSelf->accel_top__DOT__u_clip__DOT__v1z8 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2822897843338740679ull);
    vlSelf->accel_top__DOT__u_clip__DOT__ev8sub = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9963178587437758637ull);
    vlSelf->accel_top__DOT__u_clip__DOT__px_v0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17818998962228463767ull);
    vlSelf->accel_top__DOT__u_clip__DOT__py_v0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16854735943138488427ull);
    vlSelf->accel_top__DOT__u_clip__DOT__px_v1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18220616102138165036ull);
    vlSelf->accel_top__DOT__u_clip__DOT__py_v1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14787815533028348233ull);
    vlSelf->accel_top__DOT__u_clip__DOT__ev16sub = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2871574715488953193ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->accel_top__DOT__u_clip__DOT__ev16_bytes[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 35640338848018206ull);
    }
    vlSelf->accel_top__DOT__u_clip__DOT__part_p = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7054728100674655171ull);
    vlSelf->accel_top__DOT__u_clip__DOT__part_start = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10778965253902886952ull);
    vlSelf->accel_top__DOT__u_clip__DOT__part_end_v = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7395319651134936045ull);
    vlSelf->accel_top__DOT__u_clip__DOT__pfesub = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18100441097259393558ull);
    vlSelf->accel_top__DOT__u_clip__DOT__j = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4907669645194931936ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->accel_top__DOT__u_clip__DOT__cf_v[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3120219473851210898ull);
    }
    vlSelf->accel_top__DOT__u_clip__DOT__cfvsub = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4923048146887973048ull);
    vlSelf->accel_top__DOT__u_clip__DOT__is_quad = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5749629322482611353ull);
    vlSelf->accel_top__DOT__u_clip__DOT__nverts = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8965666478517768354ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->accel_top__DOT__u_clip__DOT__cfx8[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16135659500792816913ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->accel_top__DOT__u_clip__DOT__cfy8[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15102949364296657636ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->accel_top__DOT__u_clip__DOT__cfz8[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17868073499234516172ull);
    }
    vlSelf->accel_top__DOT__u_clip__DOT__cfcrdsub = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4067421174823398374ull);
    vlSelf->accel_top__DOT__u_clip__DOT__pe = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17375503258684759186ull);
    vlSelf->accel_top__DOT__u_clip__DOT__cur_lo = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17876710740764741909ull);
    vlSelf->accel_top__DOT__u_clip__DOT__cur_hi = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7318329618514936114ull);
    vlSelf->accel_top__DOT__u_clip__DOT__div_num = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1868317007426179886ull);
    vlSelf->accel_top__DOT__u_clip__DOT__div_den = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9603892946952378259ull);
    vlSelf->accel_top__DOT__u_clip__DOT__div_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3837407440623684235ull);
    vlSelf->accel_top__DOT__u_clip__DOT__div_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4587280562372319275ull);
    vlSelf->accel_top__DOT__u_clip__DOT__div_q = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9303993955235863335ull);
    vlSelf->accel_top__DOT__u_clip__DOT__div_tighten_hi = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4100767790417593992ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->accel_top__DOT__u_clip__DOT__occ_lo[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15468758770008141585ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->accel_top__DOT__u_clip__DOT__occ_hi[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9710829799540526393ull);
    }
    vlSelf->accel_top__DOT__u_clip__DOT__occ_count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12089749736320613852ull);
    vlSelf->accel_top__DOT__u_clip__DOT__si = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4853547848010731069ull);
    vlSelf->accel_top__DOT__u_clip__DOT__sj = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16254824586657198491ull);
    vlSelf->accel_top__DOT__u_clip__DOT__tmp_lo = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7713177427817896754ull);
    vlSelf->accel_top__DOT__u_clip__DOT__tmp_hi = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3609562941649537035ull);
    vlSelf->accel_top__DOT__u_clip__DOT__new_lo = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14872104816944848896ull);
    vlSelf->accel_top__DOT__u_clip__DOT__new_hi = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9114175846477219781ull);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->accel_top__DOT__u_clip__DOT__vis_lo[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13579887813975045001ull);
    }
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->accel_top__DOT__u_clip__DOT__vis_hi[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11431715883193432456ull);
    }
    vlSelf->accel_top__DOT__u_clip__DOT__vis_count = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 17275071019216687816ull);
    vlSelf->accel_top__DOT__u_clip__DOT__cursor = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5731103553237678179ull);
    vlSelf->accel_top__DOT__u_clip__DOT__merge_wr = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3466130502407467849ull);
    vlSelf->accel_top__DOT__u_clip__DOT__vseg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6936772566173979671ull);
    vlSelf->accel_top__DOT__u_clip__DOT__seg_x0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5852931539918518479ull);
    vlSelf->accel_top__DOT__u_clip__DOT__seg_y0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2478165508149291939ull);
    vlSelf->accel_top__DOT__u_clip__DOT__seg_x1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11332278290380676166ull);
    vlSelf->accel_top__DOT__u_clip__DOT__seg_y1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15132286688525065300ull);
    vlSelf->accel_top__DOT__u_clip__DOT__penx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17710252685245004607ull);
    vlSelf->accel_top__DOT__u_clip__DOT__peny = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3168495553733858060ull);
    vlSelf->accel_top__DOT__u_clip__DOT__rtp_dx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8412908569190720936ull);
    vlSelf->accel_top__DOT__u_clip__DOT__rtp_dy = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16380229579218072191ull);
    vlSelf->accel_top__DOT__u_clip__DOT__hop2_dx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11411512676224584520ull);
    vlSelf->accel_top__DOT__u_clip__DOT__hop2_dy = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5804721725726174112ull);
    vlSelf->accel_top__DOT__u_clip__DOT__hop_pending = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15529606547839752401ull);
    vlSelf->accel_top__DOT__u_clip__DOT__rtp_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4743725299656170817ull);
    vlSelf->accel_top__DOT__u_clip__DOT__rtp_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3129792686506551434ull);
    vlSelf->accel_top__DOT__u_clip__DOT__rtp_magnitude = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16878036064706486635ull);
    vlSelf->accel_top__DOT__u_clip__DOT__rtp_angle = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3979089572316441605ull);
    vlSelf->accel_top__DOT__u_clip__DOT__rtp_mag_latched = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6471056025480551878ull);
    vlSelf->accel_top__DOT__u_clip__DOT__rtp_angle_latched = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15212718708666651242ull);
    vlSelf->accel_top__DOT__u_clip__DOT__hw_dx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18298862186634207407ull);
    vlSelf->accel_top__DOT__u_clip__DOT__hw_dy = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5788578352142301308ull);
    vlSelf->accel_top__DOT__u_clip__DOT__write_idx = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7199719036481520405ull);
    vlSelf->accel_top__DOT__u_clip__DOT__last_write_addr = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6958762790847010406ull);
    vlSelf->accel_top__DOT__u_clip__DOT__last_color = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3545348976871217450ull);
    vlSelf->accel_top__DOT__u_clip__DOT__wrsub = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6834889771721963440ull);
    vlSelf->accel_top__DOT__u_clip__DOT__write_addr_reg = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 16389822897561789164ull);
    vlSelf->accel_top__DOT__u_clip__DOT__interp_t = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3349773636033656314ull);
    vlSelf->accel_top__DOT__u_clip__DOT__interp_delta = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16090555072979790000ull);
    vlSelf->accel_top__DOT__u_clip__DOT__interp_result = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5907114115016787656ull);
    vlSelf->accel_top__DOT__u_clip__DOT__ev8_which = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10595591236810474467ull);
    vlSelf->accel_top__DOT__u_clip__DOT__is_last_poly_edge = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12733997177287121903ull);
    vlSelf->accel_top__DOT__u_clip__DOT__pe_next = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3271367013597617668ull);
    vlSelf->accel_top__DOT__u_clip__DOT__sil_A = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 3155062183236633334ull);
    vlSelf->accel_top__DOT__u_clip__DOT__sil_B = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9260127215507946736ull);
    vlSelf->accel_top__DOT__u_clip__DOT__dot0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4881228326945360383ull);
    vlSelf->accel_top__DOT__u_clip__DOT__dot1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16039514051100188927ull);
    vlSelf->accel_top__DOT__u_clip__DOT__u_div__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10706529686059306238ull);
    vlSelf->accel_top__DOT__u_clip__DOT__u_div__DOT__iter = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12475783172768144746ull);
    vlSelf->accel_top__DOT__u_clip__DOT__u_div__DOT__result_sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2003117833198860149ull);
    vlSelf->accel_top__DOT__u_clip__DOT__u_div__DOT__abs_denom = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1290682760927081630ull);
    vlSelf->accel_top__DOT__u_clip__DOT__u_div__DOT__rem = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16236283014223196922ull);
    vlSelf->accel_top__DOT__u_clip__DOT__u_div__DOT__quot = VL_SCOPED_RAND_RESET_Q(47, __VscopeHash, 7128897406595614875ull);
    vlSelf->accel_top__DOT__u_clip__DOT__u_div__DOT__shifted_rem = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 3133712633561074587ull);
    for (int __Vi0 = 0; __Vi0 < 512; ++__Vi0) {
        vlSelf->accel_top__DOT__u_clip__DOT__u_hwdelta__DOT__rom[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18184704276348743786ull);
    }
    vlSelf->accel_top__DOT__u_clip__DOT__u_rtp__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10707912086046278899ull);
    vlSelf->accel_top__DOT__u_clip__DOT__u_rtp__DOT__x = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 351569061056315817ull);
    vlSelf->accel_top__DOT__u_clip__DOT__u_rtp__DOT__y = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 14777345556446898649ull);
    vlSelf->accel_top__DOT__u_clip__DOT__u_rtp__DOT__acc_angle = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 4766778445735292778ull);
    vlSelf->accel_top__DOT__u_clip__DOT__u_rtp__DOT__angle_offset = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11997741406580125294ull);
    vlSelf->accel_top__DOT__u_clip__DOT__u_rtp__DOT__iter = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3130251641462130945ull);
    vlSelf->accel_top__DOT__u_clip__DOT__u_rtp__DOT__mag_wide = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 9525843289061797669ull);
    vlSelf->accel_top__DOT__u_clip__DOT__u_rtp__DOT__y_shifted = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 16878266454522817064ull);
    vlSelf->accel_top__DOT__u_clip__DOT__u_rtp__DOT__x_shifted = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 5710733625696369003ull);
    vlSelf->accel_top__DOT__u_clip__DOT__u_rtp__DOT__mag_shifted = VL_SCOPED_RAND_RESET_Q(42, __VscopeHash, 14385174327026360670ull);
    vlSelf->accel_top__DOT__u_rotate__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4466616555920656706ull);
    vlSelf->accel_top__DOT__u_rotate__DOT__vidx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15244283976935477218ull);
    vlSelf->accel_top__DOT__u_rotate__DOT__byte_idx = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 9979547899715446723ull);
    vlSelf->accel_top__DOT__u_rotate__DOT__wr_idx4 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8622869470479976364ull);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->accel_top__DOT__u_rotate__DOT__vbytes[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13980001276367292951ull);
    }
    vlSelf->accel_top__DOT__u_rotate__DOT__xs = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6365351774563003053ull);
    vlSelf->accel_top__DOT__u_rotate__DOT__ys = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 18062650967024696015ull);
    vlSelf->accel_top__DOT__u_rotate__DOT__zs = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16556851285438803117ull);
    vlSelf->accel_top__DOT__u_rotate__DOT__x1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8599519701731303362ull);
    vlSelf->accel_top__DOT__u_rotate__DOT__z1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9759752903672688670ull);
    vlSelf->accel_top__DOT__u_rotate__DOT__z2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16062231733458856336ull);
    vlSelf->accel_top__DOT__u_rotate__DOT__y1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7677140594869512464ull);
    vlSelf->accel_top__DOT__u_rotate__DOT__scale_div_start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10347506121369755901ull);
    vlSelf->accel_top__DOT__u_rotate__DOT__scale_div_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14400443434692578315ull);
    vlSelf->accel_top__DOT__u_rotate__DOT__scale_div_quotient = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11271116554695081664ull);
    vlSelf->accel_top__DOT__u_rotate__DOT__scale_q15 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 148484273941263021ull);
    vlSelf->accel_top__DOT__u_rotate__DOT__px_final = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3215528441330513200ull);
    vlSelf->accel_top__DOT__u_rotate__DOT__py_final = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7662597954790809108ull);
    vlSelf->accel_top__DOT__u_rotate__DOT__vidx2 = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11965061676520204741ull);
    vlSelf->accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4501126775542336230ull);
    vlSelf->accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__iter = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 12441760131261033039ull);
    vlSelf->accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__result_sign = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3441706653986420874ull);
    vlSelf->accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__abs_denom = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7662673724068059302ull);
    vlSelf->accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__rem = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7889658587355429713ull);
    vlSelf->accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__quot = VL_SCOPED_RAND_RESET_Q(47, __VscopeHash, 8845665426765830430ull);
    vlSelf->accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__shifted_rem = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 7057948477982575900ull);
    vlSelf->accel_top__DOT__u_cull__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 4328715377120519950ull);
    vlSelf->accel_top__DOT__u_cull__DOT__f = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15100302746136431932ull);
    vlSelf->accel_top__DOT__u_cull__DOT__vsub = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18405678466478363197ull);
    vlSelf->accel_top__DOT__u_cull__DOT__csub = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 12890510239912335753ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->accel_top__DOT__u_cull__DOT__fv[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 4736343584995019927ull);
    }
    vlSelf->accel_top__DOT__u_cull__DOT__ax = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10002909706333002911ull);
    vlSelf->accel_top__DOT__u_cull__DOT__ay = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11932719475974080437ull);
    vlSelf->accel_top__DOT__u_cull__DOT__bx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11313190363601205430ull);
    vlSelf->accel_top__DOT__u_cull__DOT__by = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3318739144973858477ull);
    vlSelf->accel_top__DOT__u_cull__DOT__cx = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17544034979745467510ull);
    vlSelf->accel_top__DOT__u_cull__DOT__cy = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9735010299907437350ull);
    vlSelf->accel_top__DOT__u_cull__DOT__mul_a = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4569910278052502145ull);
    vlSelf->accel_top__DOT__u_cull__DOT__mul_b = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9175833139264466346ull);
    vlSelf->accel_top__DOT__u_cull__DOT__mul_p = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 15334335657491883645ull);
    vlSelf->accel_top__DOT__u_cull__DOT__prod0 = VL_SCOPED_RAND_RESET_I(18, __VscopeHash, 14501108675381342032ull);
    vlSelf->accel_top__DOT__u_cull__DOT__vis_byte = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11459884745532941454ull);
    vlSelf->accel_top__DOT__u_cull__DOT__write_addr_reg = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11678958832014403505ull);
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->accel_top__DOT__u_scratch_mem__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16705730773904865934ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4096; ++__Vi0) {
        vlSelf->accel_top__DOT__u_shape_mem__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 5067326232536797038ull);
    }
    vlSelf->__VdfgRegularize_hebeb780c_0_11 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_13 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_17 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_19 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_38 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_39 = 0;
    vlSelf->__Vdly__accel_top__DOT__desc_base_reg = 0;
    vlSelf->__Vdly__accel_top__DOT__vec_data_idx = 0;
    vlSelf->__Vdly__accel_top__DOT__active_stage = 0;
    vlSelf->__Vdly__accel_top__DOT__u_clip__DOT__state = 0;
    vlSelf->__Vdly__accel_top__DOT__u_clip__DOT__i = 0;
    vlSelf->__Vdly__accel_top__DOT__u_clip__DOT__esub = 0;
    vlSelf->__Vdly__accel_top__DOT__u_clip__DOT__part_p = 0;
    vlSelf->__Vdly__accel_top__DOT__u_clip__DOT__pfesub = 0;
    vlSelf->__Vdly__accel_top__DOT__u_clip__DOT__j = 0;
    vlSelf->__Vdly__accel_top__DOT__u_clip__DOT__cfvsub = 0;
    vlSelf->__Vdly__accel_top__DOT__u_clip__DOT__colsub = 0;
    vlSelf->__Vdly__accel_top__DOT__u_clip__DOT__fv_a = 0;
    vlSelf->__Vdly__accel_top__DOT__u_clip__DOT__faceA = 0;
    vlSelf->__Vdly__accel_top__DOT__u_clip__DOT__faceB = 0;
    vlSelf->__Vdly__accel_top__DOT__u_rotate__DOT__vidx = 0;
    vlSelf->__Vdly__accel_top__DOT__u_rotate__DOT__byte_idx = 0;
    vlSelf->__Vdly__accel_top__DOT__u_cull__DOT__f = 0;
    vlSelf->__Vdly__accel_top__DOT__u_cull__DOT__vsub = 0;
    vlSelf->__VdlyVal__accel_top__DOT__u_scratch_mem__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__accel_top__DOT__u_scratch_mem__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__accel_top__DOT__u_scratch_mem__DOT__mem__v0 = 0;
    vlSelf->__VdlyVal__accel_top__DOT__u_shape_mem__DOT__mem__v0 = 0;
    vlSelf->__VdlyDim0__accel_top__DOT__u_shape_mem__DOT__mem__v0 = 0;
    vlSelf->__VdlySet__accel_top__DOT__u_shape_mem__DOT__mem__v0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__addr__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__iorq_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rd_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__wr_n__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__data_in__0 = 0;
    vlSelf->__VicoDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__1 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst_ni__1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
