`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:11:59 05/09/2018 
// Design Name: 
// Module Name:    finalsap 
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
module finalsap(clk, clr, result, run_prog);
input clk, clr, run_prog;
parameter wordsize = 8;
parameter cntrlbussize = 12;
output [wordsize-1:0] result;
wire [wordsize-1:0] Wbus, Wbus_int;
wire [3:0] ram_in,opwire;
wire Cp, Ep, nLm, nCe, nLi, nEi, nLa, Ea, Su, Eu, nLb, nLo,nclr,nclk;
assign nclr=~clr;
assign nclk=~clk;
assign Wbus =Wbus_int;
wire [cntrlbussize-1:0] cntrl_bus = {Cp, Ep, nLm, nCe, nLi, nEi, nLa, Ea, Su, Eu, nLb, nLo};
wire [wordsize/2-1:0]opcode;
wire [wordsize-1:0] A, regB;
ALU A1 (Su,Eu,A,regB,Wbus);
accumulator C1 (Wbus,nla,clk,Ea,A,Wbus);
PC P1 (Wbus,Cp,nclk,nclr,Ep);
MAR M1 (ram_in,Wbus,clk,nLm);
RAM R1 (Wbus,ram_in,nCe);
instructionregister R5 (Wbus,opwire,Wbus,nLi,nclk,nclr,nEi);
register_b R2 (nLb,clk,Wbus,regB);
register_out R3 (nLo,clk,Wbus,result);
controlword C4 (clk,clr,cntrl_bus,opcode);
endmodule

