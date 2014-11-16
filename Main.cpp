//Main.cpp
#include "Hugeint.h"
int main(void)
{
	Hugeint hi1(123456789);
	cout<<"hi1:"<<hi1<<endl;
	Hugeint hi2="987654321012345678900998877665544332211";
	cout<<"hi2:"<<hi2<<endl;
	//cout<<"hi2=hi1:"<<(hi2=hi1)<<endl;
	cout<<"hi2[19]:"<<hi2[19]<<endl;
	for(int i=1;i<100;i++) cout<<hi2[i];
	return 0;
}
