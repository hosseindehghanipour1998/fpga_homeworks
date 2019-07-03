`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:12:07 07/04/2019 
// Design Name: 
// Module Name:    Q1S 
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
module Q1S(a,b,clk,res);
	input clk;
	input [31:0] a;
	input [31:0] b;
	output [63:0] res;
	
	reg [31:0] result1;
	reg [31:0] result2;
	reg [31:0] result3;
	reg [31:0] result4;
	
	reg [63:0] result5;
	reg [63:0] result6;
	reg [63:0] result7;
	reg [63:0] result8;
	
	reg [63:0] pipe1;
	reg [63:0] pipe2;
	reg [63:0] pipe3;
	reg [63:0] pipe4;
	reg [63:0] pipe5;
	reg [63:0] pipe6;
	reg [63:0] pipe7;
	
	reg [31:0] temp0a;
	reg [31:0] temp0b;
	reg [31:0] temp1a;
	reg [31:0] temp1b;
	reg [31:0] temp2a;
	reg [31:0] temp2b;
	reg [31:0] temp3a;
	reg [31:0] temp3b;
	
	reg [31:0] por32;
	reg [15:0] por16;
	//reg [63:0] res

	always@(posedge clk)
		begin
		//A1A2
		//B1B2
		//------
		//32x0 - B2A2
		//16x0 - B2A1 - 16x0
		//16x0 - B1A2 - 16x0
		//B1A1 - 16x0
			
		temp0a = a;
		temp0b = b;
				
		por32 = 0;
		por16 = 0;
		
		//32x0 - B2A2
		 result1[31:0]<=temp0b[15:0] * temp0a[15:0];
		 result5[63:0]<={por32,result1};
		 pipe1<=result5;
		 pipe2<=pipe1;
		 pipe3<=pipe2;
		
		//16x0 - B2A1 - 16x0
		 temp1a<=temp0a;
		 temp1b<=temp0b;
		 result2[31:0]<=temp1b[15:0] * temp1a[31:16];
		 result6[63:0]<={por16,result2,por16};
		 pipe4<=result6;
		 pipe5<=pipe4;
		 
		//16x0 - B1A2 - 16x0	 
		 temp2a<=temp1a;
		 temp2b<=temp1b;
		 result3[31:0]<=temp2b[31:16] * temp2a[15:0];
		 result7[63:0]<={por16,result3,por16};
		 pipe6<=result7;

		//B1A1 - 16x0
		 temp3a<=temp2a;
		 temp3b<=temp2b;
		 result4[31:0]<=temp3b[31:16] * temp3a[31:16];

		 result8[63:0]<={result4,por32};
		 //res <= (8*5);
	end
	
	assign res = pipe3 + pipe5 + pipe6 + result8 ;
endmodule
