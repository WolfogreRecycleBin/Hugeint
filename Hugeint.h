//Hugeint.h
#ifndef HUGEINT_H
#define HUGEINT_H
#define B 1000000000										//����BΪbillion
#include <iostream>
using namespace std;
struct Node
{
	int r;													//����
	int n;													//ֵ
	Node *prior,*next;										//ǰָ�롢��ָ��
};
class Hugeint
{
public:
	Hugeint(long long num=0, unsigned int rank=0);
	Hugeint(char str[10000]="0");
	Hugeint & operator=(const Hugeint hi);
	virtual ~Hugeint();
	//���ط����������
	int & operator[](int index);
	//����ȡ�������
	Hugeint operator-();
	//�������������
	friend Hugeint operator+(const Hugeint hi1, const Hugeint hi2);
	friend Hugeint operator-(const Hugeint hi1, const Hugeint hi2);
	friend Hugeint operator*(const Hugeint hi1, const Hugeint hi2);
	friend Hugeint operator/(const Hugeint hi1, const Hugeint hi2);
	friend Hugeint operator%(const Hugeint hi1, const Hugeint hi2);
	//���ص�����ֵ�����
	Hugeint & operator+=(const Hugeint hi);
	Hugeint & operator-=(const Hugeint hi);
	Hugeint & operator*=(const Hugeint hi);
	Hugeint & operator/=(const Hugeint hi);
	Hugeint & operator%=(const Hugeint hi);
	//����ǰ�������������
	Hugeint & operator++();
	Hugeint & operator--();
	Hugeint operator++(int);
	Hugeint operator--(int);
	//���ع�ϵ����
	friend bool operator==(const Hugeint &hi1, const Hugeint &hi2);
	friend bool operator!=(const Hugeint &hi1, const Hugeint &hi2);
	friend bool operator> (const Hugeint &hi1, const Hugeint &hi2);
	friend bool operator>=(const Hugeint &hi1, const Hugeint &hi2);
	friend bool operator< (const Hugeint &hi1, const Hugeint &hi2);
	friend bool operator<=(const Hugeint &hi1, const Hugeint &hi2);
	//����I/O�������
	friend ostream & operator<<(ostream &out, const Hugeint &hi);
	friend istream & operator>>(istream &in, Hugeint &hi);

private:
	int sign;												//1��ʾ������-1��ʾ����
	Node *head;
};
#endif
