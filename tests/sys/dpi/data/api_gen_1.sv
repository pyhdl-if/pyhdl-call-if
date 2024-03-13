
package api_pkg;
    import pyhdl_dpi_if::*;
    import pyhdl_call_if::*;

    `include "api_gen_1.svh"

endpackage

module api_gen_1;
    import api_pkg::*;

    initial begin
        automatic MyC c = new();
    end

endmodule
