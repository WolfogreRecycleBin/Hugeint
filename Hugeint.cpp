//Hugeint.cpp
#include "Hugeint.h"
#include <iostream>
#include <iomanip>
using namespace std;


Hugeint::Hugeint(long long num, unsigned int rank)
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
	sign=(str[0]=='-')?-1:1;
	int num=0,rank=0;
	int i,r_=1;
	for(i=0;str[i];i++)
		;
	for(;i>=0;i--)
	{
		if(str[i]<='9' && str[i]>='0')
			{
				num+=(str[i]-'0')*r_;
				r_*=10;
				if(r_==B)
				{
					Insert(num,rank++);
					r_=1;
					num=0;
				}
			}
	}
	if(r_!=1) Insert(num,rank);
	Fix0();
}

Hugeint & Hugeint::operator=(const Hugeint & hi)
{
	if(&hi==this) return *this;
	sign=hi.sign;
	Node *p=NULL;
	while(head)
	{
		p=head;
		head=head->next;
		delete p;
	}
	for(p=hi.head;p!=NULL;p=p->next)
	{
		Insert(p->n,p->r);
	}
	return *this;
}

Hugeint::~Hugeint()
{
	Node *p=NULL;
	while(head)
	{
		p=head;
		head=head->next;
		delete p;
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

void Hugeint::Fix0()
{
	Node *end=NULL;
	for(end=head;end->next!=NULL;end=end->next);
	while(end->n==0 && end!=head)
	{
		end=end->prior;
		delete end->next;
		end->next=NULL;
	}
}
