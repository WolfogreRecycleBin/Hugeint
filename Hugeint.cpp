//Hugeint.cpp
#include "Hugeint.h"
#include <iostream>
using namespace std;


Hugeint::Hugeint(long long num, unsigned int rank)//ToDo
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

void Hugeint::Insert(int num, unsigned int rank)//ToDo
{
	Node *p=NULL;
	for(p=head;p->next!=NULL;p=p->next);					//pÖ¸ÕëÒÆÏòÁ´±íÄ©Î²
	}
	}
	// if(rank==0)
	// {
	// 	if(head) head->n=num;
	// 	else
	// 	{
	// 		head=new Node;
	// 		head->r=0;
	// 		head->n=num;
	// 		head->next=head->prior=NULL;
	// 	}
	// 	return;
	// }
	// else
	// {
	// 	Node *p=head;
	// 	while(p)
	// 	{
	// 		if(p->r<rank) p=p->next;
	// 		else break; 
	// 	}
	// 	if(p) p->n=num;
	// 	else
	// }
}
