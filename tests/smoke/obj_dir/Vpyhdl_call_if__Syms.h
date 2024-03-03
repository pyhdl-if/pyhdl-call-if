// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VPYHDL_CALL_IF__SYMS_H_
#define VERILATED_VPYHDL_CALL_IF__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vpyhdl_call_if.h"

// INCLUDE MODULE CLASSES
#include "Vpyhdl_call_if___024root.h"
#include "Vpyhdl_call_if_pyhdl_call_if.h"
#include "Vpyhdl_call_if___024unit.h"
#include "Vpyhdl_call_if_std.h"
#include "Vpyhdl_call_if_pyhdl_call_if__03a__03aPyObjectW__Vclpkg.h"
#include "Vpyhdl_call_if_std__03a__03asemaphore__Vclpkg.h"
#include "Vpyhdl_call_if_std__03a__03aprocess__Vclpkg.h"
#include "Vpyhdl_call_if_std__03a__03amailbox__Tz1__Vclpkg.h"

// DPI TYPES for DPI Export callbacks (Internal use)
using Vpyhdl_call_if__Vcb_pyhdl_queue_runnable_t = void (*) (Vpyhdl_call_if__Syms* __restrict vlSymsp, QData/*63:0*/ obj);

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vpyhdl_call_if__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vpyhdl_call_if* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vpyhdl_call_if___024root       TOP;
    Vpyhdl_call_if_pyhdl_call_if   TOP__pyhdl_call_if;
    Vpyhdl_call_if_std             TOP__std;
    Vpyhdl_call_if_pyhdl_call_if__03a__03aPyObjectW__Vclpkg TOP__pyhdl_call_if__03a__03aPyObjectW__Vclpkg;
    Vpyhdl_call_if_std__03a__03amailbox__Tz1__Vclpkg TOP__std__03a__03amailbox__Tz1__Vclpkg;
    Vpyhdl_call_if_std__03a__03aprocess__Vclpkg TOP__std__03a__03aprocess__Vclpkg;
    Vpyhdl_call_if_std__03a__03asemaphore__Vclpkg TOP__std__03a__03asemaphore__Vclpkg;

    // SCOPE NAMES
    VerilatedScope __Vscope_pyhdl_call_if;
    VerilatedScope __Vscope_pyhdl_call_if__unnamedblk1;
    VerilatedScope __Vscope_pyhdl_call_if__unnamedblk2_1;
    VerilatedScope __Vscope_std__process;
    VerilatedScope __Vscope_std__process__suspend;
    VerilatedScope __Vscope_top;
    VerilatedScope __Vscope_top__unnamedblk1;

    // CONSTRUCTORS
    Vpyhdl_call_if__Syms(VerilatedContext* contextp, const char* namep, Vpyhdl_call_if* modelp);
    ~Vpyhdl_call_if__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
