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
	Hugeint(long long num=0, unsigned int rank=0);//ToDo
	Hugeint(char str[10000]="0");//ToDo
	Hugeint & operator=(const Hugeint hi);//ToDo
	virtual ~Hugeint();//ToDo
	//���ط����������
	int & operator[](int index);//ToDo
	//����ȡ�������
	Hugeint operator-();//ToDo
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
	friend ostream & operator<<(ostream &out, const Hugeint &hi);//ToDo
	friend istream & operator>>(istream &in, Hugeint &hi);//ToDo
protected:
	void Insert(Node & nd, unsigned int rank);//ToDo			//��nd���뵽rank����Ӧ�ô��ڵ�λ�ã���������
	void Delete(Node & nd);	//ToDo							//ɾ�����
	Node & Find(unsigned int rank=0);//ToDo						//Ѱ�ҷ���rank����
	void FixList();//ToDo											//��������
private:
	int sign;												//1��ʾ������-1��ʾ����
	Node *head;
};
#endif
