//Main.cpp
#include "Hugeint.h"
int main(void)
{
	Hugeint hi1(123456789);
	cout<<"hi1:"<<hi1<<endl;
	Hugeint hi2="123456789";
	cout<<"hi2:"<<hi2<<endl;
	cout<<"hi1=hi2:"<<(hi1=hi2)<<endl;
	cout<<"hi2[18]:"<<hi2[8]<<endl;
	cout<<-hi2<<endl;
	if(hi1<hi1) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	cout<<"ÇëÊäÈë:";cin>>hi1>>hi2;
	cout<<hi1<<endl;
	cout<<hi2<<endl;
	return 0;
}
