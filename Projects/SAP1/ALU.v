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
module Add_Sub (
output [3: 0] S,
output C,
input [3: 0] A, B,
input M
);
wire [3: 0] B_xor_M;
wire C1, C2, C3, C4;
assign C = C4; // output carry
xor (B_xor_M[0], B[0], M);
xor (B_xor_M[1], B[1], M);
xor (B_xor_M[2], B[2], M);
xor (B_xor_M[3], B[3], M);
// Instantiate full adders
full_adder FA0 (S[0], C1, A[0], B_xor_M[0], M);
full_adder FA1 (S[1], C2, A[1], B_xor_M[1], C1);
full_adder FA2 (S[2], C3, A[2], B_xor_M[2], C2);
full_adder FA3 (S[3], C4, A[3], B_xor_M[3], C3);
endmodule
module full_adder (output S, C, input x, y, z); // See HDL Example 4.2
wire S1, C1, C2;
// instantiate half adders
half_adder HA1 (S1, C1, x, y);
half_adder HA2 (S, C2, S1, z);
or G1 (C, C2, C1);
endmodule
module half_adder (output S, C, input x, y); // See HDL Example 4.2
xor (S, x, y);
and (C, x, y);
endmodule
module t_Add_Sub_4_bit ();
wire [3: 0] S;
wire C;
reg [3: 0] A, B;
reg M;
Add_Sub_4_bit M0 (S, C, A, B, M);
initial #100 $finish;
initial fork
#10 M = 0;
#10 A = 4’hA;
#10 B = 4’h5;
#50 M = 1;
#70 B = 4’h3;
join
endmodule
