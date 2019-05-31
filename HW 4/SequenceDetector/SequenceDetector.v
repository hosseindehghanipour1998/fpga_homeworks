`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:34:17 05/31/2019 
// Design Name: 
// Module Name:    FSM_Moore 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//						Sequence Detector ( 3,0,1,2 ...  ) Moore FSM
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module FSM_Moore(clk, in, out);
	input clk;
	input[1:0] in;
	output reg out;
	reg[2:0] state; 
	parameter s0 = 3'b000;
	parameter s1 = 3'b001;
	parameter s2 = 3'b010;
	parameter s3 = 3'b011;
	parameter s4 = 3'b100;
	initial state = s0;
	
	always @(posedge clk)
	begin
		case(state)
			s0: 	if(in == 3) state <= s1;
			s1: 	if(in == 0) state <= s2;
					else state <= s0;
			s2: 	if(in == 1) state <= s3;
					else state <= s0;
			s3:	if(in == 2) state <= s4;
					else state <= s0;
			s4:	if(in == 3) state <= s1;
					else state <= s0;
		endcase
	end
	
	always @(state)
	begin
		case(state)
			s0: out = 1'b0;
			s1: out = 1'b0;
			s2: out = 1'b0;
			s3: out = 1'b0;
			s4: out = 1'b1;
		endcase
	end

endmodule
