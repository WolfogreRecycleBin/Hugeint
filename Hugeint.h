//Hugeint.h
#ifndef HUGEINT_H
#define HUGEINT_H
#define B 1000000000										//����BΪbillion
#include <iostream>
using namespace std;
struct Node
{
	unsigned int r;											//����
	int n;													//ֵ
	Node *prior,*next;										//ǰָ�롢��ָ��
};
class Hugeint
{
public:
	//����������
	Hugeint(long long num=0, unsigned int rank=0);
	Hugeint(const char *str);
	Hugeint & operator=(const Hugeint & hi);
	virtual ~Hugeint();
	//���ط����������
	int operator[](int index);
	//����ȡ�������
	Hugeint operator-();
	//�������������
	friend Hugeint operator+(const Hugeint hi1, const Hugeint hi2);//ToDo
	friend Hugeint operator-(const Hugeint hi1, const Hugeint hi2);//ToDo
	friend Hugeint operator*(const Hugeint hi1, const Hugeint hi2);//ToDo
	friend Hugeint operator/(const Hugeint hi1, const Hugeint hi2);//ToDo
	friend Hugeint operator%(const Hugeint hi1, const Hugeint hi2);//ToDo
	//���ص�����ֵ�����
	Hugeint & operator+=(const Hugeint hi);//ToDo
	Hugeint & operator-=(const Hugeint hi);//ToDo
	Hugeint & operator*=(const Hugeint hi);//ToDo
	Hugeint & operator/=(const Hugeint hi);//ToDo
	Hugeint & operator%=(const Hugeint hi);//ToDo
	//����ǰ�������������
	Hugeint & operator++();//ToDo
	Hugeint & operator--();//ToDo
	Hugeint operator++(int);//ToDo
	Hugeint operator--(int);//ToDo
	//���ع�ϵ����
	friend bool operator==(const Hugeint &hi1, const Hugeint &hi2);//ToDo
	friend bool operator!=(const Hugeint &hi1, const Hugeint &hi2);//ToDo
	friend bool operator> (const Hugeint &hi1, const Hugeint &hi2);//ToDo
	friend bool operator>=(const Hugeint &hi1, const Hugeint &hi2);//ToDo
	friend bool operator< (const Hugeint &hi1, const Hugeint &hi2);//ToDo
	friend bool operator<=(const Hugeint &hi1, const Hugeint &hi2);//ToDo
	//����I/O�������
	friend ostream & operator<<(ostream &out, const Hugeint &hi);
	friend istream & operator>>(istream &in, Hugeint &hi);//ToDo
protected:
	void Insert(int num, unsigned int rank);				//��nd���뵽rank����Ӧ�ô��ڵ�λ�ã���������
	Node & Find(unsigned int rank=0);//ToDo						//Ѱ�ҷ���rank����
	void Fix0();											//��������
private:
	int sign;												//1��ʾ������-1��ʾ����
	Node *head;
};
#endif
