//Main.cpp
#include "Hugeint.h"
int main(void)
{
	Hugeint hi1(123456789);
	cout<<"hi1:"<<hi1<<endl;
	Hugeint hi2="-987654321012345678900998877665544332211";
	cout<<"hi2:"<<hi2<<endl;
	cout<<"hi1=hi2:"<<(hi1=hi2)<<endl;
	cout<<"hi2[18]:"<<hi2[18]<<endl;
	cout<<-hi2<<endl;
	return 0;
}
