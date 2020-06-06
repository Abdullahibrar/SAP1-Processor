`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:54:01 05/09/2018 
// Design Name: 
// Module Name:    instructionregister 
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
module instructionregister(output [3:0] data_out,seq,input [7:0] data_in,input li,clk,
clr,Ei);
reg [7:0]q;
always @(negedge clk)
if (clr==0)
q<=0;
else
if (li==0)
q<=data_in;
assign seq=q[7:4]; //sequence execute
assign data_out=Ei?4'bzzzz:q[3:0]; //adrress of execution
endmodule

  
