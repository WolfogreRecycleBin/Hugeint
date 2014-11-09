//Main.cpp
#include "Hugeint.h"
int main(void)
{
	Hugeint hi(B*3,0);
	cout<<hi<<endl;
	cout<<sizeof(short int)<<"   "<<sizeof(int)<<"   "<<sizeof(long long int)<<endl;
	long long int n;
	n=B*10;
	cout<<n<<endl;
	return 0;
}
