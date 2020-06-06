`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:33:25 05/08/2018 
// Design Name: 
// Module Name:    asdf 
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
module RAM(output [7:0] bus_out,input [3:0] data_in,input ce);
reg [7:0] q;
       parameter LDA=0000;
       parameter ADA=0001;
       parameter SUB=0010;
       parameter OUT=1110;
       parameter HLT=1111;
       always @ (data_in)
       case (data_in)
       0: q={LDA,4'HA};
       1: q={ADA,4'H0111};
       2: q={OUT,4'H0100};
       3: q={OUT,4'H1000};
       4: q={LDA,4'HA};
       5: q={ADA,4'Hz};
       6: q={SUB,4'Hz};
       7: q=8'b00001001;
       8: q={LDA,4'Hz};
       9: q={ADA,4'Hz};
      10: q=8'b00001010;
      11: q={OUT,4'Hz};
      12: q={OUT,4'Hz};
      13: q={LDA,4'Hz};
      14: q={ADA,4'Hz};
      15: q={SUB,4'Hz};
      default: q=8'hzzzzzzzz;
      endcase
      assign bus_out=ce?8'hzzzzzzzz:q;
      endmodule

