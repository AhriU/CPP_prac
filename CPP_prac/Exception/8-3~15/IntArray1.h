#pragma once

#include <iostream>
#include <exception>
using namespace std;

const int DefaultSize = 10;
class Array {
protected:
	int* Buf;
	int Size;
public:
	Array(int s = DefaultSize);
	virtual ~Array() { delete[] Buf; }
	int& operator[](int Offset);
	const int& operator[](int Offset) const;
	int GetSize() const { return Size; }
	friend ostream& operator << (ostream&, Array&);

	// Exception Class ����
	// Exception Ŭ���� ��ӹ���
	// ������ �� �κ��� �μ��� �޾� wrongIndex�� �ʱ�ȭ
	class BadIndex : public exception {
	public:
		int wrongIndex;
		BadIndex(int n) : wrongIndex(n),exception() {}
		const char* what() const { return "Array Exception::"; }
	};
};