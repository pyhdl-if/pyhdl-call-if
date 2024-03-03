// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpyhdl_call_if__pch.h"

//============================================================
// Constructors

Vpyhdl_call_if::Vpyhdl_call_if(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vpyhdl_call_if__Syms(contextp(), _vcname__, this)}
    , __PVT__pyhdl_call_if{vlSymsp->TOP.__PVT__pyhdl_call_if}
    , __PVT__std{vlSymsp->TOP.__PVT__std}
    , pyhdl_call_if__03a__03aPyObjectW__Vclpkg{vlSymsp->TOP.pyhdl_call_if__03a__03aPyObjectW__Vclpkg}
    , std__03a__03asemaphore__Vclpkg{vlSymsp->TOP.std__03a__03asemaphore__Vclpkg}
    , std__03a__03aprocess__Vclpkg{vlSymsp->TOP.std__03a__03aprocess__Vclpkg}
    , std__03a__03amailbox__Tz1__Vclpkg{vlSymsp->TOP.std__03a__03amailbox__Tz1__Vclpkg}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vpyhdl_call_if::Vpyhdl_call_if(const char* _vcname__)
    : Vpyhdl_call_if(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vpyhdl_call_if::~Vpyhdl_call_if() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vpyhdl_call_if___024root___eval_debug_assertions(Vpyhdl_call_if___024root* vlSelf);
#endif  // VL_DEBUG
void Vpyhdl_call_if___024root___eval_static(Vpyhdl_call_if___024root* vlSelf);
void Vpyhdl_call_if___024root___eval_initial(Vpyhdl_call_if___024root* vlSelf);
void Vpyhdl_call_if___024root___eval_settle(Vpyhdl_call_if___024root* vlSelf);
void Vpyhdl_call_if___024root___eval(Vpyhdl_call_if___024root* vlSelf);

void Vpyhdl_call_if::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpyhdl_call_if::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vpyhdl_call_if___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vpyhdl_call_if___024root___eval_static(&(vlSymsp->TOP));
        Vpyhdl_call_if___024root___eval_initial(&(vlSymsp->TOP));
        Vpyhdl_call_if___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vpyhdl_call_if___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vpyhdl_call_if::eventsPending() { return false; }

uint64_t Vpyhdl_call_if::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vpyhdl_call_if::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vpyhdl_call_if___024root___eval_final(Vpyhdl_call_if___024root* vlSelf);

VL_ATTR_COLD void Vpyhdl_call_if::final() {
    Vpyhdl_call_if___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vpyhdl_call_if::hierName() const { return vlSymsp->name(); }
const char* Vpyhdl_call_if::modelName() const { return "Vpyhdl_call_if"; }
unsigned Vpyhdl_call_if::threads() const { return 1; }
void Vpyhdl_call_if::prepareClone() const { contextp()->prepareClone(); }
void Vpyhdl_call_if::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vpyhdl_call_if::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vpyhdl_call_if::trace()' called on model that was Verilated without --trace option");
}
