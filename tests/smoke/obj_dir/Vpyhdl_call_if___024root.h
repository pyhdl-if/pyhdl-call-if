// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpyhdl_call_if.h for the primary calling header

#ifndef VERILATED_VPYHDL_CALL_IF___024ROOT_H_
#define VERILATED_VPYHDL_CALL_IF___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vpyhdl_call_if_pyhdl_call_if;
class Vpyhdl_call_if_pyhdl_call_if__03a__03aPyObjectW__Vclpkg;
class Vpyhdl_call_if_std;
class Vpyhdl_call_if_std__03a__03amailbox__Tz1__Vclpkg;
class Vpyhdl_call_if_std__03a__03aprocess__Vclpkg;
class Vpyhdl_call_if_std__03a__03asemaphore__Vclpkg;


class Vpyhdl_call_if__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpyhdl_call_if___024root final : public VerilatedModule {
  public:
    // CELLS
    Vpyhdl_call_if_pyhdl_call_if* __PVT__pyhdl_call_if;
    Vpyhdl_call_if_std* __PVT__std;
    Vpyhdl_call_if_pyhdl_call_if__03a__03aPyObjectW__Vclpkg* pyhdl_call_if__03a__03aPyObjectW__Vclpkg;
    Vpyhdl_call_if_std__03a__03asemaphore__Vclpkg* std__03a__03asemaphore__Vclpkg;
    Vpyhdl_call_if_std__03a__03aprocess__Vclpkg* std__03a__03aprocess__Vclpkg;
    Vpyhdl_call_if_std__03a__03amailbox__Tz1__Vclpkg* std__03a__03amailbox__Tz1__Vclpkg;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    QData/*63:0*/ top__DOT__unnamedblk1__DOT__my_method;
    VlDynamicTriggerScheduler __VdynSched;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vpyhdl_call_if__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpyhdl_call_if___024root(Vpyhdl_call_if__Syms* symsp, const char* v__name);
    ~Vpyhdl_call_if___024root();
    VL_UNCOPYABLE(Vpyhdl_call_if___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
