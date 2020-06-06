`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:24:46 05/07/2019
// Design Name:   finalsap
// Module Name:   C:/Users/USMAN/Desktop/sapfinalESLAB/test.v
// Project Name:  sapfinalESLAB
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: finalsap
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg clk;
	reg clr;
	reg run_prog;

	// Outputs
	wire [7:0] result;

	// Instantiate the Unit Under Test (UUT)
	finalsap uut (
		.clk(clk), 
		.clr(clr), 
		.result(result), 
		.run_prog(run_prog)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		clr = 0;
		run_prog = 0;
		#100;
		clk = 0;
		clr = 0;
		run_prog = 1;
		#100
		clk = 0;
		clr = 1;
		run_prog = 1;
		#100
		clk = 1;
		clr = 0;
		run_prog = 0;
		#100;
		clk = 1;
		clr = 0;
		run_prog = 0;
		#100;
		
        
		// Add stimulus here

	end
      
endmodule

