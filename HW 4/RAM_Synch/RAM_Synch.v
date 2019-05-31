`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:49:57 05/31/2019 
// Design Name: 
// Module Name:    RAM_Synch 
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
module RAM_Synch(clk, input_data,address, enable,output_data);
	output reg[7:0] output_data;
	input clk, enable;
	input[7:0] input_data;
	input[7:0] address;
	reg[7:0] ram [63:0];
	
	
	
	always @(posedge clk)
	begin
		if(enable)
			ram[address] = input_data;
			
		output_data = ram[address];
	end
endmodule
