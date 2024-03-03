// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
// Verilator compiles this file in when DPI functions are used.
// If you have multiple Verilated designs with the same DPI exported
// function names, you will get multiple definition link errors from here.
// This is an unfortunate result of the DPI specification.
// To solve this, either
//    1. Call Vpyhdl_call_if::{export_function} instead,
//       and do not even bother to compile this file
// or 2. Compile all __Dpi.cpp files in the same compiler run,
//       and #ifdefs already inserted here will sort everything out.

#include "Vpyhdl_call_if__Dpi.h"
#include "Vpyhdl_call_if.h"

#ifndef VL_DPIDECL_pyhdl_queue_runnable_
#define VL_DPIDECL_pyhdl_queue_runnable_
void pyhdl_queue_runnable(void* obj) {
    // DPI export at ../../src/hdl_call_if/share/sv/pyhdl_call_if.sv:74:29
    return Vpyhdl_call_if::pyhdl_queue_runnable(obj);
}
#endif

