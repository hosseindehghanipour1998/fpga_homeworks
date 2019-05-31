`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:43:22 05/31/2019 
// Design Name: 
// Module Name:    multiplier 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//				
/*  Constraints : 
	a) two 8-bit unsigned inputs.
	b) 2 level pipeLine ( Input to Output Delay is two clock cycles )
	c)


*/							
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module multiplier(clk, Number_1, Number_2, result);
	input clk;
	input[7:0] Number_1, Number_2;
	output[15:0] result;
	
	
	reg[15:0] result;
	reg[15:0] in_a, in_b;
	reg[15:0] pipe;
	wire[15:0] mult_res;
	
	assign mult_res = in_a * in_b;

	always @(posedge clk)
	begin
		in_a <= Number_1;in_b <= Number_2;
		pipe <= mult_res;
		result <= pipe;
	end

endmodule
