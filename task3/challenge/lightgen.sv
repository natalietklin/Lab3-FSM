module lightgen (
    // interface signals
    input  logic             clk,      // clock 
    input  logic             rst,      // reset
    input  logic             en,       // enable signal
    input  logic [15:0]      N,        // clock divided by N+1
    output logic [7:0]	     data_out  // output
);
    logic                    delay;

clktick ClkTick (
    .clk (clk),
    .rst (rst),
    .en (en),
    .N (N),
    .tick (delay)
);

f1_fsm FSM (
    .clk (clk),
    .rst (rst),
    .en (delay),
    .out (data_out)
);

endmodule
