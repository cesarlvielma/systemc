/**
 * @author Cesar L. Vielma P.
 * @mail cesarlvielma@gmail.com
 * @date 2013-3-3
 * @brief  test for not gate.
 **/

#include "TestBench.h"

void TestBench::test(){

cout<<"Time \t x \t y "<<endl;
	cout<<"---------------------------------------------------"<<endl;

	a_out.write(0);

	wait();
	cout<<sc_time_stamp()<<"\t"
		<<a_out.read()<<"\t"
		<<c_in.read()<<"\t"<<endl;

	a_out.write(1);

	wait();
	cout<<sc_time_stamp()<<"\t"
		<<a_out.read()<<"\t"
		<<c_in.read()<<"\t"<<endl;

	sc_stop();
}
