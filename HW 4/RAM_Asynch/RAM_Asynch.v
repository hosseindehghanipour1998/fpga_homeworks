`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:46:29 05/31/2019 
// Design Name: 
// Module Name:    RAM_Asynch 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//				RAM with Asynch Output 
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module RAM_Asynch(clk, input_data, address, output_data, write_enable);
	input clk;
	input[7:0] input_data;
	input[7:0] address;
	input write_enable;
	output [7:0] output_data;
	reg[7:0] RAM [63:0];
	integer i;
	
	initial 
	begin
		for(i=0; i<64; i=i+1)
		begin
			RAM[i] = i*2;
		end
	end
	
	always @(posedge clk)
	begin
		if(write_enable)
			RAM[address] = input_data;
	end	
	
	assign output_data = RAM[address];
	
endmodule
