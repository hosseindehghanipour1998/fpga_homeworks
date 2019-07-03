`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:55:50 07/03/2019
// Design Name:   pipelined
// Module Name:   Z:/hw6/q1/test1.v
// Project Name:  q1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: pipelined
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
	reg [31:0] a ;
	reg [31:0] b ;
	reg clk;

	// Outputs
	wire [63:0] res;

	// Instantiate the Unit Under Test (UUT)
	pipelined uut (
		.a(a), 
		.b(b), 
		.clk(clk),  
		.res(res)
	);

	initial begin
		// Initialize Inputs
		a = -5;
		b = 4;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	
	always #50 clk=~clk;
      
endmodule

