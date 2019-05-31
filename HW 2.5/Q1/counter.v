`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:07:10 04/19/2019 
// Design Name: 
// Module Name:    counter 
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
module counter(clk, reset, out);
    
	 input clk, reset;
	 output reg [9:0]out;
	 initial out = 0;
	 
	 parameter counter_temp = 999999;
	 reg [19:0]temp = 0;
	 reg ce = 0;
	 
	 always @(posedge clk)
	 begin 
		if (temp == counter_temp)
		begin 
			temp <= 0;
			ce <= 1;
		end
		else 
		begin 
			temp <= temp + 1;
			ce <= 0;
		end
	 end
	 
	 always @(posedge clk)
	 begin
		if (ce)
		begin 
			if (reset)
				out <= 0;
			else
				out <= out + 1;
		end	
	 end

endmodule
