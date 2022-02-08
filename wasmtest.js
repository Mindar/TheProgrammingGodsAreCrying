window.onload = init;


var update, init_v, destroy;


function init(){
	console.log(Module);
	
	update_v = Module.cwrap("update_verilog", "number", ["number","number","number","number"]);
	init_v = Module.cwrap("initialize_verilog", null, []);
	destroy_v = Module.cwrap("destroy_verilog", null, []);
	
	
	
	Module.onRuntimeInitialized = () => {
	
		init_v();
		update_v(0, 0, 0, 1);
		console.log(update_v(1, 0, 0, 0));
	
		
		
		update_v(0, 1, 1, 0);
		console.log(update_v(1, 1, 1, 0));
		
		shiftIn(0);
	}
}

function shiftIn(value) {
	update_v(0, 1, value, 0);
	console.log(update_v(1, 1, value, 0));
}