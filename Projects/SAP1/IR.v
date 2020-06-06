`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:48:45 05/19/2019
// Design Name:   instructionregister
// Module Name:   E:/GIK Institute '21/4th Semester/CS222 - Organization & Assembly/SAP 1/IR.v
// Project Name:  sapfinalESLAB
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: instructionregister
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module IR;

	// Inputs
	reg [7:0] data_in;
	reg li;
	reg clk;
	reg clr;
	reg Ei;

	// Outputs
	wire [3:0] data_out;
	wire [3:0] seq;

	// Instantiate the Unit Under Test (UUT)
	instructionregister uut (
		.data_out(data_out), 
		.seq(seq), 
		.data_in(data_in), 
		.li(li), 
		.clk(clk), 
		.clr(clr), 
		.Ei(Ei)
	);

	initial begin
		// Initialize Inputs
		data_in = 0;
		li = 0;
		clk = 0;
		clr = 0;
		Ei = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

