/**
 * @author Cesar L. Vielma P.
 * @mail cesarlvielma@gmail.com
 * @date 2013-3-3
 * @brief  Logic "and gate" described using systemC library
 **/

#include "and_gate.h"

void And_Gate::operation(){

	c_out.write( a_in.read() && b_in.read());

}
