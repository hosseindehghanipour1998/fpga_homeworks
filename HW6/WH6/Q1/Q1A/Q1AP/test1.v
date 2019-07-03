`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:12:47 07/04/2019
// Design Name:   Q1S
// Module Name:   C:/Users/Hossein/Desktop/test/Q1AP/test1.v
// Project Name:  Q1AP
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Q1S
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test1;

	// Inputs
	reg [31:0] a;
	reg [31:0] b;
	reg clk;

	// Outputs
	wire [63:0] res;

	// Instantiate the Unit Under Test (UUT)
	Q1S uut (
		.a(a), 
		.b(b), 
		.clk(clk), 
		.res(res)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
		a = 5;
		b = 4;
		#100; 
		#100;
        
		// Add stimulus here

	end
	
	always@(*) begin
	#110 ;
	clk <= ~clk;
	
	end
      
endmodule

