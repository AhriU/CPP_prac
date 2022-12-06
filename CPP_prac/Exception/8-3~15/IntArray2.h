#pragma once

#include <iostream>
#include "IntArray1.h"

class gArray : public Array {

	// ���� �ε���
	int Base;
public:
	gArray(int b, int s) : Base(b), Array(s) {}
	int& operator[](int Offset);
	int operator[](int Offset)const;
	int GetBase() const { return Base; }
	friend ostream& operator << (ostream&, gArray&);

	class LowIndex : public Array::BadIndex {
	public:
		int LowBound;
		LowIndex(int n, int l) : BadIndex(n), LowBound(l) {}
		const char* what() const { return "�ε��� ���� ����"; }
	};

	class HighIndex : public Array::BadIndex {
	public:
		int HighBound;
		HighIndex(int n, int h) : BadIndex(n), HighBound(h) {}
		const char* what() const { return "�ε��� ���� ����"; }
	};
};