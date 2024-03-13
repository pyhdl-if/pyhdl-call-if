import os
import pytest
import sys
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

def test_api_gen_1(dirconfig):
    from ivpm import PkgInfoRgy
    dpi_tests_dir = os.path.dirname(os.path.abspath(__file__))
    dpi_data_dir = os.path.join(dpi_tests_dir, "data")
    proj_dir = os.path.abspath(os.path.join(dpi_tests_dir, "../../.."))


    flow = ptv.FlowSim(dirconfig, "mti")

    flow.addTaskToPhase("build.pre", ptv.TaskCmd(
        name="Generate Class API",
        cmd=[sys.executable, '-m', 'hdl_call_if', 'gen-sv',
             '-m', 'api_gen_1', 
             '-o', os.path.join(dirconfig.builddir(), "api_gen_1.svh")],
        env=[ptv.EnvAction.prepend_path("PYTHONPATH", 
                                        os.path.join(proj_dir, "src"), 
                                        dpi_data_dir),
            ]
    ))

    flow.addFileset("sim", ptv.FSVlnv("pyhdl-if::call"))
    flow.addFileset("sim", ptv.FSPaths([
        os.path.join(dpi_data_dir, "api_gen_1.sv")
    ], "systemVerilogSource"))
    flow.sim.addIncdir(dirconfig.builddir())
    flow.sim.top.add("api_gen_1")

    pi_if_pkg = PkgInfoRgy.inst().getPkg("pyhdl-pi-if")
    flow.sim.dpi_libs.extend(PkgInfoRgy.inst().getLibs("dpi"))
    flow.sim.addLibDirs(PkgInfoRgy.inst().getLibDirs("dpi"))
    flow.sim.append_pathenv("PYTHONPATH", os.path.join(proj_dir, "src"))


    args = flow.sim.mkRunArgs(dirconfig.rundir())
    args.append_pathenv("PYTHONPATH", dpi_data_dir)
    flow.addTaskToPhase("run.main", flow.sim.mkRunTask(args))

    flow.run_all()