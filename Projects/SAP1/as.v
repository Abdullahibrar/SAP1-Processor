`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:28:35 05/08/2018 
// Design Name: 
// Module Name:    as 
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
module PC(output[3:0] data_bus ,input Cp,clk,clr,en);
reg [3:0] q;
always @ (negedge clk, negedge clr)
if (clr==0)
q<=0;
else
if (Cp)
q<=q+1;
assign data_bus=en?q:4'bz;
endmodule
