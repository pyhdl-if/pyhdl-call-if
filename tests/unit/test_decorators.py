import os
import pytest
import sys

tests_unit_dir = os.path.dirname(os.path.abspath(__file__))
proj_src_dir = os.path.abspath(os.path.join(tests_unit_dir, "../../src"))
print("proj_src_dir: %s" % proj_src_dir)
sys.path.insert(0, proj_src_dir)

import hdl_call_if as hci

@pytest.fixture
def decorator_init():
    from hdl_call_if.impl.ctor import Ctor
    from hdl_call_if.impl.api_def_rgy import ApiDefRgy
    print("setup")
    Ctor.init()
    ApiDefRgy.init()
    yield 1
    print("teardown")
    Ctor.init()
    ApiDefRgy.init()

    pass

def test_single_api(decorator_init):
    from hdl_call_if.impl.api_def_rgy import ApiDefRgy

    @hci.api
    class API(object):

        @hci.impfunc
        def callout(self, a, b, c):
            pass

        pass

    rgy = ApiDefRgy.inst()
    apis = rgy.getApis()
    assert len(apis) == 1
    assert apis[0].name == "API"
    assert len(apis[0].methods) == 1


    pass