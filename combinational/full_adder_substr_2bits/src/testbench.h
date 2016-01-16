/**
 * @author Cesar L. Vielma P.
 * @mail cesarlvielma@gmail.com
 * @date 2013-3-3
 * @brief  full adder substracter test
 **/

#ifndef TESTBENCH_H
#define TESTBENCH_H
#include <systemc.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

class Testbench : public sc_module{

	public:

		sc_in<bool> clk_in;
		sc_in<bool> co_in;
		sc_in< sc_uint<2> > z_in;
		sc_out< sc_uint<2> > x_out;
		sc_out< sc_uint<2> > y_out;
		sc_out<bool> ci_out;

		SC_CTOR(Testbench){
			SC_THREAD(test);
				sensitive<< clk_in;
}	
		~Testbench(){
		}


	private:

		void test();
		void print_integers();
		void print_strings();

};
#endif
