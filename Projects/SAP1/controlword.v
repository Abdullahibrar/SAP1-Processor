`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:08:48 05/09/2018 
// Design Name: 
// Module Name:    controlword 
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
module controlword(clk,  clr, cntrl_bus, opcode);
input clk,clr;
input [3:0] opcode;
parameter cntrlbussize = 12;
parameter T1 = 6'b000001,
   T2 = 6'b000010,
   T3 = 6'b000100,
   T4 = 6'b001000,
   T5 = 6'b010000,
   T6 = 6'b100000;
output [11:0] cntrl_bus;
// ring counter 
reg [5:0]  ringcount;
reg [cntrlbussize-1:0] cntrl_bus;
wire [5:0]state ;
always @ (negedge clk)
begin
if (clr)
 ringcount = 6'b000001;
else 
begin
case(ringcount)
 T1: ringcount <= T2;
 T2: ringcount <= T3;
 T3: ringcount <= T4;
 T4: ringcount <= T5;
 T5: ringcount <= T6; 
 T6: ringcount <= T1;
 endcase
 end
end

//end of ring counter 

assign state = ringcount;
always @(negedge clk)
case ({state, opcode})
{T1, 4'hx}: cntrl_bus = 12'h5E3;    
{T2, 4'hx}: cntrl_bus = 12'hBE3;
{T3, 4'hx}: cntrl_bus = 12'h263;  
//LDA operation
{T4, 4'h0}: cntrl_bus = 12'h1A3;
{T5, 4'h0}: cntrl_bus = 12'h2C3;
{T6, 4'h0}: cntrl_bus = 12'h3E3;
//ADD
{T4, 4'h0001}: cntrl_bus = 12'h1A3;
{T5, 4'h0001}: cntrl_bus = 12'h2E1;
{T6, 4'h0001}: cntrl_bus = 12'h3C7;
//SUB
{T4, 4'h0010}: cntrl_bus = 12'h1A3;
{T5, 4'h0010}: cntrl_bus = 12'h2E1;
{T6, 4'h0010}: cntrl_bus = 12'h3EF;
//OUT
{T4, 4'h1110}: cntrl_bus = 12'h3F2;
{T5, 4'h1110}: cntrl_bus = 12'h3E3;
{T6, 4'h1110}: cntrl_bus = 12'h3E3;
//HLT
{T4, 4'h1111}: cntrl_bus = 12'h3E3;
{T5, 4'h1111}: cntrl_bus = 12'h3E3;
{T6, 4'h1111}: cntrl_bus = 12'h3E3;
endcase



endmodule
