`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 	   Hossein
// 
// Create Date:    15:34:24 04/16/2019 
// Design Name: 
// Module Name:    CircuitDraw 
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
module CircuitDraw(start, NumberIn, clk, Count, OverFlow);
	input start, clk;
	input [3:0]NumberIn;
	output reg [7:0]Count;
	output reg OverFlow;
//--------------------------- OR ------------------------------	
	// OR
	wire x;
	or or_inst(x, NumberIn[0], ~NumberIn[1], NumberIn[2], ~NumberIn[3]);
//--------------------------- Summation ------------------------------	
	// Summation
	wire [8:0] AddedValue = Count +{8'h0 , x};
//--------------------------- Bottom Mux ------------------------------	
	// Bottom Mux
	reg Tout2;
	assign cout = AddedValue[8];
	
	always @(start, OverFlow, cout)
	begin
		case( {start,OverFlow} )
			2'b00: Tout2 = cout;
			2'b01: Tout2 = 1;
			2'b10: Tout2 = 0;
			2'b11: Tout2 = 0;
		endcase
	end

//--------------------------- Upper Mux ------------------------------
	
	// Upper Mux
	reg [7:0]Tout1;
	always @(start or AddedValue[7:0])
	begin
		case(start)
			1'b0: Tout1 = 8'b00000000;
			1'b1: Tout1 = AddedValue[7:0];
		endcase 
	end
	
//--------------------------- D-FF  ------------------------------
	always @(posedge clk)
	begin
		Count <= Tout1;
	end
	

	always @(posedge clk)
	begin
		OverFlow = Tout2;
	end

endmodule
