#pragma once

#include <iostream>
using namespace std;

class Mystring {

	int len;
	int bufSize;
	char* buf;
	Mystring(int s);
	
public:

	// ������
	Mystring();
	Mystring(const char* str);

	// ���������
	Mystring(const Mystring& mstr);

	// �̵�������
	Mystring(Mystring&& mstr);

	//�Ҹ���
	~Mystring();

	// ���� ��ȯ ����Լ�
	int length() const;

	//���� ������
	Mystring& operator = (const Mystring& mstr);

	// �̵� ���� ������
	Mystring& operator = (Mystring&& mstr);

	// ���ڿ� ���� ������
	Mystring operator + (const Mystring& mstr) const;
	Mystring& operator += (const Mystring& mstr);

	// ���ڿ� bool ������
	bool operator == (const Mystring& mstr) const;
	bool operator > (const Mystring& mstr) const;
	bool operator < (const Mystring& mstr) const;

	// [] ������
	char& operator [] (int i);
	char operator [] (int i) const;

	// ostream ���
	friend ostream& operator << (ostream& os, const Mystring& mstr);

};


// ostream ��� ��
inline ostream& operator << (ostream& os, const Mystring& mstr) {
	
	os << mstr.buf;
	return os;
}