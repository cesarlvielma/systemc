/**
 * @author Cesar L. Vielma P.
 * @mail cesarlvielma@gmail.com
 * @date 2013-3-3
 * @brief  full adder substracter test
 **/

#include "testbench.h"

void Testbench::test(){

	int x, y , ci;

	cout<<"Time\tx\ty\tci\tz\tco"<<endl;
	cout<<"--------------------------------------------"<<endl;	
	srand(time(NULL));	
	for(int i =0; i<10; i++){

		x = rand()%4;
		y = rand()%4;
		ci= rand()%2;
		
	x_out.write(x);
	y_out.write(y);
	ci_out.write(ci);

	wait();
	print_strings();
	print_integers();	
	}
	sc_stop();

}

void Testbench::print_integers(){

	cout
		<< "\t("<< x_out.read()
		<<")\t("<< y_out.read()
		<<")\t("<< ci_out.read()
		<<")\t("<< z_in.read()
		<<")\t("<< co_in.read()<<")"<<endl;
	cout<<"--------------------------------------------"<<endl;
		

}

void Testbench::print_strings(){

	cout<<sc_time_stamp()
		<<"\t"<< x_out.read().to_string(SC_BIN).substr(3,5)
		<<"\t"<< y_out.read().to_string(SC_BIN).substr(3,5)
		<<"\t"<< ci_out.read()
		<<"\t"<< z_in.read().to_string(SC_BIN).substr(3,5)
		<<"\t"<< co_in.read()<<endl;
	

}

