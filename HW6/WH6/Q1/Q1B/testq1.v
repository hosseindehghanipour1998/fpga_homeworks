`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:05:07 07/03/2019
// Design Name:   pipelined
// Module Name:   C:/Users/Dear Kimiya.Be Happy/Desktop/fpga/hw6/q1/testq1.v
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

module testq1;

	// Inputs
	reg [31:0] a;
	reg [31:0] b;
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
		a = 0;
		b = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#90;
		
		a=8;
		b=4;  
		#20;
		a = 15;
		b = 20;
		// Add stimulus here

	end
always
begin
#10;
clk = ~clk;

end      
endmodule

