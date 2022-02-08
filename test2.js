import Module from "./a.out";

window.onload = init;

var update_v, init_v, destroy_v;

async function init(){
	const mod = await Module();

	console.log(mod);
	console.log(shiftIn);

	document.getElementById("btn1").addEventListener("click", () => shiftIn(1));
	document.getElementById("btn0").addEventListener("click", () => shiftIn(0));
	
	update_v = mod.cwrap("update_verilog", "number", ["number","number","number","number"]);
	init_v = mod.cwrap("initialize_verilog", null, []);
	destroy_v = mod.cwrap("destroy_verilog", null, []);
	
	init_v();
	update_v(0, 0, 0, 1);
	console.log(update_v(1, 0, 0, 0));

	
	
	update_v(0, 1, 1, 0);
	console.log(update_v(1, 1, 1, 0));
	
	shiftIn(0);
}

function shiftIn(value) {
	update_v(0, 1, value, 0);
	const result = update_v(1, 1, value, 0);

	let outstr = "";
	for(let i = 0; i < 8; i++) {
		if(result & (1 << i)) {
			outstr += "1";
		} else {
			outstr += "0";
		}
	}

	document.getElementById("output").innerText = outstr;
}