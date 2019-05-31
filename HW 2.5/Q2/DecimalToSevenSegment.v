`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:38:22 04/19/2019 
// Design Name: 
// Module Name:    DecimalToSevenSegment 
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
module  DecimalToSevenSegment (in1, in0, out);	
	input [3:0]in1;
	input [3:0]in0;
	wire [8:0]temp;
	output [13:0]out;
	
	
	
	decimalTobcd d2b(
		.input0(in0),
		.input1(in1),
		.out(temp)
		);
	
	DecimalToSevenSegment b2s(
		.in(temp),
		.out0(out[6:0]),
		.out1(out[13:7])
		);
	
endmodule
