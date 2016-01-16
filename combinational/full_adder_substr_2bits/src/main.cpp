/**
 * @author Cesar L. Vielma P.
 * @mail cesarlvielma@gmail.com
 * @date 2013-3-3
 * @brief  full adder substracter described using systemC library
 **/
#include "full_adder_substr_2b.h"
#include "testbench.h"

int sc_main(int argc,char *argv[]){
	sc_time PERIOD(10,SC_NS);	
	sc_time DELAY(10,SC_NS);	
	sc_clock clock("clock",PERIOD,0.5,DELAY,true);

	Full_Adder_Substr_2b FA2b("FA");
	Testbench test("test");

	sc_signal<sc_uint<2> > x_sg, y_sg,  z_sg;
	sc_signal<bool>ci_sg, co_sg;

	FA2b.x_in(x_sg);
	FA2b.y_in(y_sg);
	FA2b.ci_in(ci_sg);
	FA2b.co_out(co_sg);
	FA2b.z_out(z_sg);

	test.clk_in(clock);
	test.z_in(z_sg);
	test.co_in(co_sg);
	test.x_out(x_sg);
	test.y_out(y_sg);
	test.ci_out(ci_sg);
	sc_start();
	return 0;
}
