#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "MyString.h"
using namespace std;

// private 생성자(문자열 더할 때 사용)
Mystring::Mystring(int s) : len(s), bufSize(s) {
	buf = new char[s + 1];
	buf[0] = '\0';
}


// 인수가 없을 때의 생성자
Mystring::Mystring() : len{ 0 }, bufSize{ 0 } {
	buf = new char[1];
	buf[0] = '\0';
}

// 문자열을 인수로 받을 때의 생성자
Mystring::Mystring(const char* str) {
	len = bufSize = strlen(str);
	buf = new char[len + 1];
	strcpy(buf, str);
}

// 복사 생성자
Mystring::Mystring(const Mystring& mstr) {
	delete[] buf;
	len = mstr.len;
	bufSize = mstr.bufSize;
	buf = new char[len + 1];
	strcpy(buf, mstr.buf);
}

// 이동 생성자
Mystring::Mystring(Mystring&& mstr)
	: len{ mstr.len }, bufSize{ mstr.bufSize }, buf{mstr.buf}
{
	mstr.buf = nullptr;
}

// 소멸자
Mystring::~Mystring() {
	delete[] buf;
}

// 길이 반환 멤버함수
int Mystring::length() const {
	return len;
}

// 대입 연산자
Mystring& Mystring::operator=(const Mystring& mstr) {
	if (bufSize < mstr.len) {
		delete[] buf;
		len = bufSize = mstr.len;
		buf = new char[len + 1];
	}
	else
		len = mstr.len;
	strcpy(buf, mstr.buf);
	return *this;
}

// 이동 대입 연산자
Mystring& Mystring::operator=(Mystring&& mstr) {
	delete[] buf;
	len = mstr.len;
	bufSize = mstr.bufSize;
	buf = mstr.buf;
	mstr.buf = nullptr;
	return *this;
}

// 문자열 연결 연산자
Mystring Mystring::operator+(const Mystring& mstr) const {
	Mystring tmp(len + mstr.len);
	strcpy(tmp.buf, buf);
	strcpy(tmp.buf + len, mstr.buf);
	return tmp;
}

Mystring& Mystring::operator+=(const Mystring& mstr) {
	if (bufSize < len + mstr.len) {
		bufSize = len += mstr.len;
		char* tbuf = new char[len + 1];
		strcpy(tbuf, buf);
		delete[] buf;
		buf = tbuf;
	}
	strcat(buf, mstr.buf);
	return *this;
}

// 문자열 비교 연산자
bool Mystring::operator==(const Mystring& mstr) const {
	return !strcmp(buf, mstr.buf);
}

bool Mystring::operator>(const Mystring& mstr) const {
	return strcmp(buf, mstr.buf) > 0;
}

bool Mystring::operator<(const Mystring& mstr) const {
	return strcmp(buf, mstr.buf) < 0;
}

// [] 연산자
char& Mystring::operator[](int i) {
	return buf[i];
}

char Mystring::operator[](int i) const {
	return buf[i];
}