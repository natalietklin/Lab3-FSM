module lfsr (
    input  logic            clk,        // input clock
    input  logic            rst,        // reset
    input  logic            en,         // enable
    output logic [7:1]      data_out    // serial data out
);

    logic  [7:1]            sreg;       // shift register

always_ff @ (posedge clk, posedge rst)
    if (rst)
        sreg <= 7'b1;                   // shift register must be initialised to a value other than 4'b0000
    else if (en)
        sreg <= {sreg[6:1], sreg[7] ^ sreg[3]}; // the 7th order primitive polynomial is: 1 + X3 + X7

assign data_out = sreg;

endmodule
