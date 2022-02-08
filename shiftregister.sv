module shiftregister(
	input i_clk,
	input i_nrst,
	input i_din,
	input i_shift,
	output reg [7:0] o_dout	
);

always_ff @(posedge i_clk) begin
	if(!i_nrst) begin
		o_dout <= 0;
	end else begin
		if(i_shift) begin
			o_dout <= {o_dout[6:0], i_din};
		end
	end
end

endmodule
