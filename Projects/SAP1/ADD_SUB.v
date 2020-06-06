`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   20:59:54 05/19/2019
// Design Name:   ALU
// Module Name:   E:/GIK Institute '21/4th Semester/CS222 - Organization & Assembly/SAP 1/ADD_SUB.v
// Project Name:  sapfinalESLAB
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ADD_SUB;

	// Inputs
	reg Su;
	reg Eu;
	reg [7:0] ina;
	reg [7:0] inb;

	// Outputs
	wire [7:0] result;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.Su(Su), 
		.Eu(Eu), 
		.ina(ina), 
		.inb(inb), 
		.result(result)
	);

	initial begin
		// Initialize Inputs
		Su = 0;
		Eu = 0;
		ina = 0;
		inb = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

