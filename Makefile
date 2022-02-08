compile:
	verilator -Wall --trace --cc shiftregister.sv

compile2:
	g++ -Wall -I /usr/share/verilator/include -I obj_dir/ -o shiftregister_tb testbench.cpp /usr/share/verilator/include/verilated.cpp obj_dir/Vshiftregister__ALL.a

compile_test:
	/usr/lib/emscripten/emcc -Wall \
		-s EXPORTED_RUNTIME_METHODS=cwrap,ccall \
		-s ENVIRONMENT=web\
		-s WASM=1 \
		-s MODULARIZE=1 \
		-s EXPORT_NAME=testveri \
		-I /usr/share/verilator/include \
		-I. \
		-I obj_dir/ \
		testbench.cpp \
		/usr/share/verilator/include/verilated.cpp \
		obj_dir/Vshiftregister.cpp \
		obj_dir/Vshiftregister__Syms.cpp \
		obj_dir/Vshiftregister___024root__Slow.cpp \
		obj_dir/Vshiftregister___024root__DepSet_h363e0163__0__Slow.cpp \
		obj_dir/Vshiftregister___024root__DepSet_h363e0163__0.cpp \
		obj_dir/Vshiftregister__Trace__0__Slow.cpp \
		obj_dir/Vshiftregister__Trace__0.cpp \
		/usr/share/verilator/include/verilated_vcd_c.cpp


clean:
	rm -rf ./obj_dir