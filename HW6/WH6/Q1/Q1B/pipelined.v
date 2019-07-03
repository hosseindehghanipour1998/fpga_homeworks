`timescale 1ns / 1ps

module pipelined(a,b,clk,res);
	
	reg a_negative  = 0 ;
	reg b_negative = 0 ;
	input clk;
	input signed [31:0] a;
	input signed [31:0] b;
	output reg signed [63:0] res;
	
	reg [31:0] res1;
	reg [31:0] res2;
	reg [31:0] res3;
	reg [31:0] res4;
	
	reg [63:0] res5;
	reg [63:0] res6;
	reg [63:0] res7;
	reg [63:0] res8;
	
	reg [63:0] pipe1;
	reg [63:0] pipe2;
	reg [63:0] pipe3;
	reg [63:0] pipe4;
	reg [63:0] pipe5;
	reg [63:0] pipe6;
	reg [63:0] pipe7;
	
	reg signed [31:0] temp0a;
	reg signed [31:0] temp0b;
	reg [31:0] temp1a;
	reg [31:0] temp1b;
	reg [31:0] temp2a;
	reg [31:0] temp2b;
	reg [31:0] temp3a;
	reg [31:0] temp3b;
	
	reg [31:0] por32;
	reg [15:0] por16;
	reg negative = 0 ;

	
	always@(posedge clk)
		begin
		
		
	 temp0a = a;
	 temp0b = b;
	 
	   if ( (temp0b * temp0a ) < 0 )begin
			negative = 1 ;
		end
		if ( temp0a < 0 )begin
			temp0a = (temp0a * -1) ;
			a_negative = 1 ;
		end 
		
		if ( temp0b < 0 ) begin
			temp0b = (temp0b * -1) ;
			b_negative = 1 ;
			
		end 
		
	
				
		por32=32'b00000000000000000000000000000000;
		por16=16'b0000000000000000;
		
		 res1[31:0]<=temp0b[15:0] * temp0a[15:0];
		 //res[31:0]<=res1[31:0];
		 res5[63:0]<={por32,res1};
		 pipe1<=res5;
		 pipe2<=pipe1;
		 pipe3<=pipe2;
		 
		 temp1a<=temp0a;
		 temp1b<=temp0b;
		 res2[31:0]<=temp1b[15:0] * temp1a[31:16];
		 //res[47:16]<=res2[31:0];
		 res6[63:0]<={por16,res2,por16};
		 pipe4<=res6;
		 pipe5<=pipe4;
		 
		 
		 temp2a<=temp1a;
		 temp2b<=temp1b;
		 res3[31:0]<=temp2b[31:16] * temp2a[15:0];
		 //res[47:16]<=res2[31:0];
		 res7[63:0]<={por16,res3,por16};
		 pipe6<=res7;


		 temp3a<=temp2a;
		 temp3b<=temp2b;
		 res4[31:0]<=temp3b[31:16] * temp3a[31:16];
		 //res[63:48]<=res2[31:0];
		 res8[63:0]<={res4,por32};
		 res = pipe3 + pipe5 + pipe6 + res8;
		 if (  negative == 1  )begin				
				res = res * (-1) ;
		 end	
	end
		
		
		
	


endmodule
