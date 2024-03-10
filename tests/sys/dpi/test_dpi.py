import os
import pytest
import pytest_fv as ptv
from pytest_fv.fixtures import *


def test_smoke(dirconfig):
    from ivpm import PkgInfoRgy
    dpi_tests_dir = os.path.dirname(os.path.abspath(__file__))
    dpi_data_dir = os.path.join(dpi_tests_dir, "data")
    proj_dir = os.path.abspath(os.path.join(dpi_tests_dir, "../../.."))

    flow = ptv.FlowSim(dirconfig, "mti")
    flow.addFileset("sim", ptv.FSVlnv("pyhdl-if::call"))
    flow.addFileset("sim", ptv.FSPaths([
        os.path.join(dpi_data_dir, "smoke.sv")
    ], "systemVerilogSource"))
    flow.sim.top.add("smoke")

    pi_if_pkg = PkgInfoRgy.inst().getPkg("pyhdl-pi-if")
    flow.sim.dpi_libs.extend(PkgInfoRgy.inst().getLibs("dpi"))
    flow.sim.addLibDirs(PkgInfoRgy.inst().getLibDirs("dpi"))
    flow.sim.append_pathenv("PYTHONPATH", os.path.join(proj_dir, "src"))


    args = flow.sim.mkRunArgs(dirconfig.rundir())
    args.append_pathenv("PYTHONPATH", dpi_data_dir)
    flow.addTaskToPhase("run.main", flow.sim.mkRunTask(args))

    flow.run_all()

def test_async_call(dirconfig):
    from ivpm import PkgInfoRgy
    dpi_tests_dir = os.path.dirname(os.path.abspath(__file__))
    dpi_data_dir = os.path.join(dpi_tests_dir, "data")
    proj_dir = os.path.abspath(os.path.join(dpi_tests_dir, "../../.."))

    flow = ptv.FlowSim(dirconfig, "mti")
    flow.addFileset("sim", ptv.FSVlnv("pyhdl-if::call"))
    flow.addFileset("sim", ptv.FSPaths([
        os.path.join(dpi_data_dir, "async_call.sv")
    ], "systemVerilogSource"))
    flow.sim.top.add("async_call")

    pi_if_pkg = PkgInfoRgy.inst().getPkg("pyhdl-pi-if")
    flow.sim.dpi_libs.extend(PkgInfoRgy.inst().getLibs("dpi"))
    flow.sim.addLibDirs(PkgInfoRgy.inst().getLibDirs("dpi"))
    flow.sim.append_pathenv("PYTHONPATH", os.path.join(proj_dir, "src"))


    args = flow.sim.mkRunArgs(dirconfig.rundir())
    args.append_pathenv("PYTHONPATH", dpi_data_dir)
    flow.addTaskToPhase("run.main", flow.sim.mkRunTask(args))

    flow.run_all()
