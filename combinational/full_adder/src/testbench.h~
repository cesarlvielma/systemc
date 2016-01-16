#ifndef TESTBENCH_H
#define TESTBENCH_H
#include <systemc.h>
#include <iostream>
using namespace std;

class Testbench : public sc_module{

	public:
		sc_in<bool> clk_in;
		sc_in<bool> co_in;
		sc_in<bool> z_in;
		sc_out<bool> x_out;
		sc_out<bool> y_out;
		sc_out<bool> ci_out;
		
		SC_CTOR(Testbench){
			SC_THREAD(test);
				sensitive<<clk_in.pos();
				dont_initialize();
}

	private:
		void test();
};
#endif

