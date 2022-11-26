#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "MyString.h"
using namespace std;

// private ������(���ڿ� ���� �� ���)
Mystring::Mystring(int s) : len(s), bufSize(s) {
	buf = new char[s + 1];
	buf[0] = '\0';
}


// �μ��� ���� ���� ������
Mystring::Mystring() : len{ 0 }, bufSize{ 0 } {
	buf = new char[1];
	buf[0] = '\0';
}

// ���ڿ��� �μ��� ���� ���� ������
Mystring::Mystring(const char* str) {
	len = bufSize = strlen(str);
	buf = new char[len + 1];
	strcpy(buf, str);
}

// ���� ������
Mystring::Mystring(const Mystring& mstr) {
	delete[] buf;
	len = mstr.len;
	bufSize = mstr.bufSize;
	buf = new char[len + 1];
	strcpy(buf, mstr.buf);
}

// �̵� ������
Mystring::Mystring(Mystring&& mstr)
	: len{ mstr.len }, bufSize{ mstr.bufSize }, buf{mstr.buf}
{
	mstr.buf = nullptr;
}

// �Ҹ���
Mystring::~Mystring() {
	delete[] buf;
}

// ���� ��ȯ ����Լ�
int Mystring::length() const {
	return len;
}

// ���� ������
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

// �̵� ���� ������
Mystring& Mystring::operator=(Mystring&& mstr) {
	delete[] buf;
	len = mstr.len;
	bufSize = mstr.bufSize;
	buf = mstr.buf;
	mstr.buf = nullptr;
	return *this;
}

// ���ڿ� ���� ������
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

// ���ڿ� �� ������
bool Mystring::operator==(const Mystring& mstr) const {
	return !strcmp(buf, mstr.buf);
}

bool Mystring::operator>(const Mystring& mstr) const {
	return strcmp(buf, mstr.buf) > 0;
}

bool Mystring::operator<(const Mystring& mstr) const {
	return strcmp(buf, mstr.buf) < 0;
}

// [] ������
char& Mystring::operator[](int i) {
	return buf[i];
}

char Mystring::operator[](int i) const {
	return buf[i];
}