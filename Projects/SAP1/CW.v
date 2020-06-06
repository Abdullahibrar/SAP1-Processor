`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:45:52 05/19/2019
// Design Name:   controlword
// Module Name:   E:/GIK Institute '21/4th Semester/CS222 - Organization & Assembly/SAP 1/CW.v
// Project Name:  sapfinalESLAB
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: controlword
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module CW;

	// Inputs
	reg clk;
	reg clr;
	reg [3:0] opcode;

	// Outputs
	wire [11:0] cntrl_bus;

	// Instantiate the Unit Under Test (UUT)
	controlword uut (
		.clk(clk), 
		.clr(clr), 
		.cntrl_bus(cntrl_bus), 
		.opcode(opcode)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		clr = 0;
		opcode = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

