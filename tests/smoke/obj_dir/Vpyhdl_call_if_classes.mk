# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vpyhdl_call_if.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vpyhdl_call_if \
	Vpyhdl_call_if__Dpi_Export__0 \
	Vpyhdl_call_if___024root__DepSet_hf817847c__0 \
	Vpyhdl_call_if___024root__DepSet_he7dfd7fa__0 \
	Vpyhdl_call_if_pyhdl_call_if__DepSet_hff434102__0 \
	Vpyhdl_call_if_pyhdl_call_if__DepSet_h2cbfe29f__0 \
	Vpyhdl_call_if_pyhdl_call_if__03a__03aPyObjectW__Vclpkg__DepSet_h188ab5c9__0 \
	Vpyhdl_call_if_pyhdl_call_if__03a__03aPyObjectW__Vclpkg__DepSet_h4874c987__0 \
	Vpyhdl_call_if_std__03a__03asemaphore__Vclpkg__DepSet_hb760db28__0 \
	Vpyhdl_call_if_std__03a__03asemaphore__Vclpkg__DepSet_hb10a9f26__0 \
	Vpyhdl_call_if_std__03a__03aprocess__Vclpkg__DepSet_h996de642__0 \
	Vpyhdl_call_if_std__03a__03aprocess__Vclpkg__DepSet_hc7157a10__0 \
	Vpyhdl_call_if_std__03a__03amailbox__Tz1__Vclpkg__DepSet_ha593ce9f__0 \
	Vpyhdl_call_if_std__03a__03amailbox__Tz1__Vclpkg__DepSet_hc35b92dd__0 \
	Vpyhdl_call_if__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vpyhdl_call_if___024root__Slow \
	Vpyhdl_call_if___024root__DepSet_hf817847c__0__Slow \
	Vpyhdl_call_if___024root__DepSet_he7dfd7fa__0__Slow \
	Vpyhdl_call_if_pyhdl_call_if__Slow \
	Vpyhdl_call_if_pyhdl_call_if__DepSet_h2cbfe29f__0__Slow \
	Vpyhdl_call_if_pyhdl_call_if__DepSet_he92c1550__0__Slow \
	Vpyhdl_call_if___024unit__Slow \
	Vpyhdl_call_if___024unit__DepSet_h1b2ef030__0__Slow \
	Vpyhdl_call_if_std__Slow \
	Vpyhdl_call_if_std__DepSet_h909f023a__0__Slow \
	Vpyhdl_call_if_pyhdl_call_if__03a__03aPyObjectW__Vclpkg__Slow \
	Vpyhdl_call_if_pyhdl_call_if__03a__03aPyObjectW__Vclpkg__DepSet_h4874c987__0__Slow \
	Vpyhdl_call_if_std__03a__03asemaphore__Vclpkg__Slow \
	Vpyhdl_call_if_std__03a__03asemaphore__Vclpkg__DepSet_hb10a9f26__0__Slow \
	Vpyhdl_call_if_std__03a__03aprocess__Vclpkg__Slow \
	Vpyhdl_call_if_std__03a__03aprocess__Vclpkg__DepSet_hc7157a10__0__Slow \
	Vpyhdl_call_if_std__03a__03amailbox__Tz1__Vclpkg__Slow \
	Vpyhdl_call_if_std__03a__03amailbox__Tz1__Vclpkg__DepSet_hc35b92dd__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vpyhdl_call_if__Dpi \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vpyhdl_call_if__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
