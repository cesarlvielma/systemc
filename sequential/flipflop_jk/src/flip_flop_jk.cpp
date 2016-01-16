/**
 * @author Cesar L. Vielma P.
 * @mail cesarlvielma@gmail.com
 * @date 2013-3-3
 * @brief  flip-flop jk described in high level using systemC library
 **/

#include "flip_flop_jk.h"
#include <iostream>
using namespace std;
Flip_Flop_JK::Flip_Flop_JK(sc_module_name nm):sc_module(nm){


	SC_METHOD(next_state)
		sensitive<<clk_in.pos();

		state=0;

}


void Flip_Flop_JK::next_state(){

	if( not j_in.read() and k_in.read() )
		state=false;

	else if( j_in.read() and not k_in.read() )
		state=true;

	else if( j_in.read() and k_in.read() )
		state=not state;

		q_out.write(state);
		nq_out.write(not state);

}
