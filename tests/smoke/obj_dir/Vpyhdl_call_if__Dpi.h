// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VPYHDL_CALL_IF__DPI_H_
#define VERILATED_VPYHDL_CALL_IF__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at ../../src/hdl_call_if/share/sv/pyhdl_call_if.sv:74:29
    extern void pyhdl_queue_runnable(void* obj);

    // DPI IMPORTS
    // DPI import at ../../src/hdl_call_if/share/sv/pyhdl_call_if_dpi.svh:25:42
    extern void* PyImport_ImportModule(const char* name);
    // DPI import at ../../src/hdl_call_if/share/sv/pyhdl_call_if_dpi.svh:31:50
    extern unsigned long long PyLong_AsUnsignedLongLong(void* val);
    // DPI import at ../../src/hdl_call_if/share/sv/pyhdl_call_if_dpi.svh:30:42
    extern void* PyLong_FromUnsignedLongLong(unsigned long long val);
    // DPI import at ../../src/hdl_call_if/share/sv/pyhdl_call_if_dpi.svh:26:42
    extern void* PyObject_Call(void* target, void* args, void* kwargs);
    // DPI import at ../../src/hdl_call_if/share/sv/pyhdl_call_if_dpi.svh:27:42
    extern void* PyObject_GetAttrString(void* base, const char* attr);
    // DPI import at ../../src/hdl_call_if/share/sv/pyhdl_call_if_dpi.svh:28:42
    extern void* PyTuple_New(unsigned int sz);
    // DPI import at ../../src/hdl_call_if/share/sv/pyhdl_call_if_dpi.svh:29:37
    extern int PyTuple_SetItem(void* t, unsigned int pos, void* i);
    // DPI import at ../../src/hdl_call_if/share/sv/pyhdl_call_if_dpi.svh:24:38
    extern void Py_Initialize();

#ifdef __cplusplus
}
#endif

#endif  // guard
