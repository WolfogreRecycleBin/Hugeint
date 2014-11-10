//Hugeint.cpp
#include "Hugeint.h"
#include <iostream>
#include <iomanip>
using namespace std;


Hugeint::Hugeint(long long int num, unsigned int rank)//ToDo
{
	head=NULL;
	Insert(0,0);
	if(num>=0) sign=1;
	else
	{
		sign=-1;
		num=-num;
	}
	long long h1,h0;
	h0=num%B;
	h1=num/B;
	if(h0) Insert(h0,rank);
	if(h1) Insert(h1,rank+1);
	return;
}

Hugeint::Hugeint(const char *str)
{
	head=NULL;
	Insert(0,0);
	int num=0,rank=0;
	int i,r_=1;/////////////////////////////////
	for(i=0;str[i];i++)
		;
	for(;i>=0;i++)
	{
		if(str[i]<='9' && str[i]>='0')
			{
				num
				j++;
			}
	}
	// iostream io;
	// int i,j,count=0;
	// for(i=0;str[i];i++);
	// char *tstr=new char [i];
	// for(i=0,j=0;str[i];i++)
	// {
	// 	if(str[i]<='9' && str[i]>='0')
	// 	{
	// 		tstr[j]=str[i];
	// 		j++;
	// 	}
	// }
	// tstr[j]='\0';
	// for(j=0;tstr[j];j++);
	// for(i=0;i<=j%9-1;++) io<<str[i];
	// io<<' ';
	// for(;str[i];i++)
	// {
	// 	if//???
	// }
}

Hugeint::~Hugeint()
{
	while(head)
	{
		head=head->next;
		delete head->prior;
		head->prior=NULL:
	}
}

ostream & operator<<(ostream &out, const Hugeint &hi)
{
	if(hi.sign==-1) out<<'-';
	Node *p=NULL;
	for(p=hi.head;p->next!=NULL;p=p->next);
	out<<p->n;
	p=p->prior;
	for(;p;p=p->prior)
	{
		out<<setw(9)<<setfill('0')<<p->n;
	}
	return out;
}

void Hugeint::Insert(int num, unsigned int rank)//ToDo
{
	if(head==NULL)										//无论怎样头节点不可以是空
	{
		head=new Node;
		head->next=head->prior=NULL;
		head->r=head->n=0;
	}
	Node *p=head;
	while(p->r<rank)
	{
		if(p->next==NULL)
		{
			Node *temp=new Node;
			temp->r=p->r+1;
			temp->n=0;
			p->next=temp;
			temp->next=NULL;
			temp->prior=p;
		}
		p=p->next;
	}
	p->n=num;
	p->r=rank;
}
