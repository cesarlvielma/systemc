/**
 * @author Cesar L. Vielma P.
 * @mail cesarlvielma@gmail.com
 * @date 2013-3-3
 * @brief  flip-flop jk described in high level using systemC library
 **/

#include "flip_flop_jk.h"
#include "testbench.h"
#include <systemc.h>

int sc_main(int argc, char * argv[]){

	sc_time PERIOD(10,SC_NS);
	sc_time DELAY(10,SC_NS);

	sc_clock clock("clock",PERIOD,0.5,DELAY,true);

	Flip_Flop_JK ff("ff");
	Testbench tb("tb");

	sc_signal<bool> s0_sg,s1_sg,s2_sg,s3_sg;
	
	ff.j_in(s0_sg);
	ff.k_in(s1_sg);
	ff.q_out(s2_sg);
	ff.nq_out(s3_sg);
	ff.clk_in(clock);

	tb.j_out(s0_sg);
	tb.k_out(s1_sg);
	tb.q_in(s2_sg);
	tb.nq_in(s3_sg);
	tb.clock_in(clock);

	sc_start();

	return 0;

}
