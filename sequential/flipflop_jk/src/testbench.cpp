/**
 * @author Cesar L. Vielma P.
 * @mail cesarlvielma@gmail.com
 * @date 2013-3-3
 * @brief  flip-flop jk described in high level using systemC library test
 **/

#include "testbench.h"

void Testbench::test(){

	cout<<"J\tK\tQ\tnQ"<<endl;
	cout<<"---------------------------"<<endl;

    j_out.write(0);
	k_out.write(0);		

	wait();
	print();

	j_out.write(0);
	k_out.write(1);	

	wait();
	print();

	j_out.write(1);
	k_out.write(0);		

	wait();
	print();


	j_out.write(1);
	k_out.write(0);	

	wait();
	print();

	j_out.write(0);
	k_out.write(0);	

	wait();
	print();


	j_out.write(0);
	k_out.write(1);	

	wait();
	print();

   j_out.write(1);
	k_out.write(1);		

	wait();
	print();


   j_out.write(0);
	k_out.write(1);		

	wait();
	print();


   j_out.write(1);
	k_out.write(0);		

	wait();
	print();


	sc_stop();
}

void Testbench::print(){

	cout<<j_out.read()<<"\t"
		<<k_out.read()<<"\t"
		<<q_in.read()<<"\t"
		<<nq_in.read()<<endl;
}

















