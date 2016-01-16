/**
 * @author Cesar L. Vielma P.
 * @mail cesarlvielma@gmail.com
 * @date 2013-3-3
 * @brief  Logic "nand gate" described using systemC library
 **/

#include "nand_gate.h"

void Nand_Gate::operarion(){

	c_out.write( !( a_in.read() && b_in.read() ) );

}
