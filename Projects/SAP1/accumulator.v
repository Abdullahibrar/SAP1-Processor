`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:01:27 05/09/2018 
// Design Name: 
// Module Name:    accumulator 
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
module accumulator(input [7:0] data_in , input la,clk,ea ,output [7:0] toadder,todataout);
reg [7:0] A;
always @ (posedge clk)
begin
if (la==0)
A<=data_in;
end
assign toadder=ea?A:8'bzzzzzzzz;
assign todataout=ea?A:8'bzzzzzzzz;


endmodule
