#include "Vf1_fsm.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp" // include vbuddy code

#define MAX_SIM_CYC 1000000

int main(int argc, char **argv, char **env) {
    int simcyc;      // simulation cycle count
    int tick;   // each clock cycle has two ticks for two edges

    Verilated::commandArgs(argc, argv);
    // init top verilog instance
    Vf1_fsm* top = new Vf1_fsm;
    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("f1_fsm.vcd");

    // init Vbuddy
    if (vbdOpen()!=1) return(-1);
    vbdHeader("L3T2: F1_FSM");

    // initialise simulation inputs
    top->clk = 1;
    top->rst = 1;
    top->en = 0;

    // run simulation for many clock cycles
    for (simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {

        // dump variables into VCD file and toggle clock
        for (tick=0; tick<2; tick++) {
            tfp->dump (2*simcyc+tick);
            top->clk = !top->clk;
            top->eval ();
        }

        vbdSetMode(1); // step through the random sequence each time the switch is pressed
        top->rst = 0; // start updating next_state
        top->en = vbdFlag(); // change en with rotary encoder switch
        vbdHex(1, top->out & 0xF); // show first 4 (LS) bits of 8 bit output as the first digit
        vbdHex(2, (top->out >> 4) & 0xF); // show last 4 (MS) bits as the second digit
        vbdCycle(simcyc); // display cycle count
        vbdBar(top->out & 0xFF); // display result on neopixel strip & mask data_out with 0xFF

        // either simulation finished, or 'q' is pressed
        if ((Verilated::gotFinish()) || (vbdGetkey()=='q'))
            exit(0);        // ... exit if finish OR 'q' pressed

    }

    vbdClose();     // ++++
    tfp->close();
    exit(0);
}
