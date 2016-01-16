/**
 * @author Cesar L. Vielma P.
 * @mail cesarlvielma@gmail.com
 * @date 2013-3-3
 * @brief  full adder substracter described using systemC library
 **/

#include"full_adder_substr_2b.h"
#include <iostream>
using namespace std;
Full_Adder_Substr_2b::Full_Adder_Substr_2b(sc_module_name nm):sc_module(nm){

	fa0 = new Full_Adder("fa0");
	fa1 = new Full_Adder("fa1");

	fa0->x_in(x0_sg);
	fa0->y_in(y0_sg);
	fa0->ci_in(ci_in);
	fa0->co_out(c_sg);
	fa0->z_out(z0_sg);

	fa1->x_in(x1_sg);
	fa1->y_in(y1_sg);
	fa1->ci_in(c_sg);
	fa1->co_out(co_out);
	fa1->z_out(z1_sg);

	SC_METHOD(split);
		sensitive<< x_in<< yComp_sg;

	SC_METHOD(join);
		sensitive<< z0_sg<< z1_sg;

	SC_METHOD(high_level_complementizer);
		sensitive<< y_in << ci_in;

}

void Full_Adder_Substr_2b::split(){

	sc_uint<2> x_tmp = x_in.read();
	sc_uint<2> y_tmp = yComp_sg.read();

	x0_sg.write( x_tmp.range(0,0) );
	x1_sg.write( x_tmp.range(1,1) );

	y0_sg.write( y_tmp.range(0,0) );
	y1_sg.write( y_tmp.range(1,1) );
	
	sc_uint<2> x_aux = x_tmp; 

}

void Full_Adder_Substr_2b::join(){

	sc_uint<2> z_tmp;
	
	z_tmp[0]=z0_sg.read();
	z_tmp[1]=z1_sg.read();

	z_out.write(z_tmp);
}

void Full_Adder_Substr_2b::high_level_complementizer(){

	sc_uint<2> y_tmp = y_in.read();
	sc_uint<2> yComp_tmp ;

	if(ci_in.read()==1){
		for(int i=0 ; i<2 ; i++){
		
			if(y_tmp[i]==1)		
				yComp_tmp[i]=0;

			else
				yComp_tmp[i]=1;
	
	
		}

}
	else
		yComp_tmp=y_in.read();

	yComp_sg.write(yComp_tmp);


}
Full_Adder_Substr_2b::~Full_Adder_Substr_2b(){
	delete fa0;
	delete fa1;
	
}
