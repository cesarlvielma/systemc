#include "testbench.h"

void Testbench::test(){

	cout<<"time \tx\ty\tci\tco\tz "<<endl;
	cout<<"---------------------------------------------------"<<endl;

	x_out.write(0);
	y_out.write(0);
	ci_out.write(0);
	wait();

	cout<<sc_time_stamp()<<"\t"
		<<x_out.read()<<"\t"
		<<y_out.read()<<"\t"
		<<ci_out.read()<<"\t"
		<<z_in.read()<<"\t"
		<<co_in.read()<<"\t"<<endl;

	x_out.write(0);
	y_out.write(0);
	ci_out.write(1);
	wait();

	cout<<sc_time_stamp()<<"\t"
		<<x_out.read()<<"\t"
		<<y_out.read()<<"\t"
		<<ci_out.read()<<"\t"
		<<z_in.read()<<"\t"
		<<co_in.read()<<"\t"<<endl;

	x_out.write(0);
	y_out.write(1);
	ci_out.write(0);
	wait();

	cout<<sc_time_stamp()<<"\t"
		<<x_out.read()<<"\t"
		<<y_out.read()<<"\t"
		<<ci_out.read()<<"\t"
		<<z_in.read()<<"\t"
		<<co_in.read()<<"\t"<<endl;

	x_out.write(0);
	y_out.write(1);
	ci_out.write(1);
	wait();

	cout<<sc_time_stamp()<<"\t"
		<<x_out.read()<<"\t"
		<<y_out.read()<<"\t"
		<<ci_out.read()<<"\t"
		<<z_in.read()<<"\t"
		<<co_in.read()<<"\t"<<endl;

	x_out.write(1);
	y_out.write(0);
	ci_out.write(0);
	wait();

	cout<<sc_time_stamp()<<"\t"
		<<x_out.read()<<"\t"
		<<y_out.read()<<"\t"
		<<ci_out.read()<<"\t"
		<<z_in.read()<<"\t"
		<<co_in.read()<<"\t"<<endl;

	x_out.write(1);
	y_out.write(0);
	ci_out.write(1);
	wait();

	cout<<sc_time_stamp()<<"\t"
		<<x_out.read()<<"\t"
		<<y_out.read()<<"\t"
		<<ci_out.read()<<"\t"
		<<z_in.read()<<"\t"
		<<co_in.read()<<"\t"<<endl;

	x_out.write(1);
	y_out.write(1);
	ci_out.write(0);
	wait();

	cout<<sc_time_stamp()<<"\t"
		<<x_out.read()<<"\t"
		<<y_out.read()<<"\t"
		<<ci_out.read()<<"\t"
		<<z_in.read()<<"\t"
		<<co_in.read()<<"\t"<<endl;

	x_out.write(1);
	y_out.write(1);
	ci_out.write(1);
	wait();

	cout<<sc_time_stamp()<<"\t"
		<<x_out.read()<<"\t"
		<<y_out.read()<<"\t"
		<<ci_out.read()<<"\t"
		<<z_in.read()<<"\t"
		<<co_in.read()<<"\t"<<endl;

	sc_stop();
}
