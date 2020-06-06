`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:07:07 05/09/2018 
// Design Name: 
// Module Name:    register_out 
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
module register_out(nLo, clk, in, out);
input clk, nLo;
input [7:0] in;
output [7:0] out;
reg [7:0] out;
always @ (posedge clk)
begin 
if(!nLo) out = in;
end


endmodule
