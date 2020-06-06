`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:31:57 05/08/2018 
// Design Name: 
// Module Name:    asd 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module MAR(output reg [3:0] q,input [3:0] data_in,input clk,lm);

always @(posedge clk)
if (lm==0)
q<=data_in;
		 
endmodule

