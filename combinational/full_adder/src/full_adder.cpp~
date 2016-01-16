#include "full_adder.h"

Full_Adder::Full_Adder(sc_module_name nm):sc_module(nm){

	xor0 = new Xor_Gate("xor0");
	xor1 = new Xor_Gate("xor1");
	and0 = new And_Gate("and0");
	and1 = new And_Gate("and1");
	or0  = new Or_Gate("or0");


	xor0->a_in(x_in);
	xor0->b_in(y_in);
	xor0->c_out(s0_sg);

	xor1->a_in(s0_sg);
	xor1->b_in(ci_in);
	xor1->c_out(z_out);

	and0->a_in(s0_sg);
	and0->b_in(ci_in);
	and0->c_out(s1_sg);

	and1->a_in(x_in);
	and1->b_in(y_in);
	and1->c_out(s2_sg);

	or0->a_in(s1_sg);
	or0->b_in(s2_sg);
	or0->c_out(co_out);

}

Full_Adder::~Full_Adder(){

	delete xor0;
	delete xor1;
	delete and0;
	delete and1;
	delete or0;

}
