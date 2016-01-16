/**
 * @author Cesar L. Vielma P.
 * @mail cesarlvielma@gmail.com
 * @date 2013-3-3
 * @brief  main file for not gate test
 **/

#include "not_gate.h"
#include "TestBench.h"

int sc_main(int argc,char *argv[]){

	sc_time PERIOD(10,SC_NS);	
	sc_time DELAY(10,SC_NS);	
	sc_clock clock("clock",PERIOD,0.5,DELAY,true);

	Not_Gate not_gate("not_gate");
	Testbench test("test");

	sc_signal<bool> a_sg,  c_sg;

	not_gate.a_in(a_sg);
	not_gate.c_out(c_sg);

	test.clk_in(clock);
	test.c_in(c_sg);
	test.a_out(a_sg);

	sc_start();
	return 0;
}
