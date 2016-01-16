/**
 * @author Cesar L. Vielma P.
 * @mail cesarlvielma@gmail.com
 * @date 2013-3-3
 * @brief  Logic "not gate" described using systemC library
 **/

#ifndef NOT_GATE_H
#define NOT_GATE_H

#include <systemc.h>

class Not_Gate :public sc_module{

    // public ports
	public:
		sc_in<bool> a_in;
		sc_out<bool> c_out;

    // constructor
		SC_CTOR(Not_Gate){
			SC_METHOD(operation);
				sensitive<< a_in ; // sensitivity list
} 


	private:
		void operation();


};
#endif
