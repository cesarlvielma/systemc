/**
 * @author Cesar L. Vielma P.
 * @mail cesarlvielma@gmail.com
 * @date 2013-3-3
 * @brief  Logic "or gate" described using systemC library
 **/

#include "or_gate.h"

void Or_Gate::operation(){

	c_out.write( a_in.read() || b_in.read());

}
