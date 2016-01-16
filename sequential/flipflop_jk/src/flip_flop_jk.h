/**
 * @author Cesar L. Vielma P.
 * @mail cesarlvielma@gmail.com
 * @date 2013-3-3
 * @brief  flip-flop jk described in high level using systemC library
 **/

#ifndef FLIP_FLOP_JK_H
#define FLIP_FLOP_JK_H
#include <systemc.h>

class Flip_Flop_JK : public sc_module{

	public:
		sc_in<bool> clk_in;
		sc_in<bool> j_in;
		sc_in<bool> k_in;
		sc_out<bool> nq_out;		
		sc_out<bool> q_out;

		SC_CTOR(Flip_Flop_JK);

	private:
		void next_state();
		bool state;

};
#endif
