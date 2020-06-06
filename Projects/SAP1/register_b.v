`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:03:50 05/09/2018 
// Design Name: 
// Module Name:    register_b 
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
module register_b(nLb, clk, in, out);
input clk, nLb;
input [7:0] in;
output [7:0] out;
reg [7:0] out;
always @ (posedge clk)
begin 
if(!nLb) out = in;
end


endmodule
