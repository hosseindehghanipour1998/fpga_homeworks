`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:46:00 04/19/2019 
// Design Name: 
// Module Name:    decimalTobcd
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
module decimalTobcd(input0, input1, out);
	input [3:0]input0;
	input [3:0]input1;
	output [7:0]out;
	
	//implement type 1
	assign out = {input1, input0};
	
	// A Decimal is a BCD :\

endmodule
