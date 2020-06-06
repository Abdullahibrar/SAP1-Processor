`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:41:22 05/19/2019
// Design Name:   RAM
// Module Name:   E:/GIK Institute '21/4th Semester/CS222 - Organization & Assembly/SAP 1/RAM.v
// Project Name:  sapfinalESLAB
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: RAM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module RAM;

	// Inputs
	reg [3:0] data_in;
	reg ce;

	// Outputs
	wire [7:0] bus_out;

	// Instantiate the Unit Under Test (UUT)
	RAM uut (
		.bus_out(bus_out), 
		.data_in(data_in), 
		.ce(ce)
	);

	initial begin
		// Initialize Inputs
		data_in = 0;
		ce = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

