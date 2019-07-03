`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:21:38 07/03/2019 
// Design Name: 
// Module Name:    Q4 
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
module Q4(clk , reset , A1,A2,A3,A4,Sum );
	
	input clk , reset ;
	input [9:0] A1 , A2 , A3 , A4 ;
	output reg [11:0] Sum ;
	reg [11:0] p1 , p2 ;
	always@ ( posedge clk ) begin
		
		if ( reset ) begin
			p1 <= 0 ;
			Sum <= 0 ;
		end 
		
		else begin
			p1 <= A1 + A2 + A3 + A4 ;
			p2 <= p1 ;
			Sum <= p2 ;
		end
	
	end 


endmodule
