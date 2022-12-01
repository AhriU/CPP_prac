#pragma once

#include <iostream>
using namespace std;

class Mystring {

	int len;
	int bufSize;
	char* buf;
	Mystring(int s);
	
public:

	// 생성자
	Mystring();
	Mystring(const char* str);

	// 복사생성자
	Mystring(const Mystring& mstr);

	// 이동생성자
	Mystring(Mystring&& mstr);

	//소멸자
	~Mystring();

	// 길이 반환 멤버함수
	int length() const;

	//대입 연산자
	Mystring& operator = (const Mystring& mstr);

	// 이동 대입 연산자
	Mystring& operator = (Mystring&& mstr);

	// 문자열 연결 연산자
	Mystring operator + (const Mystring& mstr) const;
	Mystring& operator += (const Mystring& mstr);

	// 문자열 bool 연산자
	bool operator == (const Mystring& mstr) const;
	bool operator > (const Mystring& mstr) const;
	bool operator < (const Mystring& mstr) const;

	// [] 연산자
	char& operator [] (int i);
	char operator [] (int i) const;

	// ostream 출력
	friend ostream& operator << (ostream& os, const Mystring& mstr);

};


// ostream 출력 상세
inline ostream& operator << (ostream& os, const Mystring& mstr) {
	
	os << mstr.buf;
	return os;
}