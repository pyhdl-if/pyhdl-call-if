import os
import pytest
import pytest_fv as ptv
from pytest_fv.fixtures import *


def test_smoke(dirconfig):
    dpi_tests_dir = os.path.dirname(os.path.abspath(__file__))
    dpi_data_dir = os.path.join(dpi_tests_dir, "data")
    proj_dir = os.path.abspath(os.path.join(dpi_tests_dir, "../../.."))

    flow = ptv.FlowSim(dirconfig, "mti")
    flow.addFileset("sim", ptv.FSVlnv("pyhdl-if::call"))
    flow.addFileset("sim", ptv.FSPaths([
        os.path.join(dpi_data_dir, "smoke.sv")
    ], "systemVerilogSource"))
    flow.sim.top.add("smoke")

    args = flow.sim.mkRunArgs(dirconfig.rundir())
    flow.addTaskToPhase("run.main", flow.sim.mkRunTask(args))

    flow.run_all()
