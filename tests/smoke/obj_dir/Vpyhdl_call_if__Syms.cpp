// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vpyhdl_call_if__pch.h"
#include "Vpyhdl_call_if.h"
#include "Vpyhdl_call_if___024root.h"
#include "Vpyhdl_call_if_pyhdl_call_if.h"
#include "Vpyhdl_call_if___024unit.h"
#include "Vpyhdl_call_if_std.h"
#include "Vpyhdl_call_if_pyhdl_call_if__03a__03aPyObjectW__Vclpkg.h"
#include "Vpyhdl_call_if_std__03a__03asemaphore__Vclpkg.h"
#include "Vpyhdl_call_if_std__03a__03aprocess__Vclpkg.h"
#include "Vpyhdl_call_if_std__03a__03amailbox__Tz1__Vclpkg.h"

void Vpyhdl_call_if_pyhdl_call_if____Vdpiexp_pyhdl_queue_runnable_TOP__pyhdl_call_if(Vpyhdl_call_if__Syms* __restrict vlSymsp, QData/*63:0*/ obj);

// FUNCTIONS
Vpyhdl_call_if__Syms::~Vpyhdl_call_if__Syms()
{
}

Vpyhdl_call_if__Syms::Vpyhdl_call_if__Syms(VerilatedContext* contextp, const char* namep, Vpyhdl_call_if* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__pyhdl_call_if{this, Verilated::catName(namep, "pyhdl_call_if")}
    , TOP__std{this, Verilated::catName(namep, "std")}
    , TOP__pyhdl_call_if__03a__03aPyObjectW__Vclpkg{this, Verilated::catName(namep, "pyhdl_call_if::PyObjectW__Vclpkg")}
    , TOP__std__03a__03amailbox__Tz1__Vclpkg{this, Verilated::catName(namep, "std::mailbox__Tz1__Vclpkg")}
    , TOP__std__03a__03aprocess__Vclpkg{this, Verilated::catName(namep, "std::process__Vclpkg")}
    , TOP__std__03a__03asemaphore__Vclpkg{this, Verilated::catName(namep, "std::semaphore__Vclpkg")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__pyhdl_call_if = &TOP__pyhdl_call_if;
    TOP.__PVT__std = &TOP__std;
    TOP.pyhdl_call_if__03a__03aPyObjectW__Vclpkg = &TOP__pyhdl_call_if__03a__03aPyObjectW__Vclpkg;
    TOP.std__03a__03amailbox__Tz1__Vclpkg = &TOP__std__03a__03amailbox__Tz1__Vclpkg;
    TOP.std__03a__03aprocess__Vclpkg = &TOP__std__03a__03aprocess__Vclpkg;
    TOP.std__03a__03asemaphore__Vclpkg = &TOP__std__03a__03asemaphore__Vclpkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__pyhdl_call_if.__Vconfigure(true);
    TOP__std.__Vconfigure(true);
    TOP__pyhdl_call_if__03a__03aPyObjectW__Vclpkg.__Vconfigure(true);
    TOP__std__03a__03amailbox__Tz1__Vclpkg.__Vconfigure(true);
    TOP__std__03a__03aprocess__Vclpkg.__Vconfigure(true);
    TOP__std__03a__03asemaphore__Vclpkg.__Vconfigure(true);
    // Setup scopes
    __Vscope_pyhdl_call_if.configure(this, name(), "pyhdl_call_if", "pyhdl_call_if", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_pyhdl_call_if__unnamedblk1.configure(this, name(), "pyhdl_call_if.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_pyhdl_call_if__unnamedblk2_1.configure(this, name(), "pyhdl_call_if.unnamedblk2_1", "unnamedblk2_1", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_std__process.configure(this, name(), "std.process", "process", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_std__process__suspend.configure(this, name(), "std.process.suspend", "suspend", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top.configure(this, name(), "top", "top", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top__unnamedblk1.configure(this, name(), "top.unnamedblk1", "unnamedblk1", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_pyhdl_call_if.exportInsert(__Vfinal, "pyhdl_queue_runnable", (void*)(&Vpyhdl_call_if_pyhdl_call_if____Vdpiexp_pyhdl_queue_runnable_TOP__pyhdl_call_if));
    }
}
