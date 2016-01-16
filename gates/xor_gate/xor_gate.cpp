/**
 * @author Cesar L. Vielma P.
 * @mail cesarlvielma@gmail.com
 * @date 2013-3-3
 * @brief  Logic "xor gate" described using systemC library
 **/

#include "xor_gate.h"

void Xor_Gate::operation(){

	c_out.write( a_in.read() ^ b_in.read());

}
