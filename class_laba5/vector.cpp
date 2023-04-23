#include "vector.h"
#include <iostream>
vector::~vector(void)
{
	if (beg != 0) delete[] beg;
	beg = 0;
}
vector::vector(int n)
{
	beg = new object*[n];
	size = n;
	cur = 0;
}
vector::vector(void)
{
	beg = 0;
	size = 0;
	cur = 0;
}
void vector::Add(object*p)//���������� �������� � ������
{
	if (cur < size)
	{
		beg[cur] = p;
		cur++;
	}
}
ostream& operator<<(ostream& out, const vector& v)
{
	if (v.size == 0) out << "������ " << endl;
	object** p = v.beg;//��������� ���� object
	for (int i = 0; i < v.cur;i++)
	{
		cout << i + 1 << " �������" << endl;
		(*p)->show();
		p++;
		cout << endl;
	}
	return out;
}
void vector::show()
{
	cout << "������ " << size << endl;
	cout << "������ �������� �������� " << cur << endl;
}