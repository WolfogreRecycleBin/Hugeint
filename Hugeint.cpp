//Hugeint.cpp
#include "Hugeint.h"
#include <iostream>
using namespace std;
Hugeint::Hugeint(long long num, unsigned int rank)
{
	if(num>=0) sign=1;
	else
	{
		sign=-1;
		num=-num;
	}
	return;
}

Hugeint::~Hugeint()
{
	//ToDo
}