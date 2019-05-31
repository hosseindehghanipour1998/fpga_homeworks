`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:02:13 04/19/2019 
// Design Name: 
// Module Name:    BCDToSevenSegment 
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
module BCDToSevenSegment(in, out1, out0);
	input [7:0]in;
	output reg [6:0]out1;
	output reg [6:0]out0;
	
	always @(in[3:0])
   begin
       case (in[3:0])
           0 : out0 = 7'b1111110;
           1 : out0 = 7'b0110000;
           2 : out0 = 7'b1101101;
           3 : out0 = 7'b1111001;
           4 : out0 = 7'b0110011;
           5 : out0 = 7'b1011011;
           6 : out0 = 7'b1011111;
           7 : out0 = 7'b1110000;
           8 : out0 = 7'b1111111;
           9 : out0 = 7'b1111011;
           default : out0 = 7'b0000000; 
       endcase
   end
	
	always @(in[7:4])
   begin
       case (in[7:4]) 
           0 : out1 = 7'b1111110;
           1 : out1 = 7'b0110000;
           2 : out1 = 7'b1101101;
           3 : out1 = 7'b1111001;
           4 : out1 = 7'b0110011;
           5 : out1 = 7'b1011011;
           6 : out1 = 7'b1011111;
           7 : out1 = 7'b1110000;
           8 : out1 = 7'b1111111;
           9 : out1 = 7'b1111011;
           default : out1 = 7'b0000000; 
       endcase
   end

endmodule
