#include "./obj_dir/Vshiftregister.h"
#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <emscripten.h>

#define MAX_SIM_TIME 20
vluint64_t sim_time = 0;
Vshiftregister* dut;

extern "C" {

void EMSCRIPTEN_KEEPALIVE initialize_verilog() {
	dut = new Vshiftregister;
}

int EMSCRIPTEN_KEEPALIVE update_verilog(int clk, int shift, int din, int rst){
	dut->i_clk = clk;
	dut->i_shift = shift;
	dut->i_din = din;
	dut->i_nrst = !rst;
    dut->eval();
	return dut->o_dout;
}

void EMSCRIPTEN_KEEPALIVE destroy_verilog(){
	delete dut;
}

}