`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:05:48 05/09/2018 
// Design Name: 
// Module Name:    ALU 
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
module ALU(Su, Eu, ina, inb, result);
input Su, Eu;
parameter wordsize = 8;
input [wordsize-1:0] ina, inb;
output [wordsize-1:0] result;
assign result = Eu?(Su?ina-inb:ina+inb):8'bz;


endmodule
