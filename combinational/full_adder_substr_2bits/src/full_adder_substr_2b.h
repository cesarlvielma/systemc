/**
 * @author Cesar L. Vielma P.
 * @mail cesarlvielma@gmail.com
 * @date 2013-3-3
 * @brief  full adder substracter described using systemC library
 **/

#ifndef FULLADDERSUBSTR2B_H
#define FULLADDERSUBSTR2B_H
#include <systemc.h>
#include "full_adder.h"

class Full_Adder_Substr_2b : public sc_module{

	public:
		/*puerto de entrada que soporta como tipo de dato un vector de 2 bits*/
		sc_in< sc_uint<2> > x_in;
		/**/
		sc_in< sc_uint<2> > y_in;
		sc_in<bool> ci_in;
		sc_out<bool> co_out;
		/*puerto de salida que soporta como tipo de dato un vector de 2 bits*/
		sc_out< sc_uint<2> > z_out;
		/**/

		SC_CTOR(Full_Adder_Substr_2b);
		~Full_Adder_Substr_2b();


	private:

	Full_Adder *fa0;
	Full_Adder *fa1;
	/*senal que soporta como tipo de dato un vector de 2 bits*/
	sc_signal< sc_uint<2> > yComp_sg;
	/**/
	sc_signal<bool> c_sg;
	sc_signal<bool> x0_sg;
	sc_signal<bool> x1_sg;
	sc_signal<bool> y0_sg;
	sc_signal<bool> y1_sg;
	sc_signal<bool> z0_sg;
	sc_signal<bool> z1_sg;

	void split();
	void join();
	/*Se implementa un Complementador a 2 en el ultimo
	nivel de coneccion para que el Full Adder tambien
	sea capaz de restar*/
	void high_level_complementizer();
	/**/
};
#endif
