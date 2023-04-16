#pragma once
#include <string>

using namespace std;

class student
{
	string fio;
	string group;
	double sred;
public:
	//������������ � � ��� ����������
	student();
	student(string, string, double);
	//����������� � ����������
	student(const student&);
	~student();
	//���������
	string get_fio();
	string get_group();
	float get_sred();
	//������������
	void set_fio(string);
	void set_group(string);
	void set_sred(double);

	void print();
};