#pragma once

#include <iostream>
#include "IntArray1.h"

class gArray : public Array {

	// 시작 인덱스
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
		const char* what() const { return "인덱스 하한 오류"; }
	};

	class HighIndex : public Array::BadIndex {
	public:
		int HighBound;
		HighIndex(int n, int h) : BadIndex(n), HighBound(h) {}
		const char* what() const { return "인덱스 상한 오류"; }
	};
};