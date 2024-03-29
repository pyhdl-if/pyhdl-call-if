
from .impl.context import Context
from .impl.hdl_call_endpoint_dpi import HdlCallEndpointDPI
from .decorators import *

def __sv_init(scope):
    ep = None
    try:
        print("__sv_init: %d" % scope, flush=True)
        ctxt = Context.inst()

        ep = HdlCallEndpointDPI(scope)
        ctxt.addEndpoint(ep)
    except Exception as e:
        print("Exception: %s" % str(e), flush=True)

    return ep


