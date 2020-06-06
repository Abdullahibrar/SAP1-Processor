`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:36:33 05/19/2019
// Design Name:   MAR
// Module Name:   E:/GIK Institute '21/4th Semester/CS222 - Organization & Assembly/SAP 1/fsdf.v
// Project Name:  sapfinalESLAB
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MAR
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module MAR;

	// Inputs
	reg [3:0] data_in;
	reg clk;
	reg lm;

	// Outputs
	wire [3:0] q;

	// Instantiate the Unit Under Test (UUT)
	MAR uut (
		.q(q), 
		.data_in(data_in), 
		.clk(clk), 
		.lm(lm)
	);

	initial begin
		// Initialize Inputs
		data_in = 0;
		clk = 0;
		lm = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

