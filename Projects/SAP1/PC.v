`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:38:09 05/19/2019
// Design Name:   PC
// Module Name:   E:/GIK Institute '21/4th Semester/CS222 - Organization & Assembly/SAP 1/PC.v
// Project Name:  sapfinalESLAB
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: PC
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module PC;

	// Inputs
	reg Cp;
	reg clk;
	reg clr;
	reg en;

	// Outputs
	wire [3:0] data_bus;

	// Instantiate the Unit Under Test (UUT)
	PC uut (
		.data_bus(data_bus), 
		.Cp(Cp), 
		.clk(clk), 
		.clr(clr), 
		.en(en)
	);

	initial begin
		// Initialize Inputs
		Cp = 0;
		clk = 0;
		clr = 0;
		en = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

