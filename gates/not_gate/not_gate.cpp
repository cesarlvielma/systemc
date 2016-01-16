/**
 * @author Cesar L. Vielma P.
 * @mail cesarlvielma@gmail.com
 * @date 2013-3-3
 * @brief  Logic "not gate" described using systemC library
 **/

#include "not_gate.h"

void Not_Gate::operarion(){

	c_out.write( !a_in.read() );

}
