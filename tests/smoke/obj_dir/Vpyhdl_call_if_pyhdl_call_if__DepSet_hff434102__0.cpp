// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpyhdl_call_if.h for the primary calling header

#include "Vpyhdl_call_if__pch.h"
#include "Vpyhdl_call_if__Syms.h"
#include "Vpyhdl_call_if_pyhdl_call_if.h"

extern "C" void Py_Initialize();

VL_INLINE_OPT void Vpyhdl_call_if_pyhdl_call_if____Vdpiimwrap_Py_Initialize_TOP__pyhdl_call_if(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpyhdl_call_if_pyhdl_call_if____Vdpiimwrap_Py_Initialize_TOP__pyhdl_call_if\n"); );
    // Body
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    Py_Initialize();
}

extern "C" void* PyImport_ImportModule(const char* name);

VL_INLINE_OPT void Vpyhdl_call_if_pyhdl_call_if____Vdpiimwrap_PyImport_ImportModule_TOP__pyhdl_call_if(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, std::string name, QData/*63:0*/ &PyImport_ImportModule__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpyhdl_call_if_pyhdl_call_if____Vdpiimwrap_PyImport_ImportModule_TOP__pyhdl_call_if\n"); );
    // Body
    const char* name__Vcvt;
    for (size_t name__Vidx = 0; name__Vidx < 1; ++name__Vidx) name__Vcvt = name.c_str();
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    void* PyImport_ImportModule__Vfuncrtn__Vcvt;
    PyImport_ImportModule__Vfuncrtn__Vcvt = PyImport_ImportModule(name__Vcvt);
    PyImport_ImportModule__Vfuncrtn = VL_CVT_VP_Q(PyImport_ImportModule__Vfuncrtn__Vcvt);
}

extern "C" void* PyObject_Call(void* target, void* args, void* kwargs);

VL_INLINE_OPT void Vpyhdl_call_if_pyhdl_call_if____Vdpiimwrap_PyObject_Call_TOP__pyhdl_call_if(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, QData/*63:0*/ target, QData/*63:0*/ args, QData/*63:0*/ kwargs, QData/*63:0*/ &PyObject_Call__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpyhdl_call_if_pyhdl_call_if____Vdpiimwrap_PyObject_Call_TOP__pyhdl_call_if\n"); );
    // Body
    void* target__Vcvt;
    for (size_t target__Vidx = 0; target__Vidx < 1; ++target__Vidx) target__Vcvt = VL_CVT_Q_VP(target);
    void* args__Vcvt;
    for (size_t args__Vidx = 0; args__Vidx < 1; ++args__Vidx) args__Vcvt = VL_CVT_Q_VP(args);
    void* kwargs__Vcvt;
    for (size_t kwargs__Vidx = 0; kwargs__Vidx < 1; ++kwargs__Vidx) kwargs__Vcvt = VL_CVT_Q_VP(kwargs);
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    void* PyObject_Call__Vfuncrtn__Vcvt;
    PyObject_Call__Vfuncrtn__Vcvt = PyObject_Call(target__Vcvt, args__Vcvt, kwargs__Vcvt);
    PyObject_Call__Vfuncrtn = VL_CVT_VP_Q(PyObject_Call__Vfuncrtn__Vcvt);
}

extern "C" void* PyObject_GetAttrString(void* base, const char* attr);

VL_INLINE_OPT void Vpyhdl_call_if_pyhdl_call_if____Vdpiimwrap_PyObject_GetAttrString_TOP__pyhdl_call_if(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, QData/*63:0*/ base, std::string attr, QData/*63:0*/ &PyObject_GetAttrString__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpyhdl_call_if_pyhdl_call_if____Vdpiimwrap_PyObject_GetAttrString_TOP__pyhdl_call_if\n"); );
    // Body
    void* base__Vcvt;
    for (size_t base__Vidx = 0; base__Vidx < 1; ++base__Vidx) base__Vcvt = VL_CVT_Q_VP(base);
    const char* attr__Vcvt;
    for (size_t attr__Vidx = 0; attr__Vidx < 1; ++attr__Vidx) attr__Vcvt = attr.c_str();
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    void* PyObject_GetAttrString__Vfuncrtn__Vcvt;
    PyObject_GetAttrString__Vfuncrtn__Vcvt = PyObject_GetAttrString(base__Vcvt, attr__Vcvt);
    PyObject_GetAttrString__Vfuncrtn = VL_CVT_VP_Q(PyObject_GetAttrString__Vfuncrtn__Vcvt);
}

extern "C" void* PyTuple_New(unsigned int sz);

VL_INLINE_OPT void Vpyhdl_call_if_pyhdl_call_if____Vdpiimwrap_PyTuple_New_TOP__pyhdl_call_if(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, IData/*31:0*/ sz, QData/*63:0*/ &PyTuple_New__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpyhdl_call_if_pyhdl_call_if____Vdpiimwrap_PyTuple_New_TOP__pyhdl_call_if\n"); );
    // Body
    unsigned int sz__Vcvt;
    for (size_t sz__Vidx = 0; sz__Vidx < 1; ++sz__Vidx) sz__Vcvt = sz;
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    void* PyTuple_New__Vfuncrtn__Vcvt;
    PyTuple_New__Vfuncrtn__Vcvt = PyTuple_New(sz__Vcvt);
    PyTuple_New__Vfuncrtn = VL_CVT_VP_Q(PyTuple_New__Vfuncrtn__Vcvt);
}

extern "C" int PyTuple_SetItem(void* t, unsigned int pos, void* i);

VL_INLINE_OPT void Vpyhdl_call_if_pyhdl_call_if____Vdpiimwrap_PyTuple_SetItem_TOP__pyhdl_call_if(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, QData/*63:0*/ t, IData/*31:0*/ pos, QData/*63:0*/ i, IData/*31:0*/ &PyTuple_SetItem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpyhdl_call_if_pyhdl_call_if____Vdpiimwrap_PyTuple_SetItem_TOP__pyhdl_call_if\n"); );
    // Body
    void* t__Vcvt;
    for (size_t t__Vidx = 0; t__Vidx < 1; ++t__Vidx) t__Vcvt = VL_CVT_Q_VP(t);
    unsigned int pos__Vcvt;
    for (size_t pos__Vidx = 0; pos__Vidx < 1; ++pos__Vidx) pos__Vcvt = pos;
    void* i__Vcvt;
    for (size_t i__Vidx = 0; i__Vidx < 1; ++i__Vidx) i__Vcvt = VL_CVT_Q_VP(i);
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    int PyTuple_SetItem__Vfuncrtn__Vcvt;
    PyTuple_SetItem__Vfuncrtn__Vcvt = PyTuple_SetItem(t__Vcvt, pos__Vcvt, i__Vcvt);
    PyTuple_SetItem__Vfuncrtn = PyTuple_SetItem__Vfuncrtn__Vcvt;
}

extern "C" void* PyLong_FromUnsignedLongLong(unsigned long long val);

VL_INLINE_OPT void Vpyhdl_call_if_pyhdl_call_if____Vdpiimwrap_PyLong_FromUnsignedLongLong_TOP__pyhdl_call_if(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, QData/*63:0*/ val, QData/*63:0*/ &PyLong_FromUnsignedLongLong__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpyhdl_call_if_pyhdl_call_if____Vdpiimwrap_PyLong_FromUnsignedLongLong_TOP__pyhdl_call_if\n"); );
    // Body
    unsigned long long val__Vcvt;
    for (size_t val__Vidx = 0; val__Vidx < 1; ++val__Vidx) val__Vcvt = val;
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    void* PyLong_FromUnsignedLongLong__Vfuncrtn__Vcvt;
    PyLong_FromUnsignedLongLong__Vfuncrtn__Vcvt = PyLong_FromUnsignedLongLong(val__Vcvt);
    PyLong_FromUnsignedLongLong__Vfuncrtn = VL_CVT_VP_Q(PyLong_FromUnsignedLongLong__Vfuncrtn__Vcvt);
}

extern "C" unsigned long long PyLong_AsUnsignedLongLong(void* val);

VL_INLINE_OPT void Vpyhdl_call_if_pyhdl_call_if____Vdpiimwrap_PyLong_AsUnsignedLongLong_TOP__pyhdl_call_if(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, QData/*63:0*/ val, QData/*63:0*/ &PyLong_AsUnsignedLongLong__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpyhdl_call_if_pyhdl_call_if____Vdpiimwrap_PyLong_AsUnsignedLongLong_TOP__pyhdl_call_if\n"); );
    // Body
    void* val__Vcvt;
    for (size_t val__Vidx = 0; val__Vidx < 1; ++val__Vidx) val__Vcvt = VL_CVT_Q_VP(val);
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    unsigned long long PyLong_AsUnsignedLongLong__Vfuncrtn__Vcvt;
    PyLong_AsUnsignedLongLong__Vfuncrtn__Vcvt = PyLong_AsUnsignedLongLong(val__Vcvt);
    PyLong_AsUnsignedLongLong__Vfuncrtn = PyLong_AsUnsignedLongLong__Vfuncrtn__Vcvt;
}
