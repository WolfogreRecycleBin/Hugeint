//Hugeint.h
#ifndef HUGEINT_H
#define HUGEINT_H
#define B 1000000000										//定义B为billion
#include <iostream>
using namespace std;
struct Node
{
	int r;													//阶数
	int n;													//值
	Node *prior,*next;										//前指针、后指针
};
class Hugeint
{
public:
	Hugeint(long long num=0, unsigned int rank=0);
	Hugeint(char str[10000]="0");
	Hugeint & operator=(const Hugeint hi);
	virtual ~Hugeint();
	//重载方括号运算符
	int & operator[](int index);
	//重载取负运算符
	Hugeint operator-();
	//重载算术运算符
	friend Hugeint operator+(const Hugeint hi1, const Hugeint hi2);
	friend Hugeint operator-(const Hugeint hi1, const Hugeint hi2);
	friend Hugeint operator*(const Hugeint hi1, const Hugeint hi2);
	friend Hugeint operator/(const Hugeint hi1, const Hugeint hi2);
	friend Hugeint operator%(const Hugeint hi1, const Hugeint hi2);
	//重载迭代赋值运算符
	Hugeint & operator+=(const Hugeint hi);
	Hugeint & operator-=(const Hugeint hi);
	Hugeint & operator*=(const Hugeint hi);
	Hugeint & operator/=(const Hugeint hi);
	Hugeint & operator%=(const Hugeint hi);
	//重载前后增减量运算符
	Hugeint & operator++();
	Hugeint & operator--();
	Hugeint operator++(int);
	Hugeint operator--(int);
	//重载关系运算
	friend bool operator==(const Hugeint &hi1, const Hugeint &hi2);
	friend bool operator!=(const Hugeint &hi1, const Hugeint &hi2);
	friend bool operator> (const Hugeint &hi1, const Hugeint &hi2);
	friend bool operator>=(const Hugeint &hi1, const Hugeint &hi2);
	friend bool operator< (const Hugeint &hi1, const Hugeint &hi2);
	friend bool operator<=(const Hugeint &hi1, const Hugeint &hi2);
	//重载I/O流运算符
	friend ostream & operator<<(ostream &out, const Hugeint &hi);
	friend istream & operator>>(istream &in, Hugeint &hi);

private:
	int sign;												//1表示正数，-1表示负数
	Node *head;
};
#endif
