// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaccel_top.h for the primary calling header

#include "Vaccel_top__pch.h"

bool Vaccel_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 2> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccel_top___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((2U > n));
    return (0U);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaccel_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 2> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vaccel_top___024root___eval_phase__ico(Vaccel_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccel_top___024root___eval_phase__ico\n"); );
    Vaccel_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__ico
        vlSelfRef.__VicoTriggered[0U] = (QData)((IData)(
                                                        (((((IData)(vlSelfRef.data_in) 
                                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__data_in__0)) 
                                                           << 6U) 
                                                          | ((((IData)(vlSelfRef.wr_n) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__wr_n__0)) 
                                                              << 5U) 
                                                             | (((IData)(vlSelfRef.rd_n) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rd_n__0)) 
                                                                << 4U))) 
                                                         | (((((IData)(vlSelfRef.iorq_n) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__iorq_n__0)) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.addr) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__addr__0)) 
                                                                << 2U)) 
                                                            | ((((IData)(vlSelfRef.rst_ni) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_ni__0)) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.clk) 
                                                                  != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__rst_ni__0 
            = vlSelfRef.rst_ni;
        vlSelfRef.__Vtrigprevexpr___TOP__addr__0 = vlSelfRef.addr;
        vlSelfRef.__Vtrigprevexpr___TOP__iorq_n__0 
            = vlSelfRef.iorq_n;
        vlSelfRef.__Vtrigprevexpr___TOP__rd_n__0 = vlSelfRef.rd_n;
        vlSelfRef.__Vtrigprevexpr___TOP__wr_n__0 = vlSelfRef.wr_n;
        vlSelfRef.__Vtrigprevexpr___TOP__data_in__0 
            = vlSelfRef.data_in;
        if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VicoDidInit)))))) {
            vlSelfRef.__VicoDidInit = 1U;
            vlSelfRef.__VicoTriggered[0U] = (1ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (2ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (4ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (8ULL | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (0x0000000000000010ULL 
                                             | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (0x0000000000000020ULL 
                                             | vlSelfRef.__VicoTriggered[0U]);
            vlSelfRef.__VicoTriggered[0U] = (0x0000000000000040ULL 
                                             | vlSelfRef.__VicoTriggered[0U]);
        }
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vaccel_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vaccel_top___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        {
            // Inlined CFunc: _eval_ico
            if ((0x0000000000000040ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_sequent__TOP__0
                    vlSelfRef.shape_load_data = vlSelfRef.data_in;
                }
            }
            if ((0x0000000000000028ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_comb__TOP__0
                    vlSelfRef.accel_top__DOT__io_write 
                        = (1U & (~ ((IData)(vlSelfRef.iorq_n) 
                                    | (IData)(vlSelfRef.wr_n))));
                }
            }
            if ((0x0000000000000018ULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_comb__TOP__1
                    vlSelfRef.accel_top__DOT__io_read 
                        = (1U & (~ ((IData)(vlSelfRef.iorq_n) 
                                    | (IData)(vlSelfRef.rd_n))));
                }
            }
            if ((0x000000000000002cULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_comb__TOP__2
                    vlSelfRef.accel_top__DOT__write_clip_enable 
                        = ((IData)(vlSelfRef.accel_top__DOT__io_write) 
                           & (0xd5U == (IData)(vlSelfRef.addr)));
                    vlSelfRef.shape_load_we = ((~ (IData)(vlSelfRef.accel_top__DOT__busy)) 
                                               & ((IData)(vlSelfRef.accel_top__DOT__io_write) 
                                                  & (0xd4U 
                                                     == (IData)(vlSelfRef.addr))));
                    vlSelfRef.accel_top__DOT__write_ctrl 
                        = ((IData)(vlSelfRef.accel_top__DOT__io_write) 
                           & (0xc9U == (IData)(vlSelfRef.addr)));
                }
            }
            if ((0x000000000000001cULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_comb__TOP__3
                    vlSelfRef.accel_top__DOT__read_ctrl 
                        = ((IData)(vlSelfRef.accel_top__DOT__io_read) 
                           & (0xc9U == (IData)(vlSelfRef.addr)));
                    vlSelfRef.accel_top__DOT__read_vec_count_lo 
                        = ((IData)(vlSelfRef.accel_top__DOT__io_read) 
                           & (0xcfU == (IData)(vlSelfRef.addr)));
                    vlSelfRef.accel_top__DOT__read_vec_count_hi 
                        = ((IData)(vlSelfRef.accel_top__DOT__io_read) 
                           & (0xd0U == (IData)(vlSelfRef.addr)));
                    vlSelfRef.accel_top__DOT__read_vec_data 
                        = ((IData)(vlSelfRef.accel_top__DOT__io_read) 
                           & (0xd1U == (IData)(vlSelfRef.addr)));
                    vlSelfRef.accel_top__DOT__read_clip_enable 
                        = ((IData)(vlSelfRef.accel_top__DOT__io_read) 
                           & (0xd5U == (IData)(vlSelfRef.addr)));
                    vlSelfRef.sel = ((IData)(vlSelfRef.accel_top__DOT__read_ctrl) 
                                     | ((IData)(vlSelfRef.accel_top__DOT__read_vec_count_lo) 
                                        | ((IData)(vlSelfRef.accel_top__DOT__read_vec_count_hi) 
                                           | ((IData)(vlSelfRef.accel_top__DOT__read_vec_data) 
                                              | (IData)(vlSelfRef.accel_top__DOT__read_clip_enable)))));
                    vlSelfRef.data_out = (0x000000ffU 
                                          & ((IData)(vlSelfRef.accel_top__DOT__read_ctrl)
                                              ? (((IData)(vlSelfRef.accel_top__DOT__done_latch) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.accel_top__DOT__busy))
                                              : ((IData)(vlSelfRef.accel_top__DOT__read_vec_count_lo)
                                                  ? (IData)(vlSelfRef.accel_top__DOT__vec_count_reg)
                                                  : 
                                                 ((IData)(vlSelfRef.accel_top__DOT__read_vec_count_hi)
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
                }
            }
            if ((0x000000000000006cULL & vlSelfRef.__VicoTriggered[0U])) {
                {
                    // Inlined CFunc: _ico_comb__TOP__4
                    vlSelfRef.accel_top__DOT__start_pulse 
                        = ((IData)(vlSelfRef.accel_top__DOT__write_ctrl) 
                           & ((~ (IData)(vlSelfRef.accel_top__DOT__busy)) 
                              & (IData)(vlSelfRef.data_in)));
                }
            }
        }
    }
    return (__VicoExecute);
}

bool Vaccel_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccel_top___024root___trigger_anySet__act\n"); );
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

extern const VlWide<16>/*511:0*/ Vaccel_top__ConstPool__CONST_h4bf37f49_0;

void Vaccel_top___024root___nba_sequent__TOP__1(Vaccel_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccel_top___024root___nba_sequent__TOP__1\n"); );
    Vaccel_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*3:0*/ __Vfunc_accel_top__DOT__u_clip__DOT__u_rtp__DOT__atan_lut__0__i;
    __Vfunc_accel_top__DOT__u_clip__DOT__u_rtp__DOT__atan_lut__0__i = 0;
    CData/*3:0*/ __Vfunc_accel_top__DOT__u_clip__DOT__u_rtp__DOT__atan_lut__1__i;
    __Vfunc_accel_top__DOT__u_clip__DOT__u_rtp__DOT__atan_lut__1__i = 0;
    CData/*7:0*/ __Vfunc_accel_top__DOT__u_rotate__DOT__trunc8__2__Vfuncout;
    __Vfunc_accel_top__DOT__u_rotate__DOT__trunc8__2__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_accel_top__DOT__u_rotate__DOT__trunc8__2__wide;
    __Vfunc_accel_top__DOT__u_rotate__DOT__trunc8__2__wide = 0;
    CData/*7:0*/ __Vfunc_accel_top__DOT__u_rotate__DOT__trunc8__3__Vfuncout;
    __Vfunc_accel_top__DOT__u_rotate__DOT__trunc8__3__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_accel_top__DOT__u_rotate__DOT__trunc8__3__wide;
    __Vfunc_accel_top__DOT__u_rotate__DOT__trunc8__3__wide = 0;
    CData/*7:0*/ __Vfunc_accel_top__DOT__u_rotate__DOT__trunc8__4__Vfuncout;
    __Vfunc_accel_top__DOT__u_rotate__DOT__trunc8__4__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_accel_top__DOT__u_rotate__DOT__trunc8__4__wide;
    __Vfunc_accel_top__DOT__u_rotate__DOT__trunc8__4__wide = 0;
    CData/*7:0*/ __Vfunc_accel_top__DOT__u_rotate__DOT__trunc8__5__Vfuncout;
    __Vfunc_accel_top__DOT__u_rotate__DOT__trunc8__5__Vfuncout = 0;
    IData/*19:0*/ __Vfunc_accel_top__DOT__u_rotate__DOT__trunc8__5__wide;
    __Vfunc_accel_top__DOT__u_rotate__DOT__trunc8__5__wide = 0;
    SData/*8:0*/ __Vtask_accel_top__DOT__u_cull__DOT__set_mul__6__a;
    __Vtask_accel_top__DOT__u_cull__DOT__set_mul__6__a = 0;
    SData/*8:0*/ __Vtask_accel_top__DOT__u_cull__DOT__set_mul__6__b;
    __Vtask_accel_top__DOT__u_cull__DOT__set_mul__6__b = 0;
    SData/*8:0*/ __Vtask_accel_top__DOT__u_cull__DOT__set_mul__7__a;
    __Vtask_accel_top__DOT__u_cull__DOT__set_mul__7__a = 0;
    SData/*8:0*/ __Vtask_accel_top__DOT__u_cull__DOT__set_mul__7__b;
    __Vtask_accel_top__DOT__u_cull__DOT__set_mul__7__b = 0;
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
    SData/*15:0*/ __Vdly__accel_top__DOT__distance_reg;
    __Vdly__accel_top__DOT__distance_reg = 0;
    SData/*15:0*/ __Vdly__accel_top__DOT__load_addr_reg;
    __Vdly__accel_top__DOT__load_addr_reg = 0;
    SData/*9:0*/ __Vdly__accel_top__DOT__pitch_reg;
    __Vdly__accel_top__DOT__pitch_reg = 0;
    SData/*9:0*/ __Vdly__accel_top__DOT__yaw_reg;
    __Vdly__accel_top__DOT__yaw_reg = 0;
    CData/*0:0*/ __Vdly__accel_top__DOT__rotate_start;
    __Vdly__accel_top__DOT__rotate_start = 0;
    CData/*0:0*/ __Vdly__accel_top__DOT__cull_start;
    __Vdly__accel_top__DOT__cull_start = 0;
    CData/*0:0*/ __Vdly__accel_top__DOT__clip_start;
    __Vdly__accel_top__DOT__clip_start = 0;
    CData/*2:0*/ __Vdly__accel_top__DOT__mstate;
    __Vdly__accel_top__DOT__mstate = 0;
    CData/*0:0*/ __Vdly__accel_top__DOT__u_clip__DOT__rtp_start;
    __Vdly__accel_top__DOT__u_clip__DOT__rtp_start = 0;
    CData/*3:0*/ __Vdly__accel_top__DOT__u_clip__DOT__vseg;
    __Vdly__accel_top__DOT__u_clip__DOT__vseg = 0;
    CData/*3:0*/ __Vdly__accel_top__DOT__u_clip__DOT__vis_count;
    __Vdly__accel_top__DOT__u_clip__DOT__vis_count = 0;
    SData/*15:0*/ __Vdly__accel_top__DOT__u_clip__DOT__cursor;
    __Vdly__accel_top__DOT__u_clip__DOT__cursor = 0;
    CData/*3:0*/ __Vdly__accel_top__DOT__u_clip__DOT__si;
    __Vdly__accel_top__DOT__u_clip__DOT__si = 0;
    CData/*3:0*/ __Vdly__accel_top__DOT__u_clip__DOT__merge_wr;
    __Vdly__accel_top__DOT__u_clip__DOT__merge_wr = 0;
    SData/*15:0*/ __Vdly__accel_top__DOT__u_clip__DOT__tmp_lo;
    __Vdly__accel_top__DOT__u_clip__DOT__tmp_lo = 0;
    SData/*15:0*/ __Vdly__accel_top__DOT__u_clip__DOT__tmp_hi;
    __Vdly__accel_top__DOT__u_clip__DOT__tmp_hi = 0;
    CData/*3:0*/ __Vdly__accel_top__DOT__u_clip__DOT__sj;
    __Vdly__accel_top__DOT__u_clip__DOT__sj = 0;
    SData/*15:0*/ __Vdly__accel_top__DOT__u_clip__DOT__penx;
    __Vdly__accel_top__DOT__u_clip__DOT__penx = 0;
    SData/*15:0*/ __Vdly__accel_top__DOT__u_clip__DOT__peny;
    __Vdly__accel_top__DOT__u_clip__DOT__peny = 0;
    SData/*15:0*/ __Vdly__accel_top__DOT__u_clip__DOT__write_idx;
    __Vdly__accel_top__DOT__u_clip__DOT__write_idx = 0;
    CData/*1:0*/ __Vdly__accel_top__DOT__u_clip__DOT__wrsub;
    __Vdly__accel_top__DOT__u_clip__DOT__wrsub = 0;
    CData/*7:0*/ __Vdly__accel_top__DOT__u_clip__DOT__rtp_mag_latched;
    __Vdly__accel_top__DOT__u_clip__DOT__rtp_mag_latched = 0;
    SData/*9:0*/ __Vdly__accel_top__DOT__u_clip__DOT__rtp_angle_latched;
    __Vdly__accel_top__DOT__u_clip__DOT__rtp_angle_latched = 0;
    SData/*15:0*/ __Vdly__accel_top__DOT__u_clip__DOT__rtp_dx;
    __Vdly__accel_top__DOT__u_clip__DOT__rtp_dx = 0;
    SData/*15:0*/ __Vdly__accel_top__DOT__u_clip__DOT__rtp_dy;
    __Vdly__accel_top__DOT__u_clip__DOT__rtp_dy = 0;
    SData/*15:0*/ __Vdly__accel_top__DOT__u_clip__DOT__cur_hi;
    __Vdly__accel_top__DOT__u_clip__DOT__cur_hi = 0;
    SData/*15:0*/ __Vdly__accel_top__DOT__u_clip__DOT__cur_lo;
    __Vdly__accel_top__DOT__u_clip__DOT__cur_lo = 0;
    CData/*0:0*/ __Vdly__accel_top__DOT__u_clip__DOT__div_tighten_hi;
    __Vdly__accel_top__DOT__u_clip__DOT__div_tighten_hi = 0;
    CData/*0:0*/ __Vdly__accel_top__DOT__u_clip__DOT__div_done;
    __Vdly__accel_top__DOT__u_clip__DOT__div_done = 0;
    CData/*0:0*/ __Vdly__accel_top__DOT__u_clip__DOT__u_div__DOT__result_sign;
    __Vdly__accel_top__DOT__u_clip__DOT__u_div__DOT__result_sign = 0;
    IData/*31:0*/ __Vdly__accel_top__DOT__u_clip__DOT__u_div__DOT__abs_denom;
    __Vdly__accel_top__DOT__u_clip__DOT__u_div__DOT__abs_denom = 0;
    QData/*46:0*/ __Vdly__accel_top__DOT__u_clip__DOT__u_div__DOT__quot;
    __Vdly__accel_top__DOT__u_clip__DOT__u_div__DOT__quot = 0;
    CData/*5:0*/ __Vdly__accel_top__DOT__u_clip__DOT__u_div__DOT__iter;
    __Vdly__accel_top__DOT__u_clip__DOT__u_div__DOT__iter = 0;
    CData/*1:0*/ __Vdly__accel_top__DOT__u_clip__DOT__u_div__DOT__state;
    __Vdly__accel_top__DOT__u_clip__DOT__u_div__DOT__state = 0;
    SData/*15:0*/ __Vdly__accel_top__DOT__u_clip__DOT__div_q;
    __Vdly__accel_top__DOT__u_clip__DOT__div_q = 0;
    CData/*2:0*/ __Vdly__accel_top__DOT__u_clip__DOT__u_rtp__DOT__state;
    __Vdly__accel_top__DOT__u_clip__DOT__u_rtp__DOT__state = 0;
    IData/*23:0*/ __Vdly__accel_top__DOT__u_clip__DOT__u_rtp__DOT__x;
    __Vdly__accel_top__DOT__u_clip__DOT__u_rtp__DOT__x = 0;
    IData/*23:0*/ __Vdly__accel_top__DOT__u_clip__DOT__u_rtp__DOT__y;
    __Vdly__accel_top__DOT__u_clip__DOT__u_rtp__DOT__y = 0;
    SData/*10:0*/ __Vdly__accel_top__DOT__u_clip__DOT__u_rtp__DOT__acc_angle;
    __Vdly__accel_top__DOT__u_clip__DOT__u_rtp__DOT__acc_angle = 0;
    CData/*0:0*/ __Vdly__accel_top__DOT__u_rotate__DOT__scale_div_start;
    __Vdly__accel_top__DOT__u_rotate__DOT__scale_div_start = 0;
    CData/*3:0*/ __Vdly__accel_top__DOT__u_rotate__DOT__state;
    __Vdly__accel_top__DOT__u_rotate__DOT__state = 0;
    CData/*1:0*/ __Vdly__accel_top__DOT__u_rotate__DOT__wr_idx4;
    __Vdly__accel_top__DOT__u_rotate__DOT__wr_idx4 = 0;
    CData/*0:0*/ __Vdly__accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__result_sign;
    __Vdly__accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__result_sign = 0;
    IData/*31:0*/ __Vdly__accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__abs_denom;
    __Vdly__accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__abs_denom = 0;
    QData/*46:0*/ __Vdly__accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__quot;
    __Vdly__accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__quot = 0;
    CData/*5:0*/ __Vdly__accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__iter;
    __Vdly__accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__iter = 0;
    CData/*1:0*/ __Vdly__accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__state;
    __Vdly__accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__state = 0;
    CData/*3:0*/ __Vdly__accel_top__DOT__u_cull__DOT__state;
    __Vdly__accel_top__DOT__u_cull__DOT__state = 0;
    CData/*2:0*/ __Vdly__accel_top__DOT__u_cull__DOT__csub;
    __Vdly__accel_top__DOT__u_cull__DOT__csub = 0;
    SData/*15:0*/ __VdlyVal__accel_top__DOT__u_clip__DOT__vis_lo__v0;
    __VdlyVal__accel_top__DOT__u_clip__DOT__vis_lo__v0 = 0;
    CData/*3:0*/ __VdlyDim0__accel_top__DOT__u_clip__DOT__vis_lo__v0;
    __VdlyDim0__accel_top__DOT__u_clip__DOT__vis_lo__v0 = 0;
    CData/*0:0*/ __VdlySet__accel_top__DOT__u_clip__DOT__vis_lo__v0;
    __VdlySet__accel_top__DOT__u_clip__DOT__vis_lo__v0 = 0;
    CData/*3:0*/ __VdlyDim0__accel_top__DOT__u_clip__DOT__vis_hi__v0;
    __VdlyDim0__accel_top__DOT__u_clip__DOT__vis_hi__v0 = 0;
    CData/*0:0*/ __VdlySet__accel_top__DOT__u_clip__DOT__vis_hi__v0;
    __VdlySet__accel_top__DOT__u_clip__DOT__vis_hi__v0 = 0;
    SData/*15:0*/ __VdlyVal__accel_top__DOT__u_clip__DOT__vis_lo__v1;
    __VdlyVal__accel_top__DOT__u_clip__DOT__vis_lo__v1 = 0;
    CData/*3:0*/ __VdlyDim0__accel_top__DOT__u_clip__DOT__vis_lo__v1;
    __VdlyDim0__accel_top__DOT__u_clip__DOT__vis_lo__v1 = 0;
    CData/*0:0*/ __VdlySet__accel_top__DOT__u_clip__DOT__vis_lo__v1;
    __VdlySet__accel_top__DOT__u_clip__DOT__vis_lo__v1 = 0;
    SData/*15:0*/ __VdlyVal__accel_top__DOT__u_clip__DOT__vis_hi__v1;
    __VdlyVal__accel_top__DOT__u_clip__DOT__vis_hi__v1 = 0;
    CData/*3:0*/ __VdlyDim0__accel_top__DOT__u_clip__DOT__vis_hi__v1;
    __VdlyDim0__accel_top__DOT__u_clip__DOT__vis_hi__v1 = 0;
    CData/*0:0*/ __VdlySet__accel_top__DOT__u_clip__DOT__vis_hi__v1;
    __VdlySet__accel_top__DOT__u_clip__DOT__vis_hi__v1 = 0;
    SData/*15:0*/ __VdlyVal__accel_top__DOT__u_clip__DOT__occ_lo__v0;
    __VdlyVal__accel_top__DOT__u_clip__DOT__occ_lo__v0 = 0;
    CData/*2:0*/ __VdlyDim0__accel_top__DOT__u_clip__DOT__occ_lo__v0;
    __VdlyDim0__accel_top__DOT__u_clip__DOT__occ_lo__v0 = 0;
    CData/*0:0*/ __VdlySet__accel_top__DOT__u_clip__DOT__occ_lo__v0;
    __VdlySet__accel_top__DOT__u_clip__DOT__occ_lo__v0 = 0;
    SData/*15:0*/ __VdlyVal__accel_top__DOT__u_clip__DOT__occ_hi__v0;
    __VdlyVal__accel_top__DOT__u_clip__DOT__occ_hi__v0 = 0;
    CData/*2:0*/ __VdlyDim0__accel_top__DOT__u_clip__DOT__occ_hi__v0;
    __VdlyDim0__accel_top__DOT__u_clip__DOT__occ_hi__v0 = 0;
    SData/*15:0*/ __VdlyVal__accel_top__DOT__u_clip__DOT__occ_lo__v1;
    __VdlyVal__accel_top__DOT__u_clip__DOT__occ_lo__v1 = 0;
    CData/*2:0*/ __VdlyDim0__accel_top__DOT__u_clip__DOT__occ_lo__v1;
    __VdlyDim0__accel_top__DOT__u_clip__DOT__occ_lo__v1 = 0;
    CData/*0:0*/ __VdlySet__accel_top__DOT__u_clip__DOT__occ_lo__v1;
    __VdlySet__accel_top__DOT__u_clip__DOT__occ_lo__v1 = 0;
    SData/*15:0*/ __VdlyVal__accel_top__DOT__u_clip__DOT__occ_hi__v1;
    __VdlyVal__accel_top__DOT__u_clip__DOT__occ_hi__v1 = 0;
    CData/*2:0*/ __VdlyDim0__accel_top__DOT__u_clip__DOT__occ_hi__v1;
    __VdlyDim0__accel_top__DOT__u_clip__DOT__occ_hi__v1 = 0;
    CData/*0:0*/ __VdlySet__accel_top__DOT__u_clip__DOT__occ_hi__v1;
    __VdlySet__accel_top__DOT__u_clip__DOT__occ_hi__v1 = 0;
    SData/*15:0*/ __VdlyVal__accel_top__DOT__u_clip__DOT__occ_lo__v2;
    __VdlyVal__accel_top__DOT__u_clip__DOT__occ_lo__v2 = 0;
    CData/*2:0*/ __VdlyDim0__accel_top__DOT__u_clip__DOT__occ_lo__v2;
    __VdlyDim0__accel_top__DOT__u_clip__DOT__occ_lo__v2 = 0;
    CData/*0:0*/ __VdlySet__accel_top__DOT__u_clip__DOT__occ_lo__v2;
    __VdlySet__accel_top__DOT__u_clip__DOT__occ_lo__v2 = 0;
    SData/*15:0*/ __VdlyVal__accel_top__DOT__u_clip__DOT__occ_hi__v2;
    __VdlyVal__accel_top__DOT__u_clip__DOT__occ_hi__v2 = 0;
    CData/*2:0*/ __VdlyDim0__accel_top__DOT__u_clip__DOT__occ_hi__v2;
    __VdlyDim0__accel_top__DOT__u_clip__DOT__occ_hi__v2 = 0;
    SData/*15:0*/ __VdlyVal__accel_top__DOT__u_clip__DOT__occ_lo__v3;
    __VdlyVal__accel_top__DOT__u_clip__DOT__occ_lo__v3 = 0;
    CData/*2:0*/ __VdlyDim0__accel_top__DOT__u_clip__DOT__occ_lo__v3;
    __VdlyDim0__accel_top__DOT__u_clip__DOT__occ_lo__v3 = 0;
    SData/*15:0*/ __VdlyVal__accel_top__DOT__u_clip__DOT__occ_hi__v3;
    __VdlyVal__accel_top__DOT__u_clip__DOT__occ_hi__v3 = 0;
    CData/*2:0*/ __VdlyDim0__accel_top__DOT__u_clip__DOT__occ_hi__v3;
    __VdlyDim0__accel_top__DOT__u_clip__DOT__occ_hi__v3 = 0;
    SData/*15:0*/ __VdlyVal__accel_top__DOT__u_clip__DOT__occ_lo__v4;
    __VdlyVal__accel_top__DOT__u_clip__DOT__occ_lo__v4 = 0;
    CData/*2:0*/ __VdlyDim0__accel_top__DOT__u_clip__DOT__occ_lo__v4;
    __VdlyDim0__accel_top__DOT__u_clip__DOT__occ_lo__v4 = 0;
    CData/*0:0*/ __VdlySet__accel_top__DOT__u_clip__DOT__occ_lo__v4;
    __VdlySet__accel_top__DOT__u_clip__DOT__occ_lo__v4 = 0;
    SData/*15:0*/ __VdlyVal__accel_top__DOT__u_clip__DOT__occ_hi__v4;
    __VdlyVal__accel_top__DOT__u_clip__DOT__occ_hi__v4 = 0;
    CData/*2:0*/ __VdlyDim0__accel_top__DOT__u_clip__DOT__occ_hi__v4;
    __VdlyDim0__accel_top__DOT__u_clip__DOT__occ_hi__v4 = 0;
    CData/*7:0*/ __VdlyVal__accel_top__DOT__u_clip__DOT__cfz8__v0;
    __VdlyVal__accel_top__DOT__u_clip__DOT__cfz8__v0 = 0;
    CData/*1:0*/ __VdlyDim0__accel_top__DOT__u_clip__DOT__cfz8__v0;
    __VdlyDim0__accel_top__DOT__u_clip__DOT__cfz8__v0 = 0;
    CData/*0:0*/ __VdlySet__accel_top__DOT__u_clip__DOT__cfz8__v0;
    __VdlySet__accel_top__DOT__u_clip__DOT__cfz8__v0 = 0;
    CData/*7:0*/ __VdlyVal__accel_top__DOT__u_clip__DOT__cfy8__v0;
    __VdlyVal__accel_top__DOT__u_clip__DOT__cfy8__v0 = 0;
    CData/*1:0*/ __VdlyDim0__accel_top__DOT__u_clip__DOT__cfy8__v0;
    __VdlyDim0__accel_top__DOT__u_clip__DOT__cfy8__v0 = 0;
    CData/*0:0*/ __VdlySet__accel_top__DOT__u_clip__DOT__cfy8__v0;
    __VdlySet__accel_top__DOT__u_clip__DOT__cfy8__v0 = 0;
    CData/*7:0*/ __VdlyVal__accel_top__DOT__u_clip__DOT__cfx8__v0;
    __VdlyVal__accel_top__DOT__u_clip__DOT__cfx8__v0 = 0;
    CData/*1:0*/ __VdlyDim0__accel_top__DOT__u_clip__DOT__cfx8__v0;
    __VdlyDim0__accel_top__DOT__u_clip__DOT__cfx8__v0 = 0;
    CData/*0:0*/ __VdlySet__accel_top__DOT__u_clip__DOT__cfx8__v0;
    __VdlySet__accel_top__DOT__u_clip__DOT__cfx8__v0 = 0;
    CData/*7:0*/ __VdlyVal__accel_top__DOT__u_clip__DOT__cf_v__v0;
    __VdlyVal__accel_top__DOT__u_clip__DOT__cf_v__v0 = 0;
    CData/*1:0*/ __VdlyDim0__accel_top__DOT__u_clip__DOT__cf_v__v0;
    __VdlyDim0__accel_top__DOT__u_clip__DOT__cf_v__v0 = 0;
    CData/*0:0*/ __VdlySet__accel_top__DOT__u_clip__DOT__cf_v__v0;
    __VdlySet__accel_top__DOT__u_clip__DOT__cf_v__v0 = 0;
    CData/*7:0*/ __VdlyVal__accel_top__DOT__u_clip__DOT__ev16_bytes__v0;
    __VdlyVal__accel_top__DOT__u_clip__DOT__ev16_bytes__v0 = 0;
    CData/*2:0*/ __VdlyDim0__accel_top__DOT__u_clip__DOT__ev16_bytes__v0;
    __VdlyDim0__accel_top__DOT__u_clip__DOT__ev16_bytes__v0 = 0;
    CData/*0:0*/ __VdlySet__accel_top__DOT__u_clip__DOT__ev16_bytes__v0;
    __VdlySet__accel_top__DOT__u_clip__DOT__ev16_bytes__v0 = 0;
    CData/*7:0*/ __VdlyVal__accel_top__DOT__u_rotate__DOT__vbytes__v0;
    __VdlyVal__accel_top__DOT__u_rotate__DOT__vbytes__v0 = 0;
    CData/*2:0*/ __VdlyDim0__accel_top__DOT__u_rotate__DOT__vbytes__v0;
    __VdlyDim0__accel_top__DOT__u_rotate__DOT__vbytes__v0 = 0;
    CData/*0:0*/ __VdlySet__accel_top__DOT__u_rotate__DOT__vbytes__v0;
    __VdlySet__accel_top__DOT__u_rotate__DOT__vbytes__v0 = 0;
    CData/*7:0*/ __VdlyVal__accel_top__DOT__u_cull__DOT__fv__v0;
    __VdlyVal__accel_top__DOT__u_cull__DOT__fv__v0 = 0;
    CData/*1:0*/ __VdlyDim0__accel_top__DOT__u_cull__DOT__fv__v0;
    __VdlyDim0__accel_top__DOT__u_cull__DOT__fv__v0 = 0;
    CData/*0:0*/ __VdlySet__accel_top__DOT__u_cull__DOT__fv__v0;
    __VdlySet__accel_top__DOT__u_cull__DOT__fv__v0 = 0;
    // Body
    __Vdly__accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__result_sign 
        = vlSelfRef.accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__result_sign;
    __Vdly__accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__abs_denom 
        = vlSelfRef.accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__abs_denom;
    __Vdly__accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__iter 
        = vlSelfRef.accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__iter;
    __Vdly__accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__state 
        = vlSelfRef.accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__state;
    __Vdly__accel_top__DOT__load_addr_reg = vlSelfRef.accel_top__DOT__load_addr_reg;
    __Vdly__accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__quot 
        = vlSelfRef.accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__quot;
    __Vdly__accel_top__DOT__distance_reg = vlSelfRef.accel_top__DOT__distance_reg;
    vlSelfRef.__Vdly__accel_top__DOT__desc_base_reg 
        = vlSelfRef.accel_top__DOT__desc_base_reg;
    __Vdly__accel_top__DOT__u_clip__DOT__u_rtp__DOT__state 
        = vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__state;
    __Vdly__accel_top__DOT__u_clip__DOT__u_rtp__DOT__acc_angle 
        = vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__acc_angle;
    __Vdly__accel_top__DOT__u_clip__DOT__u_rtp__DOT__x 
        = vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__x;
    __Vdly__accel_top__DOT__u_clip__DOT__u_rtp__DOT__y 
        = vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__y;
    vlSelfRef.__Vdly__accel_top__DOT__vec_data_idx 
        = vlSelfRef.accel_top__DOT__vec_data_idx;
    __Vdly__accel_top__DOT__pitch_reg = vlSelfRef.accel_top__DOT__pitch_reg;
    __Vdly__accel_top__DOT__yaw_reg = vlSelfRef.accel_top__DOT__yaw_reg;
    __Vdly__accel_top__DOT__u_cull__DOT__state = vlSelfRef.accel_top__DOT__u_cull__DOT__state;
    vlSelfRef.__Vdly__accel_top__DOT__u_cull__DOT__f 
        = vlSelfRef.accel_top__DOT__u_cull__DOT__f;
    vlSelfRef.__Vdly__accel_top__DOT__u_cull__DOT__vsub 
        = vlSelfRef.accel_top__DOT__u_cull__DOT__vsub;
    __Vdly__accel_top__DOT__u_cull__DOT__csub = vlSelfRef.accel_top__DOT__u_cull__DOT__csub;
    __VdlySet__accel_top__DOT__u_cull__DOT__fv__v0 = 0U;
    __Vdly__accel_top__DOT__u_rotate__DOT__scale_div_start 
        = vlSelfRef.accel_top__DOT__u_rotate__DOT__scale_div_start;
    __Vdly__accel_top__DOT__u_rotate__DOT__state = vlSelfRef.accel_top__DOT__u_rotate__DOT__state;
    vlSelfRef.__Vdly__accel_top__DOT__u_rotate__DOT__byte_idx 
        = vlSelfRef.accel_top__DOT__u_rotate__DOT__byte_idx;
    __Vdly__accel_top__DOT__u_rotate__DOT__wr_idx4 
        = vlSelfRef.accel_top__DOT__u_rotate__DOT__wr_idx4;
    __VdlySet__accel_top__DOT__u_rotate__DOT__vbytes__v0 = 0U;
    vlSelfRef.__Vdly__accel_top__DOT__u_rotate__DOT__vidx 
        = vlSelfRef.accel_top__DOT__u_rotate__DOT__vidx;
    __Vdly__accel_top__DOT__u_clip__DOT__rtp_start 
        = vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_start;
    __Vdly__accel_top__DOT__u_clip__DOT__vseg = vlSelfRef.accel_top__DOT__u_clip__DOT__vseg;
    __Vdly__accel_top__DOT__u_clip__DOT__vis_count 
        = vlSelfRef.accel_top__DOT__u_clip__DOT__vis_count;
    __Vdly__accel_top__DOT__u_clip__DOT__cursor = vlSelfRef.accel_top__DOT__u_clip__DOT__cursor;
    __Vdly__accel_top__DOT__u_clip__DOT__si = vlSelfRef.accel_top__DOT__u_clip__DOT__si;
    __Vdly__accel_top__DOT__u_clip__DOT__merge_wr = vlSelfRef.accel_top__DOT__u_clip__DOT__merge_wr;
    __Vdly__accel_top__DOT__u_clip__DOT__tmp_lo = vlSelfRef.accel_top__DOT__u_clip__DOT__tmp_lo;
    __Vdly__accel_top__DOT__u_clip__DOT__tmp_hi = vlSelfRef.accel_top__DOT__u_clip__DOT__tmp_hi;
    __Vdly__accel_top__DOT__u_clip__DOT__sj = vlSelfRef.accel_top__DOT__u_clip__DOT__sj;
    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__i 
        = vlSelfRef.accel_top__DOT__u_clip__DOT__i;
    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__esub 
        = vlSelfRef.accel_top__DOT__u_clip__DOT__esub;
    __Vdly__accel_top__DOT__u_clip__DOT__penx = vlSelfRef.accel_top__DOT__u_clip__DOT__penx;
    __Vdly__accel_top__DOT__u_clip__DOT__peny = vlSelfRef.accel_top__DOT__u_clip__DOT__peny;
    __Vdly__accel_top__DOT__u_clip__DOT__write_idx 
        = vlSelfRef.accel_top__DOT__u_clip__DOT__write_idx;
    __Vdly__accel_top__DOT__u_clip__DOT__wrsub = vlSelfRef.accel_top__DOT__u_clip__DOT__wrsub;
    __Vdly__accel_top__DOT__u_clip__DOT__rtp_dx = vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_dx;
    __Vdly__accel_top__DOT__u_clip__DOT__rtp_dy = vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_dy;
    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__part_p 
        = vlSelfRef.accel_top__DOT__u_clip__DOT__part_p;
    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__pfesub 
        = vlSelfRef.accel_top__DOT__u_clip__DOT__pfesub;
    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__cfvsub 
        = vlSelfRef.accel_top__DOT__u_clip__DOT__cfvsub;
    __Vdly__accel_top__DOT__u_clip__DOT__cur_hi = vlSelfRef.accel_top__DOT__u_clip__DOT__cur_hi;
    __Vdly__accel_top__DOT__u_clip__DOT__cur_lo = vlSelfRef.accel_top__DOT__u_clip__DOT__cur_lo;
    __Vdly__accel_top__DOT__u_clip__DOT__div_tighten_hi 
        = vlSelfRef.accel_top__DOT__u_clip__DOT__div_tighten_hi;
    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__colsub 
        = vlSelfRef.accel_top__DOT__u_clip__DOT__colsub;
    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__fv_a 
        = vlSelfRef.accel_top__DOT__u_clip__DOT__fv_a;
    __VdlySet__accel_top__DOT__u_clip__DOT__ev16_bytes__v0 = 0U;
    __VdlySet__accel_top__DOT__u_clip__DOT__vis_hi__v0 = 0U;
    __VdlySet__accel_top__DOT__u_clip__DOT__vis_hi__v1 = 0U;
    __VdlySet__accel_top__DOT__u_clip__DOT__vis_lo__v0 = 0U;
    __VdlySet__accel_top__DOT__u_clip__DOT__vis_lo__v1 = 0U;
    __VdlySet__accel_top__DOT__u_clip__DOT__occ_lo__v1 = 0U;
    __VdlySet__accel_top__DOT__u_clip__DOT__occ_hi__v1 = 0U;
    __Vdly__accel_top__DOT__u_clip__DOT__rtp_mag_latched 
        = vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_mag_latched;
    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state 
        = vlSelfRef.accel_top__DOT__u_clip__DOT__state;
    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__j 
        = vlSelfRef.accel_top__DOT__u_clip__DOT__j;
    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__faceA 
        = vlSelfRef.accel_top__DOT__u_clip__DOT__faceA;
    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__faceB 
        = vlSelfRef.accel_top__DOT__u_clip__DOT__faceB;
    __VdlySet__accel_top__DOT__u_clip__DOT__cf_v__v0 = 0U;
    __Vdly__accel_top__DOT__u_clip__DOT__rtp_angle_latched 
        = vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_angle_latched;
    __VdlySet__accel_top__DOT__u_clip__DOT__occ_lo__v0 = 0U;
    __VdlySet__accel_top__DOT__u_clip__DOT__occ_lo__v2 = 0U;
    __VdlySet__accel_top__DOT__u_clip__DOT__occ_lo__v4 = 0U;
    __VdlySet__accel_top__DOT__u_clip__DOT__cfz8__v0 = 0U;
    __VdlySet__accel_top__DOT__u_clip__DOT__cfy8__v0 = 0U;
    __VdlySet__accel_top__DOT__u_clip__DOT__cfx8__v0 = 0U;
    __Vdly__accel_top__DOT__rotate_start = vlSelfRef.accel_top__DOT__rotate_start;
    __Vdly__accel_top__DOT__cull_start = vlSelfRef.accel_top__DOT__cull_start;
    __Vdly__accel_top__DOT__clip_start = vlSelfRef.accel_top__DOT__clip_start;
    __Vdly__accel_top__DOT__mstate = vlSelfRef.accel_top__DOT__mstate;
    vlSelfRef.__Vdly__accel_top__DOT__active_stage 
        = vlSelfRef.accel_top__DOT__active_stage;
    __Vdly__accel_top__DOT__u_clip__DOT__div_done = vlSelfRef.accel_top__DOT__u_clip__DOT__div_done;
    __Vdly__accel_top__DOT__u_clip__DOT__u_div__DOT__result_sign 
        = vlSelfRef.accel_top__DOT__u_clip__DOT__u_div__DOT__result_sign;
    __Vdly__accel_top__DOT__u_clip__DOT__u_div__DOT__abs_denom 
        = vlSelfRef.accel_top__DOT__u_clip__DOT__u_div__DOT__abs_denom;
    __Vdly__accel_top__DOT__u_clip__DOT__u_div__DOT__iter 
        = vlSelfRef.accel_top__DOT__u_clip__DOT__u_div__DOT__iter;
    __Vdly__accel_top__DOT__u_clip__DOT__u_div__DOT__state 
        = vlSelfRef.accel_top__DOT__u_clip__DOT__u_div__DOT__state;
    __Vdly__accel_top__DOT__u_clip__DOT__div_q = vlSelfRef.accel_top__DOT__u_clip__DOT__div_q;
    __Vdly__accel_top__DOT__u_clip__DOT__u_div__DOT__quot 
        = vlSelfRef.accel_top__DOT__u_clip__DOT__u_div__DOT__quot;
    if (vlSelfRef.rst_ni) {
        if (((IData)(vlSelfRef.accel_top__DOT__io_write) 
             & (0xd2U == (IData)(vlSelfRef.addr)))) {
            __Vdly__accel_top__DOT__load_addr_reg = 
                ((0x0000ff00U & (IData)(vlSelfRef.accel_top__DOT__load_addr_reg)) 
                 | (IData)(vlSelfRef.data_in));
        } else if (((IData)(vlSelfRef.accel_top__DOT__io_write) 
                    & (0xd3U == (IData)(vlSelfRef.addr)))) {
            __Vdly__accel_top__DOT__load_addr_reg = 
                (((IData)(vlSelfRef.data_in) << 8U) 
                 | (0x000000ffU & (IData)(vlSelfRef.accel_top__DOT__load_addr_reg)));
        } else if (vlSelfRef.shape_load_we) {
            __Vdly__accel_top__DOT__load_addr_reg = 
                (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.accel_top__DOT__load_addr_reg)));
        }
        if (((IData)(vlSelfRef.accel_top__DOT__io_write) 
             & (0xdcU == (IData)(vlSelfRef.addr)))) {
            __Vdly__accel_top__DOT__distance_reg = 
                ((0x0000ff00U & (IData)(vlSelfRef.accel_top__DOT__distance_reg)) 
                 | (IData)(vlSelfRef.data_in));
        }
        if (((IData)(vlSelfRef.accel_top__DOT__io_write) 
             & (0xddU == (IData)(vlSelfRef.addr)))) {
            __Vdly__accel_top__DOT__distance_reg = 
                (((IData)(vlSelfRef.data_in) << 8U) 
                 | (0x000000ffU & (IData)(vlSelfRef.accel_top__DOT__distance_reg)));
        }
        if (((IData)(vlSelfRef.accel_top__DOT__io_write) 
             & (0xcaU == (IData)(vlSelfRef.addr)))) {
            vlSelfRef.__Vdly__accel_top__DOT__desc_base_reg 
                = ((0x00000f00U & (IData)(vlSelfRef.accel_top__DOT__desc_base_reg)) 
                   | (IData)(vlSelfRef.data_in));
        }
        if (((IData)(vlSelfRef.accel_top__DOT__io_write) 
             & (0xd6U == (IData)(vlSelfRef.addr)))) {
            vlSelfRef.__Vdly__accel_top__DOT__desc_base_reg 
                = ((0x00000f00U & ((IData)(vlSelfRef.data_in) 
                                   << 8U)) | (0x000000ffU 
                                              & (IData)(vlSelfRef.accel_top__DOT__desc_base_reg)));
        }
        if (((IData)(vlSelfRef.accel_top__DOT__io_write) 
             & (0xcdU == (IData)(vlSelfRef.addr)))) {
            __Vdly__accel_top__DOT__pitch_reg = ((0x00000300U 
                                                  & (IData)(vlSelfRef.accel_top__DOT__pitch_reg)) 
                                                 | (IData)(vlSelfRef.data_in));
        }
        if (((IData)(vlSelfRef.accel_top__DOT__io_write) 
             & (0xceU == (IData)(vlSelfRef.addr)))) {
            __Vdly__accel_top__DOT__pitch_reg = ((0x00000300U 
                                                  & ((IData)(vlSelfRef.data_in) 
                                                     << 8U)) 
                                                 | (0x000000ffU 
                                                    & (IData)(vlSelfRef.accel_top__DOT__pitch_reg)));
        }
        if (((IData)(vlSelfRef.accel_top__DOT__io_write) 
             & (0xcbU == (IData)(vlSelfRef.addr)))) {
            __Vdly__accel_top__DOT__yaw_reg = ((0x00000300U 
                                                & (IData)(vlSelfRef.accel_top__DOT__yaw_reg)) 
                                               | (IData)(vlSelfRef.data_in));
        }
        if (((IData)(vlSelfRef.accel_top__DOT__io_write) 
             & (0xccU == (IData)(vlSelfRef.addr)))) {
            __Vdly__accel_top__DOT__yaw_reg = ((0x00000300U 
                                                & ((IData)(vlSelfRef.data_in) 
                                                   << 8U)) 
                                               | (0x000000ffU 
                                                  & (IData)(vlSelfRef.accel_top__DOT__yaw_reg)));
        }
        if (((IData)(vlSelfRef.accel_top__DOT__io_write) 
             & (0xdaU == (IData)(vlSelfRef.addr)))) {
            vlSelfRef.accel_top__DOT__desc_part_count_reg 
                = vlSelfRef.data_in;
        }
        if (((IData)(vlSelfRef.accel_top__DOT__read_vec_data) 
             & (~ (IData)(vlSelfRef.accel_top__DOT__prev_read_vec_data)))) {
            vlSelfRef.__Vdly__accel_top__DOT__vec_data_idx 
                = (0x0000ffffU & ((IData)(1U) + (IData)(vlSelfRef.accel_top__DOT__vec_data_idx)));
            vlSelfRef.accel_top__DOT__vec_data_latch 
                = vlSelfRef.accel_top__DOT__vecbuf_rdata;
        }
        if (vlSelfRef.accel_top__DOT__start_pulse) {
            vlSelfRef.__Vdly__accel_top__DOT__vec_data_idx = 0U;
        }
        __Vdly__accel_top__DOT__rotate_start = 0U;
        __Vdly__accel_top__DOT__cull_start = 0U;
        __Vdly__accel_top__DOT__clip_start = 0U;
        if ((4U & (IData)(vlSelfRef.accel_top__DOT__mstate))) {
            __Vdly__accel_top__DOT__mstate = 0U;
        } else if ((2U & (IData)(vlSelfRef.accel_top__DOT__mstate))) {
            if ((1U & (IData)(vlSelfRef.accel_top__DOT__mstate))) {
                if (vlSelfRef.accel_top__DOT__clip_done) {
                    vlSelfRef.accel_top__DOT__vec_count_reg 
                        = vlSelfRef.accel_top__DOT__clip_vec_count;
                    vlSelfRef.__Vdly__accel_top__DOT__active_stage = 0U;
                    vlSelfRef.accel_top__DOT__busy = 0U;
                    vlSelfRef.accel_top__DOT__done_latch = 1U;
                    __Vdly__accel_top__DOT__mstate = 0U;
                }
            } else if (vlSelfRef.accel_top__DOT__cull_done) {
                vlSelfRef.__Vdly__accel_top__DOT__active_stage = 3U;
                __Vdly__accel_top__DOT__clip_start = 1U;
                __Vdly__accel_top__DOT__mstate = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.accel_top__DOT__mstate))) {
            if (vlSelfRef.accel_top__DOT__rotate_done) {
                vlSelfRef.__Vdly__accel_top__DOT__active_stage = 2U;
                __Vdly__accel_top__DOT__cull_start = 1U;
                __Vdly__accel_top__DOT__mstate = 2U;
            }
        } else if (vlSelfRef.accel_top__DOT__start_pulse) {
            vlSelfRef.accel_top__DOT__busy = 1U;
            vlSelfRef.accel_top__DOT__done_latch = 0U;
            vlSelfRef.__Vdly__accel_top__DOT__active_stage = 1U;
            __Vdly__accel_top__DOT__rotate_start = 1U;
            __Vdly__accel_top__DOT__mstate = 1U;
        }
        if (((IData)(vlSelfRef.accel_top__DOT__write_ctrl) 
             & ((IData)(vlSelfRef.data_in) >> 1U))) {
            __Vdly__accel_top__DOT__mstate = 0U;
            vlSelfRef.accel_top__DOT__busy = 0U;
            vlSelfRef.__Vdly__accel_top__DOT__active_stage = 0U;
        }
        __Vdly__accel_top__DOT__u_clip__DOT__div_done = 0U;
        if ((0U == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__u_div__DOT__state))) {
            if (vlSelfRef.accel_top__DOT__u_clip__DOT__div_start) {
                __Vdly__accel_top__DOT__u_clip__DOT__u_div__DOT__result_sign 
                    = ((vlSelfRef.accel_top__DOT__u_clip__DOT__div_num 
                        ^ vlSelfRef.accel_top__DOT__u_clip__DOT__div_den) 
                       >> 0x1fU);
                __Vdly__accel_top__DOT__u_clip__DOT__u_div__DOT__abs_denom 
                    = ((vlSelfRef.accel_top__DOT__u_clip__DOT__div_den 
                        >> 0x1fU) ? ((IData)(1U) + 
                                     (~ vlSelfRef.accel_top__DOT__u_clip__DOT__div_den))
                        : vlSelfRef.accel_top__DOT__u_clip__DOT__div_den);
                vlSelfRef.accel_top__DOT__u_clip__DOT__u_div__DOT__rem = 0U;
                __Vdly__accel_top__DOT__u_clip__DOT__u_div__DOT__quot 
                    = ((QData)((IData)(((vlSelfRef.accel_top__DOT__u_clip__DOT__div_num 
                                         >> 0x1fU) ? 
                                        ((IData)(1U) 
                                         + (~ vlSelfRef.accel_top__DOT__u_clip__DOT__div_num))
                                         : vlSelfRef.accel_top__DOT__u_clip__DOT__div_num))) 
                       << 0x0000000fU);
                __Vdly__accel_top__DOT__u_clip__DOT__u_div__DOT__iter = 0U;
                __Vdly__accel_top__DOT__u_clip__DOT__u_div__DOT__state 
                    = ((0U == vlSelfRef.accel_top__DOT__u_clip__DOT__div_den)
                        ? 2U : 1U);
            }
        } else if ((1U == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__u_div__DOT__state))) {
            if ((vlSelfRef.accel_top__DOT__u_clip__DOT__u_div__DOT__shifted_rem 
                 >= (QData)((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__u_div__DOT__abs_denom)))) {
                __Vdly__accel_top__DOT__u_clip__DOT__u_div__DOT__quot 
                    = (1ULL | (0x00007ffffffffffeULL 
                               & (vlSelfRef.accel_top__DOT__u_clip__DOT__u_div__DOT__quot 
                                  << 1U)));
                vlSelfRef.accel_top__DOT__u_clip__DOT__u_div__DOT__rem 
                    = ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__u_div__DOT__shifted_rem) 
                       - vlSelfRef.accel_top__DOT__u_clip__DOT__u_div__DOT__abs_denom);
            } else {
                __Vdly__accel_top__DOT__u_clip__DOT__u_div__DOT__quot 
                    = (0x00007ffffffffffeULL & (vlSelfRef.accel_top__DOT__u_clip__DOT__u_div__DOT__quot 
                                                << 1U));
                vlSelfRef.accel_top__DOT__u_clip__DOT__u_div__DOT__rem 
                    = (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__u_div__DOT__shifted_rem);
            }
            if ((0x2eU == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__u_div__DOT__iter))) {
                __Vdly__accel_top__DOT__u_clip__DOT__u_div__DOT__state = 2U;
            } else {
                __Vdly__accel_top__DOT__u_clip__DOT__u_div__DOT__iter 
                    = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__u_div__DOT__iter)));
            }
        } else {
            if ((2U == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__u_div__DOT__state))) {
                __Vdly__accel_top__DOT__u_clip__DOT__div_q 
                    = (0x0000ffffU & (((0U == vlSelfRef.accel_top__DOT__u_clip__DOT__div_den) 
                                       | (0U != (IData)(
                                                        (vlSelfRef.accel_top__DOT__u_clip__DOT__u_div__DOT__quot 
                                                         >> 0x0fU))))
                                       ? ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__u_div__DOT__result_sign)
                                           ? 0x8000U
                                           : 0x7fffU)
                                       : ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__u_div__DOT__result_sign)
                                           ? (- (0x00007fffU 
                                                 & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__u_div__DOT__quot)))
                                           : (0x00007fffU 
                                              & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__u_div__DOT__quot)))));
                __Vdly__accel_top__DOT__u_clip__DOT__div_done = 1U;
            }
            __Vdly__accel_top__DOT__u_clip__DOT__u_div__DOT__state = 0U;
        }
        vlSelfRef.accel_top__DOT__cull_done = 0U;
        vlSelfRef.accel_top__DOT__cull_scr_we = 0U;
        if ((8U & (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__state))) {
            __Vdly__accel_top__DOT__u_cull__DOT__state = 0U;
        } else if ((4U & (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__state))) {
                    vlSelfRef.accel_top__DOT__cull_scr_wdata 
                        = vlSelfRef.accel_top__DOT__u_cull__DOT__vis_byte;
                    vlSelfRef.accel_top__DOT__cull_scr_we = 1U;
                    vlSelfRef.accel_top__DOT__u_cull__DOT__write_addr_reg 
                        = (0x00000fffU & ((IData)(0x0302U) 
                                          + (0x0000001fU 
                                             & ((IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__f) 
                                                >> 3U))));
                    if (((IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__f) 
                         == (0x000000ffU & ((IData)(vlSelfRef.accel_top__DOT__desc_face_count_reg) 
                                            - (IData)(1U))))) {
                        __Vdly__accel_top__DOT__u_cull__DOT__state = 0U;
                        vlSelfRef.accel_top__DOT__cull_done = 1U;
                    } else {
                        vlSelfRef.__Vdly__accel_top__DOT__u_cull__DOT__f 
                            = (0x000000ffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__f)));
                        vlSelfRef.__Vdly__accel_top__DOT__u_cull__DOT__vsub = 0U;
                        __Vdly__accel_top__DOT__u_cull__DOT__state = 1U;
                    }
                } else {
                    if ((0U == (7U & (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__f)))) {
                        vlSelfRef.accel_top__DOT__u_cull__DOT__vis_byte 
                            = VL_LTS_III(18, vlSelfRef.accel_top__DOT__u_cull__DOT__prod0, vlSelfRef.accel_top__DOT__u_cull__DOT__mul_p);
                    } else {
                        vlSelfRef.accel_top__DOT__u_cull__DOT__vis_byte 
                            = (((~ ((IData)(1U) << 
                                    (7U & (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__f)))) 
                                & (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__vis_byte)) 
                               | (0x00ffU & (VL_LTS_III(18, vlSelfRef.accel_top__DOT__u_cull__DOT__prod0, vlSelfRef.accel_top__DOT__u_cull__DOT__mul_p) 
                                             << (7U 
                                                 & (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__f)))));
                    }
                    if (((7U == (7U & (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__f))) 
                         | ((IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__f) 
                            == (0x000000ffU & ((IData)(vlSelfRef.accel_top__DOT__desc_face_count_reg) 
                                               - (IData)(1U)))))) {
                        __Vdly__accel_top__DOT__u_cull__DOT__state = 7U;
                    } else {
                        vlSelfRef.__Vdly__accel_top__DOT__u_cull__DOT__f 
                            = (0x000000ffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__f)));
                        vlSelfRef.__Vdly__accel_top__DOT__u_cull__DOT__vsub = 0U;
                        __Vdly__accel_top__DOT__u_cull__DOT__state = 1U;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__state))) {
                if ((0U == (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__csub))) {
                    __Vtask_accel_top__DOT__u_cull__DOT__set_mul__6__b 
                        = (0x000001ffU & (((0x00000100U 
                                            & ((IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__cy) 
                                               << 1U)) 
                                           | (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__cy)) 
                                          - (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_39)));
                    __Vtask_accel_top__DOT__u_cull__DOT__set_mul__6__a 
                        = (0x000001ffU & (((0x00000100U 
                                            & ((IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__bx) 
                                               << 1U)) 
                                           | (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__bx)) 
                                          - (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_38)));
                    vlSelfRef.accel_top__DOT__u_cull__DOT__mul_a 
                        = __Vtask_accel_top__DOT__u_cull__DOT__set_mul__6__a;
                    vlSelfRef.accel_top__DOT__u_cull__DOT__mul_b 
                        = __Vtask_accel_top__DOT__u_cull__DOT__set_mul__6__b;
                    __Vdly__accel_top__DOT__u_cull__DOT__csub = 1U;
                } else {
                    __Vtask_accel_top__DOT__u_cull__DOT__set_mul__7__b 
                        = (0x000001ffU & (((0x00000100U 
                                            & ((IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__cx) 
                                               << 1U)) 
                                           | (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__cx)) 
                                          - (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_38)));
                    __Vtask_accel_top__DOT__u_cull__DOT__set_mul__7__a 
                        = (0x000001ffU & (((0x00000100U 
                                            & ((IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__by) 
                                               << 1U)) 
                                           | (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__by)) 
                                          - (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_39)));
                    vlSelfRef.accel_top__DOT__u_cull__DOT__prod0 
                        = vlSelfRef.accel_top__DOT__u_cull__DOT__mul_p;
                    vlSelfRef.accel_top__DOT__u_cull__DOT__mul_a 
                        = __Vtask_accel_top__DOT__u_cull__DOT__set_mul__7__a;
                    vlSelfRef.accel_top__DOT__u_cull__DOT__mul_b 
                        = __Vtask_accel_top__DOT__u_cull__DOT__set_mul__7__b;
                    __Vdly__accel_top__DOT__u_cull__DOT__state = 6U;
                }
            } else {
                if ((4U & (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__csub))) {
                    if ((2U & (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__csub))) {
                        vlSelfRef.accel_top__DOT__u_cull__DOT__cy 
                            = vlSelfRef.accel_top__DOT__scratch_a_rdata;
                    } else if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__csub))) {
                        vlSelfRef.accel_top__DOT__u_cull__DOT__cy 
                            = vlSelfRef.accel_top__DOT__scratch_a_rdata;
                    } else {
                        vlSelfRef.accel_top__DOT__u_cull__DOT__cx 
                            = vlSelfRef.accel_top__DOT__scratch_a_rdata;
                    }
                } else if ((2U & (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__csub))) {
                    if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__csub))) {
                        vlSelfRef.accel_top__DOT__u_cull__DOT__by 
                            = vlSelfRef.accel_top__DOT__scratch_a_rdata;
                    } else {
                        vlSelfRef.accel_top__DOT__u_cull__DOT__bx 
                            = vlSelfRef.accel_top__DOT__scratch_a_rdata;
                    }
                } else if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__csub))) {
                    vlSelfRef.accel_top__DOT__u_cull__DOT__ay 
                        = vlSelfRef.accel_top__DOT__scratch_a_rdata;
                } else {
                    vlSelfRef.accel_top__DOT__u_cull__DOT__ax 
                        = vlSelfRef.accel_top__DOT__scratch_a_rdata;
                }
                if ((5U == (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__csub))) {
                    __Vdly__accel_top__DOT__u_cull__DOT__csub = 0U;
                    __Vdly__accel_top__DOT__u_cull__DOT__state = 5U;
                } else {
                    __Vdly__accel_top__DOT__u_cull__DOT__csub 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__csub)));
                    __Vdly__accel_top__DOT__u_cull__DOT__state = 3U;
                }
            }
        } else if ((2U & (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__state))) {
                __Vdly__accel_top__DOT__u_cull__DOT__state = 4U;
            } else {
                if ((2U >= (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__vsub))) {
                    __VdlyVal__accel_top__DOT__u_cull__DOT__fv__v0 
                        = vlSelfRef.accel_top__DOT__shape_mem_rd_data;
                    __VdlyDim0__accel_top__DOT__u_cull__DOT__fv__v0 
                        = vlSelfRef.accel_top__DOT__u_cull__DOT__vsub;
                    __VdlySet__accel_top__DOT__u_cull__DOT__fv__v0 = 1U;
                }
                if ((2U == (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__vsub))) {
                    __Vdly__accel_top__DOT__u_cull__DOT__csub = 0U;
                    __Vdly__accel_top__DOT__u_cull__DOT__state = 3U;
                } else {
                    vlSelfRef.__Vdly__accel_top__DOT__u_cull__DOT__vsub 
                        = (3U & ((IData)(1U) + (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__vsub)));
                    __Vdly__accel_top__DOT__u_cull__DOT__state = 1U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__state))) {
            __Vdly__accel_top__DOT__u_cull__DOT__state = 2U;
        } else if (((IData)(vlSelfRef.accel_top__DOT__cull_start) 
                    & (0U != (IData)(vlSelfRef.accel_top__DOT__desc_face_count_reg)))) {
            vlSelfRef.__Vdly__accel_top__DOT__u_cull__DOT__f = 0U;
            vlSelfRef.__Vdly__accel_top__DOT__u_cull__DOT__vsub = 0U;
            __Vdly__accel_top__DOT__u_cull__DOT__state = 1U;
        }
        vlSelfRef.accel_top__DOT__rotate_done = 0U;
        vlSelfRef.accel_top__DOT__rotate_scr_we = 0U;
        __Vdly__accel_top__DOT__u_rotate__DOT__scale_div_start = 0U;
        if ((8U & (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__state))) {
                __Vdly__accel_top__DOT__u_rotate__DOT__state = 0U;
            } else if ((2U & (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__state))) {
                __Vdly__accel_top__DOT__u_rotate__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__state))) {
                vlSelfRef.accel_top__DOT__rotate_scr_we = 1U;
                if ((0U == (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__wr_idx4))) {
                    vlSelfRef.accel_top__DOT__rotate_scr_addr 
                        = (0x00000fffU & ((IData)(0x01b8U) 
                                          + (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__vidx)));
                    vlSelfRef.accel_top__DOT__rotate_scr_wdata 
                        = vlSelfRef.accel_top__DOT__u_rotate__DOT__x1;
                } else if ((1U == (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__wr_idx4))) {
                    vlSelfRef.accel_top__DOT__rotate_scr_addr 
                        = (0x00000fffU & ((IData)(0x0226U) 
                                          + (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__vidx)));
                    vlSelfRef.accel_top__DOT__rotate_scr_wdata 
                        = vlSelfRef.accel_top__DOT__u_rotate__DOT__y1;
                } else {
                    vlSelfRef.accel_top__DOT__rotate_scr_addr 
                        = (0x00000fffU & ((IData)(0x0294U) 
                                          + (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__vidx)));
                    vlSelfRef.accel_top__DOT__rotate_scr_wdata 
                        = vlSelfRef.accel_top__DOT__u_rotate__DOT__z2;
                }
                if ((2U == (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__wr_idx4))) {
                    if (((IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__vidx) 
                         == (0x000000ffU & ((IData)(vlSelfRef.accel_top__DOT__desc_vertex_count_reg) 
                                            - (IData)(1U))))) {
                        __Vdly__accel_top__DOT__u_rotate__DOT__state = 0U;
                        vlSelfRef.accel_top__DOT__rotate_done = 1U;
                    } else {
                        vlSelfRef.__Vdly__accel_top__DOT__u_rotate__DOT__vidx 
                            = (0x000000ffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__vidx)));
                        vlSelfRef.__Vdly__accel_top__DOT__u_rotate__DOT__byte_idx = 0U;
                        __Vdly__accel_top__DOT__u_rotate__DOT__state = 3U;
                    }
                } else {
                    __Vdly__accel_top__DOT__u_rotate__DOT__wr_idx4 
                        = (3U & ((IData)(1U) + (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__wr_idx4)));
                }
            } else {
                vlSelfRef.accel_top__DOT__rotate_scr_we = 1U;
                if ((0U == (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__wr_idx4))) {
                    vlSelfRef.accel_top__DOT__rotate_scr_addr 
                        = vlSelfRef.accel_top__DOT__u_rotate__DOT__vidx2;
                    vlSelfRef.accel_top__DOT__rotate_scr_wdata 
                        = (0x000000ffU & (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__px_final));
                } else if ((1U == (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__wr_idx4))) {
                    vlSelfRef.accel_top__DOT__rotate_scr_addr 
                        = (0x00000fffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__vidx2)));
                    vlSelfRef.accel_top__DOT__rotate_scr_wdata 
                        = (0x000000ffU & ((IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__px_final) 
                                          >> 8U));
                } else if ((2U == (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__wr_idx4))) {
                    vlSelfRef.accel_top__DOT__rotate_scr_addr 
                        = (0x00000fffU & ((IData)(0x00dcU) 
                                          + (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__vidx2)));
                    vlSelfRef.accel_top__DOT__rotate_scr_wdata 
                        = (0x000000ffU & (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__py_final));
                } else {
                    vlSelfRef.accel_top__DOT__rotate_scr_addr 
                        = (0x00000fffU & ((IData)(0x00ddU) 
                                          + (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__vidx2)));
                    vlSelfRef.accel_top__DOT__rotate_scr_wdata 
                        = (0x000000ffU & ((IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__py_final) 
                                          >> 8U));
                }
                if ((3U == (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__wr_idx4))) {
                    __Vdly__accel_top__DOT__u_rotate__DOT__state = 9U;
                } else {
                    __Vdly__accel_top__DOT__u_rotate__DOT__wr_idx4 
                        = (3U & ((IData)(1U) + (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__wr_idx4)));
                }
            }
        } else if ((4U & (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__state))) {
                    __Vfunc_accel_top__DOT__u_rotate__DOT__trunc8__2__wide 
                        = (0x000fffffU & (VL_MULS_III(20, vlSelfRef.__VdfgRegularize_hebeb780c_0_17, vlSymsp->TOP__accel_top__DOT__u_rotate__DOT__sc_pitch.__VdfgRegularize_hebeb780c_0_18) 
                                          + VL_MULS_III(20, vlSelfRef.__VdfgRegularize_hebeb780c_0_19, vlSymsp->TOP__accel_top__DOT__u_rotate__DOT__sc_pitch.__VdfgRegularize_hebeb780c_0_20)));
                    __Vfunc_accel_top__DOT__u_rotate__DOT__trunc8__3__wide 
                        = (0x000fffffU & (VL_MULS_III(20, vlSymsp->TOP__accel_top__DOT__u_rotate__DOT__sc_pitch.__VdfgRegularize_hebeb780c_0_18, vlSelfRef.__VdfgRegularize_hebeb780c_0_19) 
                                          - VL_MULS_III(20, vlSelfRef.__VdfgRegularize_hebeb780c_0_17, vlSymsp->TOP__accel_top__DOT__u_rotate__DOT__sc_pitch.__VdfgRegularize_hebeb780c_0_20)));
                    __Vfunc_accel_top__DOT__u_rotate__DOT__trunc8__2__Vfuncout 
                        = (0x000000ffU & VL_SHIFTRS_III(20,20,32, __Vfunc_accel_top__DOT__u_rotate__DOT__trunc8__2__wide, 7U));
                    __Vfunc_accel_top__DOT__u_rotate__DOT__trunc8__3__Vfuncout 
                        = (0x000000ffU & VL_SHIFTRS_III(20,20,32, __Vfunc_accel_top__DOT__u_rotate__DOT__trunc8__3__wide, 7U));
                    __Vdly__accel_top__DOT__u_rotate__DOT__wr_idx4 = 0U;
                    vlSelfRef.accel_top__DOT__u_rotate__DOT__z2 
                        = __Vfunc_accel_top__DOT__u_rotate__DOT__trunc8__2__Vfuncout;
                    vlSelfRef.accel_top__DOT__u_rotate__DOT__y1 
                        = __Vfunc_accel_top__DOT__u_rotate__DOT__trunc8__3__Vfuncout;
                    __Vdly__accel_top__DOT__u_rotate__DOT__state = 8U;
                } else {
                    __Vfunc_accel_top__DOT__u_rotate__DOT__trunc8__4__wide 
                        = (0x000fffffU & (VL_MULS_III(20, vlSelfRef.__VdfgRegularize_hebeb780c_0_11, vlSymsp->TOP__accel_top__DOT__u_rotate__DOT__sc_yaw.__VdfgRegularize_hebeb780c_0_12) 
                                          + VL_MULS_III(20, vlSelfRef.__VdfgRegularize_hebeb780c_0_13, vlSymsp->TOP__accel_top__DOT__u_rotate__DOT__sc_yaw.__VdfgRegularize_hebeb780c_0_14)));
                    __Vfunc_accel_top__DOT__u_rotate__DOT__trunc8__5__wide 
                        = (0x000fffffU & (VL_MULS_III(20, vlSymsp->TOP__accel_top__DOT__u_rotate__DOT__sc_yaw.__VdfgRegularize_hebeb780c_0_12, vlSelfRef.__VdfgRegularize_hebeb780c_0_13) 
                                          - VL_MULS_III(20, vlSelfRef.__VdfgRegularize_hebeb780c_0_11, vlSymsp->TOP__accel_top__DOT__u_rotate__DOT__sc_yaw.__VdfgRegularize_hebeb780c_0_14)));
                    __Vfunc_accel_top__DOT__u_rotate__DOT__trunc8__4__Vfuncout 
                        = (0x000000ffU & VL_SHIFTRS_III(20,20,32, __Vfunc_accel_top__DOT__u_rotate__DOT__trunc8__4__wide, 7U));
                    __Vfunc_accel_top__DOT__u_rotate__DOT__trunc8__5__Vfuncout 
                        = (0x000000ffU & VL_SHIFTRS_III(20,20,32, __Vfunc_accel_top__DOT__u_rotate__DOT__trunc8__5__wide, 7U));
                    vlSelfRef.accel_top__DOT__u_rotate__DOT__x1 
                        = __Vfunc_accel_top__DOT__u_rotate__DOT__trunc8__4__Vfuncout;
                    vlSelfRef.accel_top__DOT__u_rotate__DOT__z1 
                        = __Vfunc_accel_top__DOT__u_rotate__DOT__trunc8__5__Vfuncout;
                    __Vdly__accel_top__DOT__u_rotate__DOT__state = 7U;
                }
            } else if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__state))) {
                vlSelfRef.accel_top__DOT__u_rotate__DOT__xs 
                    = (0x000000ffU & VL_SHIFTRS_III(16,16,3, 
                                                    (((IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__vbytes[1U]) 
                                                      << 8U) 
                                                     | vlSelfRef.accel_top__DOT__u_rotate__DOT__vbytes[0U]), (IData)(vlSelfRef.accel_top__DOT__desc_coord_shift_reg)));
                vlSelfRef.accel_top__DOT__u_rotate__DOT__ys 
                    = (0x000000ffU & VL_SHIFTRS_III(16,16,3, 
                                                    (((IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__vbytes[3U]) 
                                                      << 8U) 
                                                     | vlSelfRef.accel_top__DOT__u_rotate__DOT__vbytes[2U]), (IData)(vlSelfRef.accel_top__DOT__desc_coord_shift_reg)));
                vlSelfRef.accel_top__DOT__u_rotate__DOT__zs 
                    = (0x000000ffU & VL_SHIFTRS_III(16,16,3, 
                                                    (((IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__vbytes[5U]) 
                                                      << 8U) 
                                                     | vlSelfRef.accel_top__DOT__u_rotate__DOT__vbytes[4U]), (IData)(vlSelfRef.accel_top__DOT__desc_coord_shift_reg)));
                __Vdly__accel_top__DOT__u_rotate__DOT__state = 6U;
            } else {
                if ((5U >= (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__byte_idx))) {
                    __VdlyVal__accel_top__DOT__u_rotate__DOT__vbytes__v0 
                        = vlSelfRef.accel_top__DOT__shape_mem_rd_data;
                    __VdlyDim0__accel_top__DOT__u_rotate__DOT__vbytes__v0 
                        = vlSelfRef.accel_top__DOT__u_rotate__DOT__byte_idx;
                    __VdlySet__accel_top__DOT__u_rotate__DOT__vbytes__v0 = 1U;
                }
                if ((5U == (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__byte_idx))) {
                    vlSelfRef.__Vdly__accel_top__DOT__u_rotate__DOT__byte_idx = 0U;
                    __Vdly__accel_top__DOT__u_rotate__DOT__state = 5U;
                } else {
                    vlSelfRef.__Vdly__accel_top__DOT__u_rotate__DOT__byte_idx 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__byte_idx)));
                    __Vdly__accel_top__DOT__u_rotate__DOT__state = 3U;
                }
            }
        } else if ((2U & (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__state))) {
                __Vdly__accel_top__DOT__u_rotate__DOT__state = 4U;
            } else if (vlSelfRef.accel_top__DOT__u_rotate__DOT__scale_div_done) {
                vlSelfRef.accel_top__DOT__u_rotate__DOT__scale_q15 
                    = vlSelfRef.accel_top__DOT__u_rotate__DOT__scale_div_quotient;
                __Vdly__accel_top__DOT__u_rotate__DOT__state = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__state))) {
            __Vdly__accel_top__DOT__u_rotate__DOT__scale_div_start = 1U;
            __Vdly__accel_top__DOT__u_rotate__DOT__state = 2U;
        } else if (((IData)(vlSelfRef.accel_top__DOT__rotate_start) 
                    & (0U != (IData)(vlSelfRef.accel_top__DOT__desc_vertex_count_reg)))) {
            vlSelfRef.__Vdly__accel_top__DOT__u_rotate__DOT__vidx = 0U;
            vlSelfRef.__Vdly__accel_top__DOT__u_rotate__DOT__byte_idx = 0U;
            __Vdly__accel_top__DOT__u_rotate__DOT__state 
                = ((0U == (IData)(vlSelfRef.accel_top__DOT__distance_reg))
                    ? 3U : 1U);
        }
        vlSelfRef.accel_top__DOT__clip_done = 0U;
        vlSelfRef.accel_top__DOT__clip_scr_we = 0U;
        vlSelfRef.accel_top__DOT__u_clip__DOT__div_start = 0U;
        __Vdly__accel_top__DOT__u_clip__DOT__rtp_start = 0U;
        if ((0x00000020U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
            if ((0x00000010U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                if ((8U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0U;
                } else if ((4U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                    if ((2U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                        vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0U;
                    } else if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                        vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0U;
                    } else {
                        __Vdly__accel_top__DOT__u_clip__DOT__vseg = 0U;
                        if (VL_GTS_III(16, 0x7fffU, (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__cursor))) {
                            if ((8U >= (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__vis_count))) {
                                __VdlyVal__accel_top__DOT__u_clip__DOT__vis_lo__v0 
                                    = vlSelfRef.accel_top__DOT__u_clip__DOT__cursor;
                                __VdlyDim0__accel_top__DOT__u_clip__DOT__vis_lo__v0 
                                    = vlSelfRef.accel_top__DOT__u_clip__DOT__vis_count;
                                __VdlySet__accel_top__DOT__u_clip__DOT__vis_lo__v0 = 1U;
                                __VdlyDim0__accel_top__DOT__u_clip__DOT__vis_hi__v0 
                                    = vlSelfRef.accel_top__DOT__u_clip__DOT__vis_count;
                                __VdlySet__accel_top__DOT__u_clip__DOT__vis_hi__v0 = 1U;
                            }
                            vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x23U;
                            __Vdly__accel_top__DOT__u_clip__DOT__vis_count 
                                = (0x0000000fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__vis_count)));
                        } else {
                            vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state 
                                = ((0U == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__vis_count))
                                    ? 0x2fU : 0x23U);
                        }
                    }
                } else if ((2U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                    if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                        __Vdly__accel_top__DOT__u_clip__DOT__vis_count = 0U;
                        __Vdly__accel_top__DOT__u_clip__DOT__cursor = 0U;
                        __Vdly__accel_top__DOT__u_clip__DOT__si = 0U;
                        vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x22U;
                    } else if ((0U == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__occ_count))) {
                        __Vdly__accel_top__DOT__u_clip__DOT__merge_wr = 0U;
                        vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x33U;
                    } else {
                        __Vdly__accel_top__DOT__u_clip__DOT__tmp_lo 
                            = vlSelfRef.accel_top__DOT__u_clip__DOT__occ_lo[0U];
                        __Vdly__accel_top__DOT__u_clip__DOT__tmp_hi 
                            = vlSelfRef.accel_top__DOT__u_clip__DOT__occ_hi[0U];
                        __Vdly__accel_top__DOT__u_clip__DOT__merge_wr = 0U;
                        __Vdly__accel_top__DOT__u_clip__DOT__si = 1U;
                        vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x21U;
                    }
                } else if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                    __Vdly__accel_top__DOT__u_clip__DOT__si = 1U;
                    __Vdly__accel_top__DOT__u_clip__DOT__sj = 1U;
                    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x20U;
                } else {
                    if ((0U < (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__write_idx))) {
                        vlSelfRef.accel_top__DOT__clip_scr_we = 1U;
                        vlSelfRef.accel_top__DOT__u_clip__DOT__write_addr_reg 
                            = vlSelfRef.accel_top__DOT__u_clip__DOT__last_write_addr;
                        vlSelfRef.accel_top__DOT__clip_scr_wdata 
                            = (0x80U | (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__last_color));
                    }
                    vlSelfRef.accel_top__DOT__clip_vec_count 
                        = vlSelfRef.accel_top__DOT__u_clip__DOT__write_idx;
                    vlSelfRef.accel_top__DOT__clip_done = 1U;
                    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0U;
                }
            } else if ((8U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                if ((4U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                    if ((2U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                        if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                            if (((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__i) 
                                 == (0x000000ffU & 
                                     ((IData)(vlSelfRef.accel_top__DOT__desc_edge_count_reg) 
                                      - (IData)(1U))))) {
                                vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x30U;
                            } else {
                                vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__i 
                                    = (0x000000ffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__i)));
                                vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__esub = 0U;
                                vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 1U;
                            }
                        } else if (((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__vseg) 
                                    == (0x0000000fU 
                                        & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__vis_count) 
                                           - (IData)(1U))))) {
                            vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x2fU;
                        } else {
                            __Vdly__accel_top__DOT__u_clip__DOT__vseg 
                                = (0x0000000fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__vseg)));
                            vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x23U;
                        }
                    } else if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                        vlSelfRef.accel_top__DOT__clip_scr_we = 1U;
                        if ((0U == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__wrsub))) {
                            vlSelfRef.accel_top__DOT__u_clip__DOT__write_addr_reg 
                                = (0x00000fffU & ((IData)(0x030eU) 
                                                  + 
                                                  (0x0000ffffU 
                                                   & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__write_idx) 
                                                      << 2U))));
                            vlSelfRef.accel_top__DOT__clip_scr_wdata 
                                = ((0xffU != (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__edge_color_ovr))
                                    ? (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__edge_color_ovr)
                                    : (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__chosen_color));
                        } else if ((1U == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__wrsub))) {
                            vlSelfRef.accel_top__DOT__u_clip__DOT__write_addr_reg 
                                = (0x00000fffU & ((IData)(0x030fU) 
                                                  + 
                                                  (0x0000ffffU 
                                                   & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__write_idx) 
                                                      << 2U))));
                            vlSelfRef.accel_top__DOT__clip_scr_wdata 
                                = vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_mag_latched;
                        } else if ((2U == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__wrsub))) {
                            vlSelfRef.accel_top__DOT__u_clip__DOT__write_addr_reg 
                                = (0x00000fffU & ((IData)(0x0310U) 
                                                  + 
                                                  (0x0000ffffU 
                                                   & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__write_idx) 
                                                      << 2U))));
                            vlSelfRef.accel_top__DOT__clip_scr_wdata 
                                = (0x000000ffU & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_angle_latched));
                        } else {
                            vlSelfRef.accel_top__DOT__u_clip__DOT__write_addr_reg 
                                = (0x00000fffU & ((IData)(0x0311U) 
                                                  + 
                                                  (0x0000ffffU 
                                                   & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__write_idx) 
                                                      << 2U))));
                            vlSelfRef.accel_top__DOT__clip_scr_wdata 
                                = (3U & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_angle_latched) 
                                         >> 8U));
                        }
                        if ((0U == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__wrsub))) {
                            vlSelfRef.accel_top__DOT__u_clip__DOT__last_color 
                                = ((0xffU != (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__edge_color_ovr))
                                    ? (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__edge_color_ovr)
                                    : (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__chosen_color));
                        }
                        if ((3U == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__wrsub))) {
                            if (vlSelfRef.accel_top__DOT__hw_pen_correct_reg) {
                                __Vdly__accel_top__DOT__u_clip__DOT__penx 
                                    = (0x0000ffffU 
                                       & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__penx) 
                                          + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__hw_dx)));
                                __Vdly__accel_top__DOT__u_clip__DOT__peny 
                                    = (0x0000ffffU 
                                       & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__peny) 
                                          + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__hw_dy)));
                            } else {
                                __Vdly__accel_top__DOT__u_clip__DOT__penx 
                                    = vlSelfRef.accel_top__DOT__u_clip__DOT__seg_x1;
                                __Vdly__accel_top__DOT__u_clip__DOT__peny 
                                    = vlSelfRef.accel_top__DOT__u_clip__DOT__seg_y1;
                            }
                            vlSelfRef.accel_top__DOT__u_clip__DOT__last_write_addr 
                                = (0x00000fffU & ((IData)(0x030eU) 
                                                  + 
                                                  (0x0000ffffU 
                                                   & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__write_idx) 
                                                      << 2U))));
                            vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x2eU;
                            if ((0x033cU > (0x0000ffffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__write_idx))))) {
                                __Vdly__accel_top__DOT__u_clip__DOT__write_idx 
                                    = (0x0000ffffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__write_idx)));
                            }
                        } else {
                            __Vdly__accel_top__DOT__u_clip__DOT__wrsub 
                                = (3U & ((IData)(1U) 
                                         + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__wrsub)));
                        }
                    } else if (vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_done) {
                        __Vdly__accel_top__DOT__u_clip__DOT__wrsub = 0U;
                        __Vdly__accel_top__DOT__u_clip__DOT__rtp_mag_latched 
                            = vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_magnitude;
                        __Vdly__accel_top__DOT__u_clip__DOT__rtp_angle_latched 
                            = vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_angle;
                        vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x2dU;
                    }
                } else if ((2U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                    if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                        if (vlSelfRef.accel_top__DOT__hw_pen_correct_reg) {
                            __Vdly__accel_top__DOT__u_clip__DOT__rtp_dx 
                                = (0x0000ffffU & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__seg_x1) 
                                                  - (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__penx)));
                            __Vdly__accel_top__DOT__u_clip__DOT__rtp_dy 
                                = (0x0000ffffU & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__seg_y1) 
                                                  - (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__peny)));
                        } else {
                            __Vdly__accel_top__DOT__u_clip__DOT__rtp_dx 
                                = (0x0000ffffU & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__seg_x1) 
                                                  - (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__seg_x0)));
                            __Vdly__accel_top__DOT__u_clip__DOT__rtp_dy 
                                = (0x0000ffffU & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__seg_y1) 
                                                  - (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__seg_y0)));
                        }
                        __Vdly__accel_top__DOT__u_clip__DOT__rtp_start = 1U;
                        vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x2cU;
                    } else {
                        vlSelfRef.accel_top__DOT__clip_scr_we = 1U;
                        if ((0U == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__wrsub))) {
                            vlSelfRef.accel_top__DOT__u_clip__DOT__write_addr_reg 
                                = (0x00000fffU & ((IData)(0x030eU) 
                                                  + 
                                                  (0x0000ffffU 
                                                   & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__write_idx) 
                                                      << 2U))));
                            vlSelfRef.accel_top__DOT__clip_scr_wdata = 0U;
                        } else if ((1U == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__wrsub))) {
                            vlSelfRef.accel_top__DOT__u_clip__DOT__write_addr_reg 
                                = (0x00000fffU & ((IData)(0x030fU) 
                                                  + 
                                                  (0x0000ffffU 
                                                   & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__write_idx) 
                                                      << 2U))));
                            vlSelfRef.accel_top__DOT__clip_scr_wdata 
                                = vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_mag_latched;
                        } else if ((2U == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__wrsub))) {
                            vlSelfRef.accel_top__DOT__u_clip__DOT__write_addr_reg 
                                = (0x00000fffU & ((IData)(0x0310U) 
                                                  + 
                                                  (0x0000ffffU 
                                                   & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__write_idx) 
                                                      << 2U))));
                            vlSelfRef.accel_top__DOT__clip_scr_wdata 
                                = (0x000000ffU & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_angle_latched));
                        } else {
                            vlSelfRef.accel_top__DOT__u_clip__DOT__write_addr_reg 
                                = (0x00000fffU & ((IData)(0x0311U) 
                                                  + 
                                                  (0x0000ffffU 
                                                   & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__write_idx) 
                                                      << 2U))));
                            vlSelfRef.accel_top__DOT__clip_scr_wdata 
                                = (3U & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_angle_latched) 
                                         >> 8U));
                        }
                        if ((3U == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__wrsub))) {
                            if ((0x033cU > (0x0000ffffU 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__write_idx))))) {
                                __Vdly__accel_top__DOT__u_clip__DOT__write_idx 
                                    = (0x0000ffffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__write_idx)));
                            }
                            if (vlSelfRef.accel_top__DOT__hw_pen_correct_reg) {
                                __Vdly__accel_top__DOT__u_clip__DOT__penx 
                                    = (0x0000ffffU 
                                       & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__penx) 
                                          + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__hw_dx)));
                                __Vdly__accel_top__DOT__u_clip__DOT__peny 
                                    = (0x0000ffffU 
                                       & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__peny) 
                                          + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__hw_dy)));
                            }
                            if (vlSelfRef.accel_top__DOT__u_clip__DOT__hop_pending) {
                                __Vdly__accel_top__DOT__u_clip__DOT__rtp_dx 
                                    = vlSelfRef.accel_top__DOT__u_clip__DOT__hop2_dx;
                                __Vdly__accel_top__DOT__u_clip__DOT__rtp_dy 
                                    = vlSelfRef.accel_top__DOT__u_clip__DOT__hop2_dy;
                                vlSelfRef.accel_top__DOT__u_clip__DOT__hop_pending = 0U;
                                __Vdly__accel_top__DOT__u_clip__DOT__rtp_start = 1U;
                                vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x29U;
                            } else {
                                vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x2bU;
                            }
                        } else {
                            __Vdly__accel_top__DOT__u_clip__DOT__wrsub 
                                = (3U & ((IData)(1U) 
                                         + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__wrsub)));
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                    if (vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_done) {
                        __Vdly__accel_top__DOT__u_clip__DOT__wrsub = 0U;
                        __Vdly__accel_top__DOT__u_clip__DOT__rtp_mag_latched 
                            = vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_magnitude;
                        __Vdly__accel_top__DOT__u_clip__DOT__rtp_angle_latched 
                            = vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_angle;
                        vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x2aU;
                    }
                } else if ((((VL_GTS_III(16, 3U, (0x0000ffffU 
                                                  & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__seg_x0) 
                                                     - (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__penx)))) 
                              & VL_LTS_III(16, 0xfffdU, 
                                           (0x0000ffffU 
                                            & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__seg_x0) 
                                               - (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__penx))))) 
                             & VL_GTS_III(16, 3U, (0x0000ffffU 
                                                   & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__seg_y0) 
                                                      - (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__peny))))) 
                            & VL_LTS_III(16, 0xfffdU, 
                                         (0x0000ffffU 
                                          & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__seg_y0) 
                                             - (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__peny)))))) {
                    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x2bU;
                } else {
                    if ((((VL_LTS_III(16, 0x00a0U, 
                                      (0x0000ffffU 
                                       & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__seg_x0) 
                                          - (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__penx)))) 
                           | VL_GTS_III(16, 0xff60U, 
                                        (0x0000ffffU 
                                         & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__seg_x0) 
                                            - (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__penx))))) 
                          | VL_LTS_III(16, 0x00a0U, 
                                       (0x0000ffffU 
                                        & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__seg_y0) 
                                           - (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__peny))))) 
                         | VL_GTS_III(16, 0xff60U, 
                                      (0x0000ffffU 
                                       & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__seg_y0) 
                                          - (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__peny)))))) {
                        vlSelfRef.accel_top__DOT__u_clip__DOT__hop_pending = 1U;
                        __Vdly__accel_top__DOT__u_clip__DOT__rtp_dx 
                            = (0x0000ffffU & VL_SHIFTRS_III(16,16,32, 
                                                            (0x0000ffffU 
                                                             & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__seg_x0) 
                                                                - (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__penx))), 1U));
                        __Vdly__accel_top__DOT__u_clip__DOT__rtp_dy 
                            = (0x0000ffffU & VL_SHIFTRS_III(16,16,32, 
                                                            (0x0000ffffU 
                                                             & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__seg_y0) 
                                                                - (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__peny))), 1U));
                        vlSelfRef.accel_top__DOT__u_clip__DOT__hop2_dx 
                            = (0x0000ffffU & (((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__seg_x0) 
                                               - (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__penx)) 
                                              - VL_SHIFTRS_III(16,16,32, 
                                                               (0x0000ffffU 
                                                                & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__seg_x0) 
                                                                   - (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__penx))), 1U)));
                        vlSelfRef.accel_top__DOT__u_clip__DOT__hop2_dy 
                            = (0x0000ffffU & (((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__seg_y0) 
                                               - (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__peny)) 
                                              - VL_SHIFTRS_III(16,16,32, 
                                                               (0x0000ffffU 
                                                                & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__seg_y0) 
                                                                   - (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__peny))), 1U)));
                    } else {
                        vlSelfRef.accel_top__DOT__u_clip__DOT__hop_pending = 0U;
                        __Vdly__accel_top__DOT__u_clip__DOT__rtp_dx 
                            = (0x0000ffffU & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__seg_x0) 
                                              - (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__penx)));
                        __Vdly__accel_top__DOT__u_clip__DOT__rtp_dy 
                            = (0x0000ffffU & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__seg_y0) 
                                              - (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__peny)));
                    }
                    __Vdly__accel_top__DOT__u_clip__DOT__rtp_start = 1U;
                    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x29U;
                }
            } else if ((4U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                if ((2U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                    if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                        vlSelfRef.accel_top__DOT__u_clip__DOT__seg_y1 
                            = (0x0000ffffU & ((0x7fffU 
                                               == (
                                                   (8U 
                                                    >= (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__vseg))
                                                    ? vlSelfRef.accel_top__DOT__u_clip__DOT__vis_hi
                                                   [vlSelfRef.accel_top__DOT__u_clip__DOT__vseg]
                                                    : 0U))
                                               ? (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__py_v1)
                                               : ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__py_v0) 
                                                  + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__interp_result))));
                        vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x28U;
                    } else {
                        vlSelfRef.accel_top__DOT__u_clip__DOT__seg_x1 
                            = (0x0000ffffU & ((0x7fffU 
                                               == (
                                                   (8U 
                                                    >= (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__vseg))
                                                    ? vlSelfRef.accel_top__DOT__u_clip__DOT__vis_hi
                                                   [vlSelfRef.accel_top__DOT__u_clip__DOT__vseg]
                                                    : 0U))
                                               ? (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__px_v1)
                                               : ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__px_v0) 
                                                  + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__interp_result))));
                        vlSelfRef.accel_top__DOT__u_clip__DOT__interp_delta 
                            = (0x0000ffffU & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__py_v1) 
                                              - (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__py_v0)));
                        vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x27U;
                        vlSelfRef.accel_top__DOT__u_clip__DOT__interp_t 
                            = ((8U >= (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__vseg))
                                ? vlSelfRef.accel_top__DOT__u_clip__DOT__vis_hi
                               [vlSelfRef.accel_top__DOT__u_clip__DOT__vseg]
                                : 0U);
                    }
                } else if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                    vlSelfRef.accel_top__DOT__u_clip__DOT__seg_y0 
                        = (0x0000ffffU & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__py_v0) 
                                          + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__interp_result)));
                    vlSelfRef.accel_top__DOT__u_clip__DOT__interp_t 
                        = ((8U >= (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__vseg))
                            ? vlSelfRef.accel_top__DOT__u_clip__DOT__vis_hi
                           [vlSelfRef.accel_top__DOT__u_clip__DOT__vseg]
                            : 0U);
                    vlSelfRef.accel_top__DOT__u_clip__DOT__interp_delta 
                        = (0x0000ffffU & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__px_v1) 
                                          - (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__px_v0)));
                    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x26U;
                } else {
                    vlSelfRef.accel_top__DOT__u_clip__DOT__seg_x0 
                        = (0x0000ffffU & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__px_v0) 
                                          + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__interp_result)));
                    vlSelfRef.accel_top__DOT__u_clip__DOT__interp_t 
                        = ((8U >= (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__vseg))
                            ? vlSelfRef.accel_top__DOT__u_clip__DOT__vis_lo
                           [vlSelfRef.accel_top__DOT__u_clip__DOT__vseg]
                            : 0U);
                    vlSelfRef.accel_top__DOT__u_clip__DOT__interp_delta 
                        = (0x0000ffffU & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__py_v1) 
                                          - (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__py_v0)));
                    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x25U;
                }
            } else if ((2U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                    vlSelfRef.accel_top__DOT__u_clip__DOT__interp_t 
                        = ((8U >= (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__vseg))
                            ? vlSelfRef.accel_top__DOT__u_clip__DOT__vis_lo
                           [vlSelfRef.accel_top__DOT__u_clip__DOT__vseg]
                            : 0U);
                    vlSelfRef.accel_top__DOT__u_clip__DOT__interp_delta 
                        = (0x0000ffffU & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__px_v1) 
                                          - (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__px_v0)));
                    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x24U;
                } else if (((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__si) 
                            < (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__merge_wr))) {
                    if (VL_GTS_III(16, vlSelfRef.accel_top__DOT__u_clip__DOT__occ_lo
                                   [(7U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__si))], (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__cursor))) {
                        if ((8U >= (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__vis_count))) {
                            __VdlyVal__accel_top__DOT__u_clip__DOT__vis_lo__v1 
                                = vlSelfRef.accel_top__DOT__u_clip__DOT__cursor;
                            __VdlyDim0__accel_top__DOT__u_clip__DOT__vis_lo__v1 
                                = vlSelfRef.accel_top__DOT__u_clip__DOT__vis_count;
                            __VdlySet__accel_top__DOT__u_clip__DOT__vis_lo__v1 = 1U;
                            __VdlyVal__accel_top__DOT__u_clip__DOT__vis_hi__v1 
                                = vlSelfRef.accel_top__DOT__u_clip__DOT__occ_lo
                                [(7U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__si))];
                            __VdlyDim0__accel_top__DOT__u_clip__DOT__vis_hi__v1 
                                = vlSelfRef.accel_top__DOT__u_clip__DOT__vis_count;
                            __VdlySet__accel_top__DOT__u_clip__DOT__vis_hi__v1 = 1U;
                        }
                        __Vdly__accel_top__DOT__u_clip__DOT__vis_count 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__vis_count)));
                    }
                    if (VL_GTS_III(16, vlSelfRef.accel_top__DOT__u_clip__DOT__occ_hi
                                   [(7U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__si))], (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__cursor))) {
                        __Vdly__accel_top__DOT__u_clip__DOT__cursor 
                            = vlSelfRef.accel_top__DOT__u_clip__DOT__occ_hi
                            [(7U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__si))];
                    }
                    __Vdly__accel_top__DOT__u_clip__DOT__si 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__si)));
                } else {
                    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x34U;
                }
            } else if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                if (((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__si) 
                     < (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__occ_count))) {
                    if (VL_LTES_III(16, vlSelfRef.accel_top__DOT__u_clip__DOT__occ_lo
                                    [(7U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__si))], (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__tmp_hi))) {
                        if (VL_GTS_III(16, vlSelfRef.accel_top__DOT__u_clip__DOT__occ_hi
                                       [(7U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__si))], (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__tmp_hi))) {
                            __Vdly__accel_top__DOT__u_clip__DOT__tmp_hi 
                                = vlSelfRef.accel_top__DOT__u_clip__DOT__occ_hi
                                [(7U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__si))];
                        }
                    } else {
                        __VdlyVal__accel_top__DOT__u_clip__DOT__occ_lo__v0 
                            = vlSelfRef.accel_top__DOT__u_clip__DOT__tmp_lo;
                        __VdlyDim0__accel_top__DOT__u_clip__DOT__occ_lo__v0 
                            = (7U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__merge_wr));
                        __VdlySet__accel_top__DOT__u_clip__DOT__occ_lo__v0 = 1U;
                        __VdlyVal__accel_top__DOT__u_clip__DOT__occ_hi__v0 
                            = vlSelfRef.accel_top__DOT__u_clip__DOT__tmp_hi;
                        __VdlyDim0__accel_top__DOT__u_clip__DOT__occ_hi__v0 
                            = (7U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__merge_wr));
                        __Vdly__accel_top__DOT__u_clip__DOT__tmp_lo 
                            = vlSelfRef.accel_top__DOT__u_clip__DOT__occ_lo
                            [(7U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__si))];
                        __Vdly__accel_top__DOT__u_clip__DOT__merge_wr 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__merge_wr)));
                        __Vdly__accel_top__DOT__u_clip__DOT__tmp_hi 
                            = vlSelfRef.accel_top__DOT__u_clip__DOT__occ_hi
                            [(7U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__si))];
                    }
                    __Vdly__accel_top__DOT__u_clip__DOT__si 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__si)));
                } else {
                    __VdlyVal__accel_top__DOT__u_clip__DOT__occ_lo__v1 
                        = vlSelfRef.accel_top__DOT__u_clip__DOT__tmp_lo;
                    __VdlyDim0__accel_top__DOT__u_clip__DOT__occ_lo__v1 
                        = (7U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__merge_wr));
                    __VdlySet__accel_top__DOT__u_clip__DOT__occ_lo__v1 = 1U;
                    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x33U;
                    __VdlyVal__accel_top__DOT__u_clip__DOT__occ_hi__v1 
                        = vlSelfRef.accel_top__DOT__u_clip__DOT__tmp_hi;
                    __VdlyDim0__accel_top__DOT__u_clip__DOT__occ_hi__v1 
                        = (7U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__merge_wr));
                    __VdlySet__accel_top__DOT__u_clip__DOT__occ_hi__v1 = 1U;
                    __Vdly__accel_top__DOT__u_clip__DOT__merge_wr 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__merge_wr)));
                }
            } else if ((0U != (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__sj))) {
                if ((((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__sj) 
                      < (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__occ_count)) 
                     & VL_LTS_III(16, vlSelfRef.accel_top__DOT__u_clip__DOT__occ_lo
                                  [(7U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__sj))], vlSelfRef.accel_top__DOT__u_clip__DOT__occ_lo
                                  [(7U & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__sj) 
                                          - (IData)(1U)))]))) {
                    __VdlyVal__accel_top__DOT__u_clip__DOT__occ_lo__v2 
                        = vlSelfRef.accel_top__DOT__u_clip__DOT__occ_lo
                        [(7U & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__sj) 
                                - (IData)(1U)))];
                    __VdlyDim0__accel_top__DOT__u_clip__DOT__occ_lo__v2 
                        = (7U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__sj));
                    __VdlySet__accel_top__DOT__u_clip__DOT__occ_lo__v2 = 1U;
                    __VdlyVal__accel_top__DOT__u_clip__DOT__occ_hi__v2 
                        = vlSelfRef.accel_top__DOT__u_clip__DOT__occ_hi
                        [(7U & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__sj) 
                                - (IData)(1U)))];
                    __VdlyDim0__accel_top__DOT__u_clip__DOT__occ_hi__v2 
                        = (7U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__sj));
                    __VdlyVal__accel_top__DOT__u_clip__DOT__occ_lo__v3 
                        = vlSelfRef.accel_top__DOT__u_clip__DOT__occ_lo
                        [(7U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__sj))];
                    __VdlyDim0__accel_top__DOT__u_clip__DOT__occ_lo__v3 
                        = (7U & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__sj) 
                                 - (IData)(1U)));
                    __VdlyVal__accel_top__DOT__u_clip__DOT__occ_hi__v3 
                        = vlSelfRef.accel_top__DOT__u_clip__DOT__occ_hi
                        [(7U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__sj))];
                    __VdlyDim0__accel_top__DOT__u_clip__DOT__occ_hi__v3 
                        = (7U & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__sj) 
                                 - (IData)(1U)));
                }
                __Vdly__accel_top__DOT__u_clip__DOT__sj 
                    = (0x0000000fU & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__sj) 
                                      - (IData)(1U)));
            } else if ((7U == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__si))) {
                vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x32U;
            } else {
                __Vdly__accel_top__DOT__u_clip__DOT__si 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__si)));
                __Vdly__accel_top__DOT__u_clip__DOT__sj 
                    = (0x0000000fU & ((IData)(1U) + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__si)));
            }
        } else if ((0x00000010U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
            if ((8U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                if ((4U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                    if ((2U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                        if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                            if (((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__part_p) 
                                 == (0x000000ffU & 
                                     ((IData)(vlSelfRef.accel_top__DOT__clip_effective_part_count) 
                                      - (IData)(1U))))) {
                                vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x31U;
                            } else {
                                vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__part_p 
                                    = (0x000000ffU 
                                       & ((IData)(1U) 
                                          + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__part_p)));
                                vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__pfesub = 0U;
                                vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x0dU;
                            }
                        } else if (((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__j) 
                                    == (0x000000ffU 
                                        & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__part_end_v) 
                                           - (IData)(1U))))) {
                            vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x1fU;
                        } else {
                            vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__j 
                                = (0x000000ffU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__j)));
                            vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__cfvsub = 0U;
                            vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x11U;
                        }
                    } else if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                        if ((VL_LTS_III(16, 0U, (0x0000ffffU 
                                                 & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__cur_hi) 
                                                    - (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__cur_lo)))) 
                             & (8U > (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__occ_count)))) {
                            __VdlyVal__accel_top__DOT__u_clip__DOT__occ_lo__v4 
                                = vlSelfRef.accel_top__DOT__u_clip__DOT__cur_lo;
                            __VdlyDim0__accel_top__DOT__u_clip__DOT__occ_lo__v4 
                                = (7U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__occ_count));
                            __VdlySet__accel_top__DOT__u_clip__DOT__occ_lo__v4 = 1U;
                            __VdlyVal__accel_top__DOT__u_clip__DOT__occ_hi__v4 
                                = vlSelfRef.accel_top__DOT__u_clip__DOT__cur_hi;
                            __VdlyDim0__accel_top__DOT__u_clip__DOT__occ_hi__v4 
                                = (7U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__occ_count));
                            vlSelfRef.accel_top__DOT__u_clip__DOT__occ_count 
                                = (0x0000000fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__occ_count)));
                        }
                        vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x1eU;
                    } else {
                        if (vlSelfRef.accel_top__DOT__u_clip__DOT__div_tighten_hi) {
                            if (VL_LTS_III(16, (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__div_q), (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__cur_hi))) {
                                __Vdly__accel_top__DOT__u_clip__DOT__cur_hi 
                                    = vlSelfRef.accel_top__DOT__u_clip__DOT__div_q;
                            }
                        } else if (VL_GTS_III(16, (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__div_q), (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__cur_lo))) {
                            __Vdly__accel_top__DOT__u_clip__DOT__cur_lo 
                                = vlSelfRef.accel_top__DOT__u_clip__DOT__div_q;
                        }
                        vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x1dU;
                    }
                } else if ((2U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                    if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                        if (vlSelfRef.accel_top__DOT__u_clip__DOT__div_done) {
                            vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x1cU;
                        }
                    } else if ((0U == (vlSelfRef.accel_top__DOT__u_clip__DOT__dot1 
                                       - vlSelfRef.accel_top__DOT__u_clip__DOT__dot0))) {
                        vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state 
                            = (VL_LTES_III(32, 0U, vlSelfRef.accel_top__DOT__u_clip__DOT__dot0)
                                ? 0x1eU : 0x1dU);
                    } else {
                        vlSelfRef.accel_top__DOT__u_clip__DOT__div_num 
                            = (- vlSelfRef.accel_top__DOT__u_clip__DOT__dot0);
                        vlSelfRef.accel_top__DOT__u_clip__DOT__div_den 
                            = (vlSelfRef.accel_top__DOT__u_clip__DOT__dot1 
                               - vlSelfRef.accel_top__DOT__u_clip__DOT__dot0);
                        __Vdly__accel_top__DOT__u_clip__DOT__div_tighten_hi 
                            = VL_LTS_III(32, 0U, (vlSelfRef.accel_top__DOT__u_clip__DOT__dot1 
                                                  - vlSelfRef.accel_top__DOT__u_clip__DOT__dot0));
                        vlSelfRef.accel_top__DOT__u_clip__DOT__div_start = 1U;
                        vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x1bU;
                    }
                } else if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                    if (vlSelfRef.accel_top__DOT__u_clip__DOT__div_tighten_hi) {
                        vlSelfRef.accel_top__DOT__u_clip__DOT__new_hi 
                            = (VL_LTS_III(16, (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__div_q), (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__cur_hi))
                                ? (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__div_q)
                                : (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__cur_hi));
                        vlSelfRef.accel_top__DOT__u_clip__DOT__new_lo 
                            = vlSelfRef.accel_top__DOT__u_clip__DOT__cur_lo;
                    } else {
                        vlSelfRef.accel_top__DOT__u_clip__DOT__new_hi 
                            = vlSelfRef.accel_top__DOT__u_clip__DOT__cur_hi;
                        vlSelfRef.accel_top__DOT__u_clip__DOT__new_lo 
                            = (VL_GTS_III(16, (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__div_q), (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__cur_lo))
                                ? (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__div_q)
                                : (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__cur_lo));
                    }
                    __Vdly__accel_top__DOT__u_clip__DOT__cur_hi 
                        = vlSelfRef.accel_top__DOT__u_clip__DOT__new_hi;
                    __Vdly__accel_top__DOT__u_clip__DOT__cur_lo 
                        = vlSelfRef.accel_top__DOT__u_clip__DOT__new_lo;
                    if (VL_LTS_III(16, (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__new_hi), (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__new_lo))) {
                        vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x1eU;
                    } else if (vlSelfRef.accel_top__DOT__u_clip__DOT__is_last_poly_edge) {
                        vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x1aU;
                    } else {
                        vlSelfRef.accel_top__DOT__u_clip__DOT__pe 
                            = vlSelfRef.accel_top__DOT__u_clip__DOT__pe_next;
                        vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x17U;
                    }
                } else if (vlSelfRef.accel_top__DOT__u_clip__DOT__div_done) {
                    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x19U;
                }
            } else if ((4U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                if ((2U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                    if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                        if ((0U == vlSelfRef.accel_top__DOT__u_clip__DOT__sil_B)) {
                            if (VL_LTES_III(24, 0U, vlSelfRef.accel_top__DOT__u_clip__DOT__sil_A)) {
                                vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x1eU;
                            } else if (vlSelfRef.accel_top__DOT__u_clip__DOT__is_last_poly_edge) {
                                vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x1aU;
                            } else {
                                vlSelfRef.accel_top__DOT__u_clip__DOT__pe 
                                    = vlSelfRef.accel_top__DOT__u_clip__DOT__pe_next;
                            }
                        } else {
                            vlSelfRef.accel_top__DOT__u_clip__DOT__div_num 
                                = (- (((- (IData)((1U 
                                                   & (vlSelfRef.accel_top__DOT__u_clip__DOT__sil_A 
                                                      >> 0x17U)))) 
                                       << 0x00000018U) 
                                      | vlSelfRef.accel_top__DOT__u_clip__DOT__sil_A));
                            vlSelfRef.accel_top__DOT__u_clip__DOT__div_den 
                                = (((- (IData)((1U 
                                                & (vlSelfRef.accel_top__DOT__u_clip__DOT__sil_B 
                                                   >> 0x17U)))) 
                                    << 0x00000018U) 
                                   | vlSelfRef.accel_top__DOT__u_clip__DOT__sil_B);
                            __Vdly__accel_top__DOT__u_clip__DOT__div_tighten_hi 
                                = VL_LTS_III(24, 0U, vlSelfRef.accel_top__DOT__u_clip__DOT__sil_B);
                            vlSelfRef.accel_top__DOT__u_clip__DOT__div_start = 1U;
                            vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x18U;
                        }
                    } else {
                        if ((8U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__cfcrdsub))) {
                            if ((2U >= (3U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__cfcrdsub)))) {
                                __VdlyVal__accel_top__DOT__u_clip__DOT__cfz8__v0 
                                    = vlSelfRef.accel_top__DOT__scratch_a_rdata;
                                __VdlyDim0__accel_top__DOT__u_clip__DOT__cfz8__v0 
                                    = (3U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__cfcrdsub));
                                __VdlySet__accel_top__DOT__u_clip__DOT__cfz8__v0 = 1U;
                            }
                        } else if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__cfcrdsub))) {
                            __VdlyVal__accel_top__DOT__u_clip__DOT__cfy8__v0 
                                = vlSelfRef.accel_top__DOT__scratch_a_rdata;
                            __VdlyDim0__accel_top__DOT__u_clip__DOT__cfy8__v0 
                                = (3U & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__cfcrdsub) 
                                         >> 1U));
                            __VdlySet__accel_top__DOT__u_clip__DOT__cfy8__v0 = 1U;
                        } else {
                            __VdlyVal__accel_top__DOT__u_clip__DOT__cfx8__v0 
                                = vlSelfRef.accel_top__DOT__scratch_a_rdata;
                            __VdlyDim0__accel_top__DOT__u_clip__DOT__cfx8__v0 
                                = (3U & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__cfcrdsub) 
                                         >> 1U));
                            __VdlySet__accel_top__DOT__u_clip__DOT__cfx8__v0 = 1U;
                        }
                        if ((0x0aU == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__cfcrdsub))) {
                            vlSelfRef.accel_top__DOT__u_clip__DOT__nverts 
                                = ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__is_quad)
                                    ? 4U : 3U);
                            vlSelfRef.accel_top__DOT__u_clip__DOT__pe = 0U;
                            __Vdly__accel_top__DOT__u_clip__DOT__cur_lo = 0U;
                            __Vdly__accel_top__DOT__u_clip__DOT__cur_hi = 0x7fffU;
                            vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x17U;
                        } else {
                            vlSelfRef.accel_top__DOT__u_clip__DOT__cfcrdsub 
                                = (0x0000000fU & ((IData)(1U) 
                                                  + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__cfcrdsub)));
                            vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x15U;
                        }
                    }
                } else if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x16U;
                } else if ((1U & ((IData)(vlSelfRef.accel_top__DOT__scratch_a_rdata) 
                                  >> (7U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__j))))) {
                    vlSelfRef.accel_top__DOT__u_clip__DOT__cfcrdsub = 0U;
                    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x15U;
                } else {
                    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x1eU;
                }
            } else if ((2U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x14U;
                } else {
                    __VdlyVal__accel_top__DOT__u_clip__DOT__cf_v__v0 
                        = vlSelfRef.accel_top__DOT__shape_mem_rd_data;
                    __VdlyDim0__accel_top__DOT__u_clip__DOT__cf_v__v0 
                        = (3U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__cfvsub));
                    __VdlySet__accel_top__DOT__u_clip__DOT__cf_v__v0 = 1U;
                    if ((3U == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__cfvsub))) {
                        vlSelfRef.accel_top__DOT__u_clip__DOT__is_quad 
                            = ((IData)(vlSelfRef.accel_top__DOT__shape_mem_rd_data) 
                               != vlSelfRef.accel_top__DOT__u_clip__DOT__cf_v[2U]);
                        vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x13U;
                    } else {
                        vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__cfvsub 
                            = (7U & ((IData)(1U) + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__cfvsub)));
                        vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x11U;
                    }
                }
            } else if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x12U;
            } else if (((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__part_start) 
                        == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__part_end_v))) {
                vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x1fU;
            } else {
                vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__j 
                    = vlSelfRef.accel_top__DOT__u_clip__DOT__part_start;
                vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__cfvsub = 0U;
                vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x11U;
            }
        } else if ((8U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                if ((2U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                    if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                        vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state 
                            = (((((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__faceA) 
                                  >= (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__part_start)) 
                                 & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__faceA) 
                                    < (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__part_end_v))) 
                                | (((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__faceB) 
                                    >= (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__part_start)) 
                                   & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__faceB) 
                                      < (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__part_end_v))))
                                ? 0x1fU : 0x10U);
                    } else if (vlSelfRef.accel_top__DOT__u_clip__DOT__pfesub) {
                        vlSelfRef.accel_top__DOT__u_clip__DOT__part_end_v 
                            = vlSelfRef.accel_top__DOT__shape_mem_rd_data;
                        vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x0fU;
                    } else {
                        vlSelfRef.accel_top__DOT__u_clip__DOT__part_start 
                            = ((0U == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__part_p))
                                ? 0U : (IData)(vlSelfRef.accel_top__DOT__shape_mem_rd_data));
                        vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__pfesub = 1U;
                        vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x0dU;
                    }
                } else if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x0eU;
                } else if ((0U == (IData)(vlSelfRef.accel_top__DOT__clip_effective_part_count))) {
                    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x31U;
                } else {
                    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__part_p = 0U;
                    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__pfesub = 0U;
                    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x0dU;
                }
            } else if ((2U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                    __VdlyVal__accel_top__DOT__u_clip__DOT__ev16_bytes__v0 
                        = vlSelfRef.accel_top__DOT__scratch_a_rdata;
                    __VdlyDim0__accel_top__DOT__u_clip__DOT__ev16_bytes__v0 
                        = (7U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__ev16sub));
                    __VdlySet__accel_top__DOT__u_clip__DOT__ev16_bytes__v0 = 1U;
                    if ((7U == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__ev16sub))) {
                        vlSelfRef.accel_top__DOT__u_clip__DOT__occ_count = 0U;
                        vlSelfRef.accel_top__DOT__u_clip__DOT__px_v0 
                            = (((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__ev16_bytes[1U]) 
                                << 8U) | vlSelfRef.accel_top__DOT__u_clip__DOT__ev16_bytes[0U]);
                        vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x0cU;
                        vlSelfRef.accel_top__DOT__u_clip__DOT__py_v0 
                            = (((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__ev16_bytes[3U]) 
                                << 8U) | vlSelfRef.accel_top__DOT__u_clip__DOT__ev16_bytes[2U]);
                        vlSelfRef.accel_top__DOT__u_clip__DOT__px_v1 
                            = (((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__ev16_bytes[5U]) 
                                << 8U) | vlSelfRef.accel_top__DOT__u_clip__DOT__ev16_bytes[4U]);
                        vlSelfRef.accel_top__DOT__u_clip__DOT__py_v1 
                            = (((IData)(vlSelfRef.accel_top__DOT__scratch_a_rdata) 
                                << 8U) | vlSelfRef.accel_top__DOT__u_clip__DOT__ev16_bytes[6U]);
                    } else {
                        vlSelfRef.accel_top__DOT__u_clip__DOT__ev16sub 
                            = (0x0000000fU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__ev16sub)));
                        vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x0aU;
                    }
                } else {
                    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x0bU;
                }
            } else if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                if ((4U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__ev8sub))) {
                    if ((2U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__ev8sub))) {
                        vlSelfRef.accel_top__DOT__u_clip__DOT__v1z8 
                            = vlSelfRef.accel_top__DOT__scratch_a_rdata;
                    } else if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__ev8sub))) {
                        vlSelfRef.accel_top__DOT__u_clip__DOT__v1z8 
                            = vlSelfRef.accel_top__DOT__scratch_a_rdata;
                    } else {
                        vlSelfRef.accel_top__DOT__u_clip__DOT__v1y8 
                            = vlSelfRef.accel_top__DOT__scratch_a_rdata;
                    }
                } else if ((2U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__ev8sub))) {
                    if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__ev8sub))) {
                        vlSelfRef.accel_top__DOT__u_clip__DOT__v1x8 
                            = vlSelfRef.accel_top__DOT__scratch_a_rdata;
                    } else {
                        vlSelfRef.accel_top__DOT__u_clip__DOT__v0z8 
                            = vlSelfRef.accel_top__DOT__scratch_a_rdata;
                    }
                } else if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__ev8sub))) {
                    vlSelfRef.accel_top__DOT__u_clip__DOT__v0y8 
                        = vlSelfRef.accel_top__DOT__scratch_a_rdata;
                } else {
                    vlSelfRef.accel_top__DOT__u_clip__DOT__v0x8 
                        = vlSelfRef.accel_top__DOT__scratch_a_rdata;
                }
                if ((5U == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__ev8sub))) {
                    vlSelfRef.accel_top__DOT__u_clip__DOT__ev16sub = 0U;
                    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x0aU;
                } else {
                    vlSelfRef.accel_top__DOT__u_clip__DOT__ev8sub 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__ev8sub)));
                    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 8U;
                }
            } else {
                vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 9U;
            }
        } else if ((4U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                    if (vlSelfRef.accel_top__DOT__u_clip__DOT__colsub) {
                        vlSelfRef.accel_top__DOT__u_clip__DOT__ev8sub = 0U;
                        vlSelfRef.accel_top__DOT__u_clip__DOT__edge_color_ovr 
                            = vlSelfRef.accel_top__DOT__shape_mem_rd_data;
                        vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 8U;
                    } else {
                        vlSelfRef.accel_top__DOT__u_clip__DOT__chosen_color 
                            = vlSelfRef.accel_top__DOT__shape_mem_rd_data;
                        vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__colsub = 1U;
                        vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 6U;
                    }
                } else {
                    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 7U;
                }
            } else if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                if ((1U & ((~ (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__fv_a)) 
                           & (~ (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__fv_b))))) {
                    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0x2fU;
                } else {
                    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__colsub = 0U;
                    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 6U;
                }
            } else if (vlSelfRef.accel_top__DOT__u_clip__DOT__fvsub) {
                vlSelfRef.accel_top__DOT__u_clip__DOT__fv_b 
                    = (1U & ((IData)(vlSelfRef.accel_top__DOT__scratch_a_rdata) 
                             >> (7U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__faceB))));
                vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 5U;
            } else {
                vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__fv_a 
                    = (1U & ((IData)(vlSelfRef.accel_top__DOT__scratch_a_rdata) 
                             >> (7U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__faceA))));
                vlSelfRef.accel_top__DOT__u_clip__DOT__fvsub = 1U;
                vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 3U;
            }
        } else if ((2U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
                vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 4U;
            } else {
                if ((0U == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__esub))) {
                    vlSelfRef.accel_top__DOT__u_clip__DOT__v0 
                        = vlSelfRef.accel_top__DOT__shape_mem_rd_data;
                } else if ((1U == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__esub))) {
                    vlSelfRef.accel_top__DOT__u_clip__DOT__v1 
                        = vlSelfRef.accel_top__DOT__shape_mem_rd_data;
                } else if ((2U == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__esub))) {
                    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__faceA 
                        = vlSelfRef.accel_top__DOT__shape_mem_rd_data;
                } else {
                    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__faceB 
                        = vlSelfRef.accel_top__DOT__shape_mem_rd_data;
                }
                if ((3U == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__esub))) {
                    vlSelfRef.accel_top__DOT__u_clip__DOT__fvsub = 0U;
                    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 3U;
                } else {
                    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__esub 
                        = (7U & ((IData)(1U) + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__esub)));
                    vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 1U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state))) {
            vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 2U;
        } else if (vlSelfRef.accel_top__DOT__clip_start) {
            vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__i = 0U;
            __Vdly__accel_top__DOT__u_clip__DOT__penx = 0U;
            __Vdly__accel_top__DOT__u_clip__DOT__peny = 0U;
            __Vdly__accel_top__DOT__u_clip__DOT__write_idx = 0U;
            vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__esub = 0U;
            vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state 
                = ((0U == (IData)(vlSelfRef.accel_top__DOT__desc_edge_count_reg))
                    ? 0x30U : 1U);
        }
        if (vlSelfRef.accel_top__DOT__write_clip_enable) {
            vlSelfRef.accel_top__DOT__clip_enable_reg 
                = (1U & (IData)(vlSelfRef.data_in));
            vlSelfRef.accel_top__DOT__hw_pen_correct_reg 
                = (1U & ((IData)(vlSelfRef.data_in) 
                         >> 1U));
        }
        if (((IData)(vlSelfRef.accel_top__DOT__io_write) 
             & (0xd8U == (IData)(vlSelfRef.addr)))) {
            vlSelfRef.accel_top__DOT__desc_face_count_reg 
                = vlSelfRef.data_in;
        }
        vlSelfRef.accel_top__DOT__u_rotate__DOT__scale_div_done = 0U;
        if ((0U == (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__state))) {
            if (vlSelfRef.accel_top__DOT__u_rotate__DOT__scale_div_start) {
                __Vdly__accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__result_sign = 0U;
                __Vdly__accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__abs_denom 
                    = vlSelfRef.accel_top__DOT__distance_reg;
                vlSelfRef.accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__rem = 0U;
                __Vdly__accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__quot = 0x0000000000800000ULL;
                __Vdly__accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__iter = 0U;
                __Vdly__accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__state 
                    = ((0U == (IData)(vlSelfRef.accel_top__DOT__distance_reg))
                        ? 2U : 1U);
            }
        } else if ((1U == (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__state))) {
            if ((vlSelfRef.accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__shifted_rem 
                 >= (QData)((IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__abs_denom)))) {
                __Vdly__accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__quot 
                    = (1ULL | (0x00007ffffffffffeULL 
                               & (vlSelfRef.accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__quot 
                                  << 1U)));
                vlSelfRef.accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__rem 
                    = ((IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__shifted_rem) 
                       - vlSelfRef.accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__abs_denom);
            } else {
                __Vdly__accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__quot 
                    = (0x00007ffffffffffeULL & (vlSelfRef.accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__quot 
                                                << 1U));
                vlSelfRef.accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__rem 
                    = (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__shifted_rem);
            }
            if ((0x2eU == (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__iter))) {
                __Vdly__accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__state = 2U;
            } else {
                __Vdly__accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__iter 
                    = (0x0000003fU & ((IData)(1U) + (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__iter)));
            }
        } else {
            if ((2U == (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__state))) {
                vlSelfRef.accel_top__DOT__u_rotate__DOT__scale_div_quotient 
                    = (0x0000ffffU & (((0U == (IData)(vlSelfRef.accel_top__DOT__distance_reg)) 
                                       | (0U != (IData)(
                                                        (vlSelfRef.accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__quot 
                                                         >> 0x0fU))))
                                       ? ((IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__result_sign)
                                           ? 0x8000U
                                           : 0x7fffU)
                                       : ((IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__result_sign)
                                           ? (- (0x00007fffU 
                                                 & (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__quot)))
                                           : (0x00007fffU 
                                              & (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__quot)))));
                vlSelfRef.accel_top__DOT__u_rotate__DOT__scale_div_done = 1U;
            }
            __Vdly__accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__state = 0U;
        }
        if (((IData)(vlSelfRef.accel_top__DOT__io_write) 
             & (0xd7U == (IData)(vlSelfRef.addr)))) {
            vlSelfRef.accel_top__DOT__desc_vertex_count_reg 
                = vlSelfRef.data_in;
        }
        if (((IData)(vlSelfRef.accel_top__DOT__io_write) 
             & (0xdbU == (IData)(vlSelfRef.addr)))) {
            vlSelfRef.accel_top__DOT__desc_coord_shift_reg 
                = (7U & (IData)(vlSelfRef.data_in));
        }
        vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_done = 0U;
        if ((4U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__state))) {
            if ((1U & (~ ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__state)))) {
                    vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_magnitude 
                        = (0x000000ffU & ((- (IData)(
                                                     (1U 
                                                      & (~ (IData)(
                                                                   (vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__mag_shifted 
                                                                    >> 0x00000029U)))))) 
                                          & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__mag_shifted) 
                                             | (- (IData)(
                                                          VL_LTS_IQQ(42, 0x00000000000000ffULL, vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__mag_shifted))))));
                    vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_done = 1U;
                }
            }
            __Vdly__accel_top__DOT__u_clip__DOT__u_rtp__DOT__state = 0U;
        } else if ((2U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__state))) {
                vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__mag_wide 
                    = (0x000003ffffffffffULL & VL_MULS_QQQ(42, 0x0000000000009b75ULL, 
                                                           (0x000003ffffffffffULL 
                                                            & VL_EXTENDS_QI(42,24, vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__x))));
                vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_angle 
                    = (0x000003ffU & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__angle_offset) 
                                      + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__acc_angle)));
                __Vdly__accel_top__DOT__u_clip__DOT__u_rtp__DOT__state = 4U;
            } else {
                if (VL_LTS_III(32, 0U, VL_EXTENDS_II(32,24, vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__y))) {
                    __Vfunc_accel_top__DOT__u_clip__DOT__u_rtp__DOT__atan_lut__0__i 
                        = vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__iter;
                    __Vdly__accel_top__DOT__u_clip__DOT__u_rtp__DOT__x 
                        = (0x00ffffffU & (vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__x 
                                          + vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__y_shifted));
                    __Vdly__accel_top__DOT__u_clip__DOT__u_rtp__DOT__y 
                        = (0x00ffffffU & (vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__y 
                                          - vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__x_shifted));
                    vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT____VlemCall_0__atan_lut 
                        = (0x000000ffU & Vaccel_top__ConstPool__CONST_h4bf37f49_0
                           [(0x07ffffffU & (IData)(__Vfunc_accel_top__DOT__u_clip__DOT__u_rtp__DOT__atan_lut__0__i))]);
                    __Vdly__accel_top__DOT__u_clip__DOT__u_rtp__DOT__acc_angle 
                        = (0x000007ffU & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__acc_angle) 
                                          + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT____VlemCall_0__atan_lut)));
                } else {
                    __Vfunc_accel_top__DOT__u_clip__DOT__u_rtp__DOT__atan_lut__1__i 
                        = vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__iter;
                    __Vdly__accel_top__DOT__u_clip__DOT__u_rtp__DOT__x 
                        = (0x00ffffffU & (vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__x 
                                          - vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__y_shifted));
                    __Vdly__accel_top__DOT__u_clip__DOT__u_rtp__DOT__y 
                        = (0x00ffffffU & (vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__y 
                                          + vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__x_shifted));
                    vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT____VlemCall_1__atan_lut 
                        = (0x000000ffU & Vaccel_top__ConstPool__CONST_h4bf37f49_0
                           [(0x07ffffffU & (IData)(__Vfunc_accel_top__DOT__u_clip__DOT__u_rtp__DOT__atan_lut__1__i))]);
                    __Vdly__accel_top__DOT__u_clip__DOT__u_rtp__DOT__acc_angle 
                        = (0x000007ffU & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__acc_angle) 
                                          - (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT____VlemCall_1__atan_lut)));
                }
                if ((9U == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__iter))) {
                    __Vdly__accel_top__DOT__u_clip__DOT__u_rtp__DOT__state = 3U;
                } else {
                    vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__iter 
                        = (0x0000000fU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__iter)));
                }
            }
        } else if ((1U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__state))) {
            if (VL_GTS_III(32, 0U, VL_EXTENDS_II(32,16, (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_dy)))) {
                __Vdly__accel_top__DOT__u_clip__DOT__u_rtp__DOT__x 
                    = (0x00ffffffU & ((- ((0x00ff0000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_dy) 
                                                             >> 0x0fU)))) 
                                              << 0x00000010U)) 
                                          | (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_dy))) 
                                      << 6U));
                __Vdly__accel_top__DOT__u_clip__DOT__u_rtp__DOT__y 
                    = (0x00ffffffU & ((- ((0x00ff0000U 
                                           & ((- (IData)(
                                                         (1U 
                                                          & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_dx) 
                                                             >> 0x0fU)))) 
                                              << 0x00000010U)) 
                                          | (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_dx))) 
                                      << 6U));
                vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__angle_offset = 0x0200U;
            } else {
                __Vdly__accel_top__DOT__u_clip__DOT__u_rtp__DOT__x 
                    = (0x00ffffffU & (((0x00ff0000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_dy) 
                                                          >> 0x0fU)))) 
                                           << 0x00000010U)) 
                                       | (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_dy)) 
                                      << 6U));
                __Vdly__accel_top__DOT__u_clip__DOT__u_rtp__DOT__y 
                    = (0x00ffffffU & (((0x00ff0000U 
                                        & ((- (IData)(
                                                      (1U 
                                                       & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_dx) 
                                                          >> 0x0fU)))) 
                                           << 0x00000010U)) 
                                       | (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_dx)) 
                                      << 6U));
                vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__angle_offset = 0U;
            }
            __Vdly__accel_top__DOT__u_clip__DOT__u_rtp__DOT__acc_angle = 0U;
            vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__iter = 0U;
            __Vdly__accel_top__DOT__u_clip__DOT__u_rtp__DOT__state = 2U;
        } else if (vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_start) {
            __Vdly__accel_top__DOT__u_clip__DOT__u_rtp__DOT__state = 1U;
        }
    } else {
        __Vdly__accel_top__DOT__load_addr_reg = 0U;
        __Vdly__accel_top__DOT__distance_reg = 0U;
        vlSelfRef.__Vdly__accel_top__DOT__desc_base_reg = 0U;
        __Vdly__accel_top__DOT__pitch_reg = 0U;
        __Vdly__accel_top__DOT__yaw_reg = 0U;
        vlSelfRef.accel_top__DOT__clip_enable_reg = 1U;
        vlSelfRef.accel_top__DOT__desc_part_count_reg = 0U;
        vlSelfRef.__Vdly__accel_top__DOT__vec_data_idx = 0U;
        vlSelfRef.accel_top__DOT__vec_data_latch = 0U;
        __Vdly__accel_top__DOT__mstate = 0U;
        vlSelfRef.accel_top__DOT__busy = 0U;
        vlSelfRef.accel_top__DOT__done_latch = 0U;
        vlSelfRef.__Vdly__accel_top__DOT__active_stage = 0U;
        vlSelfRef.accel_top__DOT__vec_count_reg = 0U;
        __Vdly__accel_top__DOT__rotate_start = 0U;
        __Vdly__accel_top__DOT__cull_start = 0U;
        __Vdly__accel_top__DOT__clip_start = 0U;
        __Vdly__accel_top__DOT__u_clip__DOT__u_div__DOT__state = 0U;
        __Vdly__accel_top__DOT__u_clip__DOT__div_done = 0U;
        __Vdly__accel_top__DOT__u_clip__DOT__div_q = 0U;
        vlSelfRef.__Vdly__accel_top__DOT__u_cull__DOT__f = 0U;
        __Vdly__accel_top__DOT__u_cull__DOT__state = 0U;
        vlSelfRef.accel_top__DOT__cull_done = 0U;
        vlSelfRef.__Vdly__accel_top__DOT__u_cull__DOT__vsub = 0U;
        __Vdly__accel_top__DOT__u_cull__DOT__csub = 0U;
        vlSelfRef.accel_top__DOT__cull_scr_wdata = 0U;
        vlSelfRef.accel_top__DOT__u_cull__DOT__write_addr_reg = 0U;
        vlSelfRef.accel_top__DOT__cull_scr_we = 0U;
        vlSelfRef.accel_top__DOT__u_cull__DOT__mul_a = 0U;
        vlSelfRef.accel_top__DOT__u_cull__DOT__mul_b = 0U;
        vlSelfRef.accel_top__DOT__u_cull__DOT__vis_byte = 0U;
        vlSelfRef.__Vdly__accel_top__DOT__u_rotate__DOT__vidx = 0U;
        __Vdly__accel_top__DOT__u_rotate__DOT__wr_idx4 = 0U;
        __Vdly__accel_top__DOT__u_rotate__DOT__state = 0U;
        vlSelfRef.accel_top__DOT__rotate_done = 0U;
        vlSelfRef.__Vdly__accel_top__DOT__u_rotate__DOT__byte_idx = 0U;
        vlSelfRef.accel_top__DOT__rotate_scr_addr = 0U;
        vlSelfRef.accel_top__DOT__rotate_scr_wdata = 0U;
        vlSelfRef.accel_top__DOT__rotate_scr_we = 0U;
        __Vdly__accel_top__DOT__u_rotate__DOT__scale_div_start = 0U;
        vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__i = 0U;
        __Vdly__accel_top__DOT__u_clip__DOT__penx = 0U;
        __Vdly__accel_top__DOT__u_clip__DOT__peny = 0U;
        __Vdly__accel_top__DOT__u_clip__DOT__write_idx = 0U;
        vlSelfRef.accel_top__DOT__u_clip__DOT__hop_pending = 0U;
        vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state = 0U;
        vlSelfRef.accel_top__DOT__clip_done = 0U;
        vlSelfRef.accel_top__DOT__clip_vec_count = 0U;
        vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__esub = 0U;
        vlSelfRef.accel_top__DOT__clip_scr_we = 0U;
        vlSelfRef.accel_top__DOT__clip_scr_wdata = 0U;
        vlSelfRef.accel_top__DOT__u_clip__DOT__write_addr_reg = 0U;
        vlSelfRef.accel_top__DOT__u_clip__DOT__div_start = 0U;
        __Vdly__accel_top__DOT__u_clip__DOT__rtp_start = 0U;
        vlSelfRef.accel_top__DOT__desc_face_count_reg = 0U;
        __Vdly__accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__state = 0U;
        vlSelfRef.accel_top__DOT__u_rotate__DOT__scale_div_done = 0U;
        vlSelfRef.accel_top__DOT__u_rotate__DOT__scale_div_quotient = 0U;
        vlSelfRef.accel_top__DOT__desc_vertex_count_reg = 0U;
        vlSelfRef.accel_top__DOT__desc_coord_shift_reg = 0U;
        vlSelfRef.accel_top__DOT__hw_pen_correct_reg = 1U;
        __Vdly__accel_top__DOT__u_clip__DOT__u_rtp__DOT__x = 0U;
        __Vdly__accel_top__DOT__u_clip__DOT__u_rtp__DOT__y = 0U;
        __Vdly__accel_top__DOT__u_clip__DOT__u_rtp__DOT__state = 0U;
        vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_done = 0U;
        vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_magnitude = 0U;
        vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_angle = 0U;
        __Vdly__accel_top__DOT__u_clip__DOT__u_rtp__DOT__acc_angle = 0U;
        vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__angle_offset = 0U;
        vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__iter = 0U;
        vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__mag_wide = 0ULL;
    }
    vlSelfRef.accel_top__DOT__load_addr_reg = __Vdly__accel_top__DOT__load_addr_reg;
    vlSelfRef.accel_top__DOT__pitch_reg = __Vdly__accel_top__DOT__pitch_reg;
    vlSelfRef.accel_top__DOT__yaw_reg = __Vdly__accel_top__DOT__yaw_reg;
    vlSelfRef.accel_top__DOT__mstate = __Vdly__accel_top__DOT__mstate;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_div__DOT__result_sign 
        = __Vdly__accel_top__DOT__u_clip__DOT__u_div__DOT__result_sign;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_div__DOT__abs_denom 
        = __Vdly__accel_top__DOT__u_clip__DOT__u_div__DOT__abs_denom;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_div__DOT__iter 
        = __Vdly__accel_top__DOT__u_clip__DOT__u_div__DOT__iter;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_div__DOT__state 
        = __Vdly__accel_top__DOT__u_clip__DOT__u_div__DOT__state;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_div__DOT__quot 
        = __Vdly__accel_top__DOT__u_clip__DOT__u_div__DOT__quot;
    vlSelfRef.shape_load_addr = (0x00000fffU & (IData)(vlSelfRef.accel_top__DOT__load_addr_reg));
    vlSelfRef.accel_top__DOT__prev_read_vec_data = 
        ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.accel_top__DOT__read_vec_data));
    vlSelfRef.shape_load_we = ((~ (IData)(vlSelfRef.accel_top__DOT__busy)) 
                               & ((IData)(vlSelfRef.accel_top__DOT__io_write) 
                                  & (0xd4U == (IData)(vlSelfRef.addr))));
    vlSelfRef.accel_top__DOT__start_pulse = ((IData)(vlSelfRef.accel_top__DOT__write_ctrl) 
                                             & ((~ (IData)(vlSelfRef.accel_top__DOT__busy)) 
                                                & (IData)(vlSelfRef.data_in)));
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_div__DOT__shifted_rem 
        = (((QData)((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__u_div__DOT__rem)) 
            << 1U) | (QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.accel_top__DOT__u_clip__DOT__u_div__DOT__quot 
                                                    >> 0x0000002eU))))));
    vlSelfRef.accel_top__DOT__cull_start = __Vdly__accel_top__DOT__cull_start;
    vlSelfRef.accel_top__DOT__u_cull__DOT__state = __Vdly__accel_top__DOT__u_cull__DOT__state;
    vlSelfRef.accel_top__DOT__u_cull__DOT__csub = __Vdly__accel_top__DOT__u_cull__DOT__csub;
    if (__VdlySet__accel_top__DOT__u_cull__DOT__fv__v0) {
        vlSelfRef.accel_top__DOT__u_cull__DOT__fv[__VdlyDim0__accel_top__DOT__u_cull__DOT__fv__v0] 
            = __VdlyVal__accel_top__DOT__u_cull__DOT__fv__v0;
    }
    vlSelfRef.accel_top__DOT__rotate_start = __Vdly__accel_top__DOT__rotate_start;
    vlSelfRef.accel_top__DOT__u_rotate__DOT__state 
        = __Vdly__accel_top__DOT__u_rotate__DOT__state;
    vlSelfRef.accel_top__DOT__u_rotate__DOT__wr_idx4 
        = __Vdly__accel_top__DOT__u_rotate__DOT__wr_idx4;
    if (__VdlySet__accel_top__DOT__u_rotate__DOT__vbytes__v0) {
        vlSelfRef.accel_top__DOT__u_rotate__DOT__vbytes[__VdlyDim0__accel_top__DOT__u_rotate__DOT__vbytes__v0] 
            = __VdlyVal__accel_top__DOT__u_rotate__DOT__vbytes__v0;
    }
    vlSelfRef.accel_top__DOT__u_clip__DOT__div_q = __Vdly__accel_top__DOT__u_clip__DOT__div_q;
    vlSelfRef.accel_top__DOT__u_clip__DOT__div_done 
        = __Vdly__accel_top__DOT__u_clip__DOT__div_done;
    vlSelfRef.accel_top__DOT__clip_start = __Vdly__accel_top__DOT__clip_start;
    vlSelfRef.accel_top__DOT__u_clip__DOT__vseg = __Vdly__accel_top__DOT__u_clip__DOT__vseg;
    vlSelfRef.accel_top__DOT__u_clip__DOT__vis_count 
        = __Vdly__accel_top__DOT__u_clip__DOT__vis_count;
    vlSelfRef.accel_top__DOT__u_clip__DOT__cursor = __Vdly__accel_top__DOT__u_clip__DOT__cursor;
    vlSelfRef.accel_top__DOT__u_clip__DOT__si = __Vdly__accel_top__DOT__u_clip__DOT__si;
    vlSelfRef.accel_top__DOT__u_clip__DOT__merge_wr 
        = __Vdly__accel_top__DOT__u_clip__DOT__merge_wr;
    vlSelfRef.accel_top__DOT__u_clip__DOT__tmp_lo = __Vdly__accel_top__DOT__u_clip__DOT__tmp_lo;
    vlSelfRef.accel_top__DOT__u_clip__DOT__tmp_hi = __Vdly__accel_top__DOT__u_clip__DOT__tmp_hi;
    vlSelfRef.accel_top__DOT__u_clip__DOT__sj = __Vdly__accel_top__DOT__u_clip__DOT__sj;
    vlSelfRef.accel_top__DOT__u_clip__DOT__penx = __Vdly__accel_top__DOT__u_clip__DOT__penx;
    vlSelfRef.accel_top__DOT__u_clip__DOT__peny = __Vdly__accel_top__DOT__u_clip__DOT__peny;
    vlSelfRef.accel_top__DOT__u_clip__DOT__write_idx 
        = __Vdly__accel_top__DOT__u_clip__DOT__write_idx;
    vlSelfRef.accel_top__DOT__u_clip__DOT__wrsub = __Vdly__accel_top__DOT__u_clip__DOT__wrsub;
    vlSelfRef.accel_top__DOT__clip_effective_part_count 
        = ((IData)(vlSelfRef.accel_top__DOT__desc_part_count_reg) 
           & (- (IData)((IData)(vlSelfRef.accel_top__DOT__clip_enable_reg))));
    vlSelfRef.accel_top__DOT__u_clip__DOT__cur_hi = __Vdly__accel_top__DOT__u_clip__DOT__cur_hi;
    vlSelfRef.accel_top__DOT__u_clip__DOT__cur_lo = __Vdly__accel_top__DOT__u_clip__DOT__cur_lo;
    vlSelfRef.accel_top__DOT__u_clip__DOT__div_tighten_hi 
        = __Vdly__accel_top__DOT__u_clip__DOT__div_tighten_hi;
    if (__VdlySet__accel_top__DOT__u_clip__DOT__ev16_bytes__v0) {
        vlSelfRef.accel_top__DOT__u_clip__DOT__ev16_bytes[__VdlyDim0__accel_top__DOT__u_clip__DOT__ev16_bytes__v0] 
            = __VdlyVal__accel_top__DOT__u_clip__DOT__ev16_bytes__v0;
    }
    if (__VdlySet__accel_top__DOT__u_clip__DOT__vis_hi__v0) {
        vlSelfRef.accel_top__DOT__u_clip__DOT__vis_hi[__VdlyDim0__accel_top__DOT__u_clip__DOT__vis_hi__v0] = 0x7fffU;
    }
    if (__VdlySet__accel_top__DOT__u_clip__DOT__vis_hi__v1) {
        vlSelfRef.accel_top__DOT__u_clip__DOT__vis_hi[__VdlyDim0__accel_top__DOT__u_clip__DOT__vis_hi__v1] 
            = __VdlyVal__accel_top__DOT__u_clip__DOT__vis_hi__v1;
    }
    if (__VdlySet__accel_top__DOT__u_clip__DOT__vis_lo__v0) {
        vlSelfRef.accel_top__DOT__u_clip__DOT__vis_lo[__VdlyDim0__accel_top__DOT__u_clip__DOT__vis_lo__v0] 
            = __VdlyVal__accel_top__DOT__u_clip__DOT__vis_lo__v0;
    }
    if (__VdlySet__accel_top__DOT__u_clip__DOT__vis_lo__v1) {
        vlSelfRef.accel_top__DOT__u_clip__DOT__vis_lo[__VdlyDim0__accel_top__DOT__u_clip__DOT__vis_lo__v1] 
            = __VdlyVal__accel_top__DOT__u_clip__DOT__vis_lo__v1;
    }
    vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_mag_latched 
        = __Vdly__accel_top__DOT__u_clip__DOT__rtp_mag_latched;
    if (__VdlySet__accel_top__DOT__u_clip__DOT__cf_v__v0) {
        vlSelfRef.accel_top__DOT__u_clip__DOT__cf_v[__VdlyDim0__accel_top__DOT__u_clip__DOT__cf_v__v0] 
            = __VdlyVal__accel_top__DOT__u_clip__DOT__cf_v__v0;
    }
    vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_angle_latched 
        = __Vdly__accel_top__DOT__u_clip__DOT__rtp_angle_latched;
    if (__VdlySet__accel_top__DOT__u_clip__DOT__occ_lo__v0) {
        vlSelfRef.accel_top__DOT__u_clip__DOT__occ_lo[__VdlyDim0__accel_top__DOT__u_clip__DOT__occ_lo__v0] 
            = __VdlyVal__accel_top__DOT__u_clip__DOT__occ_lo__v0;
        vlSelfRef.accel_top__DOT__u_clip__DOT__occ_hi[__VdlyDim0__accel_top__DOT__u_clip__DOT__occ_hi__v0] 
            = __VdlyVal__accel_top__DOT__u_clip__DOT__occ_hi__v0;
    }
    if (__VdlySet__accel_top__DOT__u_clip__DOT__occ_lo__v1) {
        vlSelfRef.accel_top__DOT__u_clip__DOT__occ_lo[__VdlyDim0__accel_top__DOT__u_clip__DOT__occ_lo__v1] 
            = __VdlyVal__accel_top__DOT__u_clip__DOT__occ_lo__v1;
    }
    if (__VdlySet__accel_top__DOT__u_clip__DOT__occ_lo__v2) {
        vlSelfRef.accel_top__DOT__u_clip__DOT__occ_lo[__VdlyDim0__accel_top__DOT__u_clip__DOT__occ_lo__v2] 
            = __VdlyVal__accel_top__DOT__u_clip__DOT__occ_lo__v2;
        vlSelfRef.accel_top__DOT__u_clip__DOT__occ_lo[__VdlyDim0__accel_top__DOT__u_clip__DOT__occ_lo__v3] 
            = __VdlyVal__accel_top__DOT__u_clip__DOT__occ_lo__v3;
    }
    if (__VdlySet__accel_top__DOT__u_clip__DOT__occ_hi__v1) {
        vlSelfRef.accel_top__DOT__u_clip__DOT__occ_hi[__VdlyDim0__accel_top__DOT__u_clip__DOT__occ_hi__v1] 
            = __VdlyVal__accel_top__DOT__u_clip__DOT__occ_hi__v1;
    }
    if (__VdlySet__accel_top__DOT__u_clip__DOT__occ_lo__v2) {
        vlSelfRef.accel_top__DOT__u_clip__DOT__occ_hi[__VdlyDim0__accel_top__DOT__u_clip__DOT__occ_hi__v2] 
            = __VdlyVal__accel_top__DOT__u_clip__DOT__occ_hi__v2;
        vlSelfRef.accel_top__DOT__u_clip__DOT__occ_hi[__VdlyDim0__accel_top__DOT__u_clip__DOT__occ_hi__v3] 
            = __VdlyVal__accel_top__DOT__u_clip__DOT__occ_hi__v3;
    }
    if (__VdlySet__accel_top__DOT__u_clip__DOT__occ_lo__v4) {
        vlSelfRef.accel_top__DOT__u_clip__DOT__occ_lo[__VdlyDim0__accel_top__DOT__u_clip__DOT__occ_lo__v4] 
            = __VdlyVal__accel_top__DOT__u_clip__DOT__occ_lo__v4;
        vlSelfRef.accel_top__DOT__u_clip__DOT__occ_hi[__VdlyDim0__accel_top__DOT__u_clip__DOT__occ_hi__v4] 
            = __VdlyVal__accel_top__DOT__u_clip__DOT__occ_hi__v4;
    }
    if (__VdlySet__accel_top__DOT__u_clip__DOT__cfz8__v0) {
        vlSelfRef.accel_top__DOT__u_clip__DOT__cfz8[__VdlyDim0__accel_top__DOT__u_clip__DOT__cfz8__v0] 
            = __VdlyVal__accel_top__DOT__u_clip__DOT__cfz8__v0;
    }
    if (__VdlySet__accel_top__DOT__u_clip__DOT__cfy8__v0) {
        vlSelfRef.accel_top__DOT__u_clip__DOT__cfy8[__VdlyDim0__accel_top__DOT__u_clip__DOT__cfy8__v0] 
            = __VdlyVal__accel_top__DOT__u_clip__DOT__cfy8__v0;
    }
    if (__VdlySet__accel_top__DOT__u_clip__DOT__cfx8__v0) {
        vlSelfRef.accel_top__DOT__u_clip__DOT__cfx8[__VdlyDim0__accel_top__DOT__u_clip__DOT__cfx8__v0] 
            = __VdlyVal__accel_top__DOT__u_clip__DOT__cfx8__v0;
    }
    vlSelfRef.__VdfgRegularize_hebeb780c_0_39 = ((0x00000100U 
                                                  & ((IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__ay) 
                                                     << 1U)) 
                                                 | (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__ay));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_38 = ((0x00000100U 
                                                  & ((IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__ax) 
                                                     << 1U)) 
                                                 | (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__ax));
    vlSelfRef.accel_top__DOT__u_cull__DOT__mul_p = 
        (0x0003ffffU & VL_MULS_III(18, (0x0003ffffU 
                                        & VL_EXTENDS_II(18,9, (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__mul_a))), 
                                   (0x0003ffffU & VL_EXTENDS_II(18,9, (IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__mul_b)))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_17 = (0x000fffffU 
                                                 & VL_EXTENDS_II(20,8, (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__z1)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_11 = (0x000fffffU 
                                                 & VL_EXTENDS_II(20,8, (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__xs)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_19 = (0x000fffffU 
                                                 & VL_EXTENDS_II(20,8, (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__ys)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_13 = (0x000fffffU 
                                                 & VL_EXTENDS_II(20,8, (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__zs)));
    vlSelfRef.accel_top__DOT__u_clip__DOT__interp_result 
        = (0x0000ffffU & VL_SHIFTRS_III(16,32,32, VL_MULS_III(32, 
                                                              VL_EXTENDS_II(32,16, (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__interp_t)), 
                                                              VL_EXTENDS_II(32,16, (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__interp_delta))), 0x0000000fU));
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
    vlSelfRef.accel_top__DOT__u_clip__DOT__ev8_which 
        = ((((1U == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__ev8sub)) 
             | (4U == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__ev8sub)))
             ? 1U : 2U) & (- (IData)((1U & (~ ((0U 
                                                == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__ev8sub)) 
                                               | (3U 
                                                  == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__ev8sub))))))));
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
    vlSelfRef.accel_top__DOT__u_clip__DOT__is_last_poly_edge 
        = ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__pe) 
           == (0x0000000fU & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__nverts) 
                              - (IData)(1U))));
    __VdfgRegularize_hebeb780c_0_24 = (0x000001ffU 
                                       & VL_EXTENDS_II(9,8, vlSelfRef.accel_top__DOT__u_clip__DOT__cfy8
                                                       [
                                                       (3U 
                                                        & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__pe))]));
    __VdfgRegularize_hebeb780c_0_29 = (0x000fffffU 
                                       & VL_EXTENDS_II(20,9, 
                                                       (0x000001ffU 
                                                        & (VL_EXTENDS_II(9,8, vlSelfRef.accel_top__DOT__u_clip__DOT__cfy8[1U]) 
                                                           - 
                                                           VL_EXTENDS_II(9,8, vlSelfRef.accel_top__DOT__u_clip__DOT__cfy8[0U])))));
    __VdfgRegularize_hebeb780c_0_32 = (0x000fffffU 
                                       & VL_EXTENDS_II(20,9, 
                                                       (0x000001ffU 
                                                        & (VL_EXTENDS_II(9,8, vlSelfRef.accel_top__DOT__u_clip__DOT__cfy8[2U]) 
                                                           - 
                                                           VL_EXTENDS_II(9,8, vlSelfRef.accel_top__DOT__u_clip__DOT__cfy8[0U])))));
    __VdfgRegularize_hebeb780c_0_23 = (0x000001ffU 
                                       & VL_EXTENDS_II(9,8, vlSelfRef.accel_top__DOT__u_clip__DOT__cfx8
                                                       [
                                                       (3U 
                                                        & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__pe))]));
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
    vlSelfRef.accel_top__DOT__u_rotate__DOT__scale_div_start 
        = __Vdly__accel_top__DOT__u_rotate__DOT__scale_div_start;
    vlSelfRef.accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__result_sign 
        = __Vdly__accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__result_sign;
    vlSelfRef.accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__abs_denom 
        = __Vdly__accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__abs_denom;
    vlSelfRef.accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__iter 
        = __Vdly__accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__iter;
    vlSelfRef.accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__state 
        = __Vdly__accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__state;
    vlSelfRef.accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__quot 
        = __Vdly__accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__quot;
    vlSelfRef.accel_top__DOT__distance_reg = __Vdly__accel_top__DOT__distance_reg;
    vlSelfRef.accel_top__DOT__u_clip__DOT__hw_dy = 
        (0x0000ffffU & ((0x00000200U & ((IData)(0x0100U) 
                                        + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_angle_latched)))
                         ? (- (IData)(__VdfgRegularize_hebeb780c_0_6))
                         : (IData)(__VdfgRegularize_hebeb780c_0_6)));
    vlSelfRef.accel_top__DOT__u_clip__DOT__hw_dx = 
        (0x0000ffffU & ((0x00000200U & (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_angle_latched))
                         ? (- (IData)(__VdfgRegularize_hebeb780c_0_7))
                         : (IData)(__VdfgRegularize_hebeb780c_0_7)));
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
    vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_dy = __Vdly__accel_top__DOT__u_clip__DOT__rtp_dy;
    vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_dx = __Vdly__accel_top__DOT__u_clip__DOT__rtp_dx;
    vlSelfRef.accel_top__DOT__u_clip__DOT__rtp_start 
        = __Vdly__accel_top__DOT__u_clip__DOT__rtp_start;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__state 
        = __Vdly__accel_top__DOT__u_clip__DOT__u_rtp__DOT__state;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__acc_angle 
        = __Vdly__accel_top__DOT__u_clip__DOT__u_rtp__DOT__acc_angle;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__x 
        = __Vdly__accel_top__DOT__u_clip__DOT__u_rtp__DOT__x;
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__y 
        = __Vdly__accel_top__DOT__u_clip__DOT__u_rtp__DOT__y;
    vlSelfRef.accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__shifted_rem 
        = (((QData)((IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__rem)) 
            << 1U) | (QData)((IData)((1U & (IData)(
                                                   (vlSelfRef.accel_top__DOT__u_rotate__DOT__u_scale_div__DOT__quot 
                                                    >> 0x0000002eU))))));
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
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__mag_shifted 
        = (0x000003ffffffffffULL & VL_SHIFTRS_QQI(42,42,32, vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__mag_wide, 0x00000016U));
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__y_shifted 
        = (0x00ffffffU & VL_SHIFTRS_III(24,24,4, vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__y, (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__iter)));
    vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__x_shifted 
        = (0x00ffffffU & VL_SHIFTRS_III(24,24,4, vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__x, (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__u_rtp__DOT__iter)));
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

void Vaccel_top___024root___nba_sequent__TOP__3(Vaccel_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccel_top___024root___nba_sequent__TOP__3\n"); );
    Vaccel_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.accel_top__DOT__vec_data_idx = vlSelfRef.__Vdly__accel_top__DOT__vec_data_idx;
    vlSelfRef.accel_top__DOT__u_rotate__DOT__byte_idx 
        = vlSelfRef.__Vdly__accel_top__DOT__u_rotate__DOT__byte_idx;
    vlSelfRef.accel_top__DOT__u_cull__DOT__vsub = vlSelfRef.__Vdly__accel_top__DOT__u_cull__DOT__vsub;
    vlSelfRef.accel_top__DOT__u_cull__DOT__f = vlSelfRef.__Vdly__accel_top__DOT__u_cull__DOT__f;
    vlSelfRef.accel_top__DOT__u_clip__DOT__colsub = vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__colsub;
    vlSelfRef.accel_top__DOT__u_clip__DOT__i = vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__i;
    vlSelfRef.accel_top__DOT__u_clip__DOT__fv_a = vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__fv_a;
    vlSelfRef.accel_top__DOT__u_clip__DOT__pfesub = vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__pfesub;
    vlSelfRef.accel_top__DOT__u_clip__DOT__part_p = vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__part_p;
    vlSelfRef.accel_top__DOT__u_clip__DOT__cfvsub = vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__cfvsub;
    vlSelfRef.accel_top__DOT__u_clip__DOT__esub = vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__esub;
    vlSelfRef.accel_top__DOT__u_rotate__DOT__vidx = vlSelfRef.__Vdly__accel_top__DOT__u_rotate__DOT__vidx;
    vlSelfRef.accel_top__DOT__desc_base_reg = vlSelfRef.__Vdly__accel_top__DOT__desc_base_reg;
    vlSelfRef.accel_top__DOT__active_stage = vlSelfRef.__Vdly__accel_top__DOT__active_stage;
    vlSelfRef.accel_top__DOT__u_clip__DOT__state = vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__state;
    vlSelfRef.accel_top__DOT__u_clip__DOT__faceA = vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__faceA;
    vlSelfRef.accel_top__DOT__u_clip__DOT__faceB = vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__faceB;
    vlSelfRef.accel_top__DOT__u_clip__DOT__j = vlSelfRef.__Vdly__accel_top__DOT__u_clip__DOT__j;
    vlSelfRef.accel_top__DOT__u_rotate__DOT__vidx2 
        = ((IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__vidx) 
           << 1U);
    vlSelfRef.accel_top__DOT__faces_base = (0x00000fffU 
                                            & ((IData)(vlSelfRef.accel_top__DOT__desc_base_reg) 
                                               + ((IData)(6U) 
                                                  * (IData)(vlSelfRef.accel_top__DOT__desc_vertex_count_reg))));
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
    if (vlSelfRef.rst_ni) {
        if (((IData)(vlSelfRef.accel_top__DOT__io_write) 
             & (0xd9U == (IData)(vlSelfRef.addr)))) {
            vlSelfRef.accel_top__DOT__desc_edge_count_reg 
                = vlSelfRef.data_in;
        }
    } else {
        vlSelfRef.accel_top__DOT__desc_edge_count_reg = 0U;
    }
    vlSelfRef.accel_top__DOT__face_colors_base = (0x00000fffU 
                                                  & (((IData)(vlSelfRef.accel_top__DOT__desc_face_count_reg) 
                                                      << 2U) 
                                                     + (IData)(vlSelfRef.accel_top__DOT__faces_base)));
    vlSelfRef.accel_top__DOT__edges_base = (0x00000fffU 
                                            & ((IData)(vlSelfRef.accel_top__DOT__desc_face_count_reg) 
                                               + (IData)(vlSelfRef.accel_top__DOT__face_colors_base)));
    vlSelfRef.accel_top__DOT__edge_colors_base = (0x00000fffU 
                                                  & (((IData)(vlSelfRef.accel_top__DOT__desc_edge_count_reg) 
                                                      << 2U) 
                                                     + (IData)(vlSelfRef.accel_top__DOT__edges_base)));
}

void Vaccel_top_sincos_rom___nba_sequent__TOP__accel_top__DOT__u_rotate__DOT__sc_pitch__0(Vaccel_top_sincos_rom* vlSelf);
void Vaccel_top_sincos_rom___nba_sequent__TOP__accel_top__DOT__u_rotate__DOT__sc_yaw__0(Vaccel_top_sincos_rom* vlSelf);

void Vaccel_top___024root___eval_nba(Vaccel_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccel_top___024root___eval_nba\n"); );
    Vaccel_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__0
            vlSelfRef.__VdlySet__accel_top__DOT__u_shape_mem__DOT__mem__v0 = 0U;
            vlSelfRef.__VdlySet__accel_top__DOT__u_scratch_mem__DOT__mem__v0 = 0U;
            if (vlSelfRef.shape_load_we) {
                vlSelfRef.__VdlyVal__accel_top__DOT__u_shape_mem__DOT__mem__v0 
                    = vlSelfRef.data_in;
                vlSelfRef.__VdlyDim0__accel_top__DOT__u_shape_mem__DOT__mem__v0 
                    = vlSelfRef.shape_load_addr;
                vlSelfRef.__VdlySet__accel_top__DOT__u_shape_mem__DOT__mem__v0 = 1U;
            }
            if (((1U == (IData)(vlSelfRef.accel_top__DOT__active_stage))
                  ? (IData)(vlSelfRef.accel_top__DOT__rotate_scr_we)
                  : ((2U == (IData)(vlSelfRef.accel_top__DOT__active_stage))
                      ? (IData)(vlSelfRef.accel_top__DOT__cull_scr_we)
                      : ((IData)(vlSelfRef.accel_top__DOT__clip_scr_we) 
                         & (3U == (IData)(vlSelfRef.accel_top__DOT__active_stage)))))) {
                vlSelfRef.__VdlyVal__accel_top__DOT__u_scratch_mem__DOT__mem__v0 
                    = ((1U == (IData)(vlSelfRef.accel_top__DOT__active_stage))
                        ? (IData)(vlSelfRef.accel_top__DOT__rotate_scr_wdata)
                        : ((2U == (IData)(vlSelfRef.accel_top__DOT__active_stage))
                            ? (IData)(vlSelfRef.accel_top__DOT__cull_scr_wdata)
                            : ((IData)(vlSelfRef.accel_top__DOT__clip_scr_wdata) 
                               & (- (IData)((3U == (IData)(vlSelfRef.accel_top__DOT__active_stage)))))));
                vlSelfRef.__VdlyDim0__accel_top__DOT__u_scratch_mem__DOT__mem__v0 
                    = vlSelfRef.accel_top__DOT__scratch_a_addr;
                vlSelfRef.__VdlySet__accel_top__DOT__u_scratch_mem__DOT__mem__v0 = 1U;
            }
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vaccel_top___024root___nba_sequent__TOP__1(vlSelf);
        Vaccel_top_sincos_rom___nba_sequent__TOP__accel_top__DOT__u_rotate__DOT__sc_pitch__0((&vlSymsp->TOP__accel_top__DOT__u_rotate__DOT__sc_pitch));
        Vaccel_top_sincos_rom___nba_sequent__TOP__accel_top__DOT__u_rotate__DOT__sc_yaw__0((&vlSymsp->TOP__accel_top__DOT__u_rotate__DOT__sc_yaw));
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        {
            // Inlined CFunc: _nba_sequent__TOP__2
            vlSelfRef.accel_top__DOT__vecbuf_rdata 
                = vlSelfRef.accel_top__DOT__u_scratch_mem__DOT__mem
                [(0x00000fffU & ((IData)(0x030eU) + (IData)(vlSelfRef.accel_top__DOT__vec_data_idx)))];
            vlSelfRef.accel_top__DOT__scratch_a_rdata 
                = vlSelfRef.accel_top__DOT__u_scratch_mem__DOT__mem
                [vlSelfRef.accel_top__DOT__scratch_a_addr];
            vlSelfRef.accel_top__DOT__shape_mem_rd_data 
                = vlSelfRef.accel_top__DOT__u_shape_mem__DOT__mem
                [(0x00000fffU & ((1U == (IData)(vlSelfRef.accel_top__DOT__active_stage))
                                  ? ((IData)(vlSelfRef.accel_top__DOT__desc_base_reg) 
                                     + (((IData)(6U) 
                                         * (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__vidx)) 
                                        + (IData)(vlSelfRef.accel_top__DOT__u_rotate__DOT__byte_idx)))
                                  : ((2U == (IData)(vlSelfRef.accel_top__DOT__active_stage))
                                      ? ((IData)(vlSelfRef.accel_top__DOT__faces_base) 
                                         + ((IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__vsub) 
                                            + ((IData)(vlSelfRef.accel_top__DOT__u_cull__DOT__f) 
                                               << 2U)))
                                      : ((((6U == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state)) 
                                           | (7U == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state)))
                                           ? ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__colsub)
                                               ? ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__i) 
                                                  + (IData)(vlSelfRef.accel_top__DOT__edge_colors_base))
                                               : (((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__fv_a)
                                                    ? (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__faceA)
                                                    : (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__faceB)) 
                                                  + (IData)(vlSelfRef.accel_top__DOT__face_colors_base)))
                                           : (((0x0dU 
                                                == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state)) 
                                               | (0x0eU 
                                                  == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state)))
                                               ? ((IData)(vlSelfRef.accel_top__DOT__desc_edge_count_reg) 
                                                  + 
                                                  ((0x000000ffU 
                                                    & ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__pfesub)
                                                        ? (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__part_p)
                                                        : 
                                                       ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__part_p) 
                                                        - (IData)(1U)))) 
                                                   + (IData)(vlSelfRef.accel_top__DOT__edge_colors_base)))
                                               : ((
                                                   (0x11U 
                                                    == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state)) 
                                                   | (0x12U 
                                                      == (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__state)))
                                                   ? 
                                                  ((IData)(vlSelfRef.accel_top__DOT__faces_base) 
                                                   + 
                                                   ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__cfvsub) 
                                                    + 
                                                    ((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__j) 
                                                     << 2U)))
                                                   : 
                                                  ((IData)(vlSelfRef.accel_top__DOT__edges_base) 
                                                   + 
                                                   (((IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__i) 
                                                     << 2U) 
                                                    + (IData)(vlSelfRef.accel_top__DOT__u_clip__DOT__esub)))))) 
                                         & (- (IData)(
                                                      (3U 
                                                       == (IData)(vlSelfRef.accel_top__DOT__active_stage))))))))];
            if (vlSelfRef.__VdlySet__accel_top__DOT__u_scratch_mem__DOT__mem__v0) {
                vlSelfRef.accel_top__DOT__u_scratch_mem__DOT__mem[vlSelfRef.__VdlyDim0__accel_top__DOT__u_scratch_mem__DOT__mem__v0] 
                    = vlSelfRef.__VdlyVal__accel_top__DOT__u_scratch_mem__DOT__mem__v0;
            }
            if (vlSelfRef.__VdlySet__accel_top__DOT__u_shape_mem__DOT__mem__v0) {
                vlSelfRef.accel_top__DOT__u_shape_mem__DOT__mem[vlSelfRef.__VdlyDim0__accel_top__DOT__u_shape_mem__DOT__mem__v0] 
                    = vlSelfRef.__VdlyVal__accel_top__DOT__u_shape_mem__DOT__mem__v0;
            }
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vaccel_top___024root___nba_sequent__TOP__3(vlSelf);
    }
}

void Vaccel_top___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccel_top___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vaccel_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vaccel_top___024root___eval_phase__act(Vaccel_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccel_top___024root___eval_phase__act\n"); );
    Vaccel_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((((~ (IData)(vlSelfRef.rst_ni)) 
                                                           & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_ni__1)) 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__1))))));
        vlSelfRef.__Vtrigprevexpr___TOP__clk__1 = vlSelfRef.clk;
        vlSelfRef.__Vtrigprevexpr___TOP__rst_ni__1 
            = vlSelfRef.rst_ni;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vaccel_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vaccel_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vaccel_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccel_top___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vaccel_top___024root___eval_phase__nba(Vaccel_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccel_top___024root___eval_phase__nba\n"); );
    Vaccel_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vaccel_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vaccel_top___024root___eval_nba(vlSelf);
        Vaccel_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vaccel_top___024root___eval(Vaccel_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccel_top___024root___eval\n"); );
    Vaccel_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vaccel_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("src/accel_top.v", 82, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vaccel_top___024root___eval_phase__ico(vlSelf);
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vaccel_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("src/accel_top.v", 82, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vaccel_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("src/accel_top.v", 82, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vaccel_top___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vaccel_top___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vaccel_top___024root___eval_debug_assertions(Vaccel_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vaccel_top___024root___eval_debug_assertions\n"); );
    Vaccel_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_ni & 0xfeU)))) {
        Verilated::overWidthError("rst_ni");
    }
    if (VL_UNLIKELY(((vlSelfRef.iorq_n & 0xfeU)))) {
        Verilated::overWidthError("iorq_n");
    }
    if (VL_UNLIKELY(((vlSelfRef.rd_n & 0xfeU)))) {
        Verilated::overWidthError("rd_n");
    }
    if (VL_UNLIKELY(((vlSelfRef.wr_n & 0xfeU)))) {
        Verilated::overWidthError("wr_n");
    }
}
#endif  // VL_DEBUG
