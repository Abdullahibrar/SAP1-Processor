`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:17:25 05/19/2019
// Design Name:   accumulator
// Module Name:   E:/GIK Institute '21/4th Semester/CS222 - Organization & Assembly/SAP 1/TestBench.v
// Project Name:  sapfinalESLAB
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: accumulator
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TestBench;

	// Inputs
	reg [7:0] data_in;
	reg la;
	reg clk;
	reg ea;

	// Outputs
	wire [7:0] toadder;
	wire [7:0] todataout;

	// Instantiate the Unit Under Test (UUT)
	accumulator uut (
		.data_in(data_in), 
		.la(la), 
		.clk(clk), 
		.ea(ea), 
		.toadder(toadder), 
		.todataout(todataout)
	);

	initial begin
		// Initialize Inputs
		data_in = 0;
		la = 0;
		clk = 0;
		ea = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

