/**
 * @author Cesar L. Vielma P.
 * @mail cesarlvielma@gmail.com
 * @date 2013-3-3
 * @brief  main file for xor gate test
 **/

#include "xor_gate.h"
#include "testbench.h"

int sc_main(int argc,char *argv[]){

	sc_time PERIOD(10,SC_NS);	
	sc_time DELAY(10,SC_NS);	
	sc_clock clock("clock",PERIOD,0.5,DELAY,true);

	Xor_Gate xor_gate("xor_gate");
	Testbench test("test");

	sc_signal<bool> a_sg, b_sg, c_sg;

	xor_gate.a_in(a_sg);



	xor_gate.b_in(b_sg);
	xor_gate.c_out(c_sg);

	test.clk_in(clock);
	test.c_in(c_sg);
	test.a_out(a_sg);
	test.b_out(b_sg);

	sc_start();
	return 0;
}
