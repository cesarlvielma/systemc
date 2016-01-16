/**
 * @author Cesar L. Vielma P.
 * @mail cesarlvielma@gmail.com
 * @date 2013-3-3
 * @brief  flip-flop jk described in high level using systemC library test.
 **/

#ifndef TESTBENCH_H
#define TESTBENCH_H
#include <systemc.h>
#include <iostream>
using namespace std;
class Testbench:public sc_module{

	public:

		sc_in<bool> clock_in;
		sc_in<bool> q_in;
		sc_in<bool> nq_in;
		sc_out<bool> j_out;
		sc_out<bool> k_out;

		SC_CTOR(Testbench){

			SC_THREAD(test);
				sensitive<<clock_in.neg();
				dont_initialize();
}
	private:

	void test();
	void print();
};
#endif
