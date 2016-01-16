#include "full_adder.h"
#include "testbench.h"

int sc_main(int argc,char *argv[]){
	sc_time PERIOD(10,SC_NS);	
	sc_time DELAY(10,SC_NS);	
	sc_clock clock("clock",PERIOD,0.5,DELAY,true);

	Full_Adder full_adder("full_adder");
	Testbench test("test");

	sc_signal<bool> x_sg, y_sg, ci_sg, co_sg, z_sg;

	full_adder.x_in(x_sg);
	full_adder.y_in(y_sg);
	full_adder.ci_in(ci_sg);
	full_adder.co_out(co_sg);
	full_adder.z_out(z_sg);

	test.clk_in(clock);
	test.z_in(z_sg);
	test.co_in(co_sg);
	test.x_out(x_sg);
	test.y_out(y_sg);
	test.ci_out(ci_sg);
	sc_start();
	return 0;
}
