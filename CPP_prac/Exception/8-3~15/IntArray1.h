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

	// Exception Class 선언
	// Exception 클래스 상속받음
	// 오류가 난 부분을 인수로 받아 wrongIndex에 초기화
	class BadIndex : public exception {
	public:
		int wrongIndex;
		BadIndex(int n) : wrongIndex(n),exception() {}
		const char* what() const { return "Array Exception::"; }
	};
};