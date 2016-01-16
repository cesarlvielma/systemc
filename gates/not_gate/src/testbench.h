/**
 * @author Cesar L. Vielma P.
 * @mail cesarlvielma@gmail.com
 * @date 2013-3-3
 * @brief  test for or gate.
 **/

#ifndef TESTBENCH_H
#define TESTBENCH_H
#include <systemc.h>
#include <iostream>
using namespace std;

class Testbench : public sc_module{

	public:
		sc_in<bool> clk_in;
		sc_in<bool> c_in;
		sc_out<bool> a_out;
		
		SC_CTOR(Testbench){
			SC_THREAD(test);
				sensitive<<clk_in.pos();
				dont_initialize();
}

	private:
		void test();
};
#endif

