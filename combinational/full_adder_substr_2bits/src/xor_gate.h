/**
 * @author Cesar L. Vielma P.
 * @mail cesarlvielma@gmail.com
 * @date 2013-3-3
 * @brief  Logic "xor gate" described using systemC library
 **/

#ifndef XOR_GATE_H
#define XOR_GATE_H

#include <systemc.h>

class Xor_Gate :public sc_module{

    // public ports
	public:
		sc_in<bool> a_in;
		sc_in<bool> b_in;
		sc_out<bool> c_out;

    // constructor
		SC_CTOR(Xor_Gate){
			SC_METHOD(operation);
				sensitive<< a_in <<b_in; // sensitivity list
} 


	private:
		void operation();


};
#endif
