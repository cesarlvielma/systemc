/**
 * @author Cesar L. Vielma P.
 * @mail cesarlvielma@gmail.com
 * @date 2013-3-3
 * @brief  full adder described using systemC library
 **/

#ifndef FULLADDER_H
#define FULLADDER_H
#include <systemc.h>
#include "xor_gate.h"
#include "and_gate.h"
#include "or_gate.h"

class Full_Adder : public sc_module{

	public:

	sc_in<bool> x_in;
	sc_in<bool> y_in;
	sc_in<bool> ci_in;
	sc_out<bool> z_out;
	sc_out<bool> co_out;

	SC_CTOR(Full_Adder);
	~Full_Adder();

	private:
	
	Xor_Gate	*xor0;
	Xor_Gate *xor1;
	And_Gate *and0;
	And_Gate *and1;
	Or_Gate  *or0;

	sc_signal<bool> s0_sg;
	sc_signal<bool> s1_sg;
	sc_signal<bool> s2_sg;

};
#endif
