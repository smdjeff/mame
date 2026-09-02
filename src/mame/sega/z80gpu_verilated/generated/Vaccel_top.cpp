// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vaccel_top__pch.h"

//============================================================
// Constructors

Vaccel_top::Vaccel_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vaccel_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , addr{vlSymsp->TOP.addr}
    , iorq_n{vlSymsp->TOP.iorq_n}
    , rd_n{vlSymsp->TOP.rd_n}
    , wr_n{vlSymsp->TOP.wr_n}
    , data_in{vlSymsp->TOP.data_in}
    , data_out{vlSymsp->TOP.data_out}
    , sel{vlSymsp->TOP.sel}
    , shape_load_data{vlSymsp->TOP.shape_load_data}
    , shape_load_we{vlSymsp->TOP.shape_load_we}
    , shape_load_addr{vlSymsp->TOP.shape_load_addr}
    , __PVT__accel_top__DOT__u_rotate__DOT__sc_yaw{vlSymsp->TOP.__PVT__accel_top__DOT__u_rotate__DOT__sc_yaw}
    , __PVT__accel_top__DOT__u_rotate__DOT__sc_pitch{vlSymsp->TOP.__PVT__accel_top__DOT__u_rotate__DOT__sc_pitch}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vaccel_top::Vaccel_top(const char* _vcname__)
    : Vaccel_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vaccel_top::~Vaccel_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vaccel_top___024root___eval_debug_assertions(Vaccel_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vaccel_top___024root___eval_static(Vaccel_top___024root* vlSelf);
void Vaccel_top___024root___eval_initial(Vaccel_top___024root* vlSelf);
void Vaccel_top___024root___eval_settle(Vaccel_top___024root* vlSelf);
void Vaccel_top___024root___eval(Vaccel_top___024root* vlSelf);

void Vaccel_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vaccel_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vaccel_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vaccel_top___024root___eval_static(&(vlSymsp->TOP));
        Vaccel_top___024root___eval_initial(&(vlSymsp->TOP));
        Vaccel_top___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vaccel_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vaccel_top::eventsPending() { return false; }

uint64_t Vaccel_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vaccel_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vaccel_top___024root___eval_final(Vaccel_top___024root* vlSelf);

VL_ATTR_COLD void Vaccel_top::final() {
    contextp()->executingFinal(true);
    Vaccel_top___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vaccel_top::hierName() const { return vlSymsp->name(); }
const char* Vaccel_top::modelName() const { return "Vaccel_top"; }
unsigned Vaccel_top::threads() const { return 1; }
void Vaccel_top::prepareClone() const { contextp()->prepareClone(); }
void Vaccel_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
