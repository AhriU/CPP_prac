#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Person.h"

using namespace std;

Person::Person(const char* name, const char* addr) // 생성자
{
	// this->는 객체의 데이터 멤버를 지칭
	// name으로 값을 받아 그 길이 만큼 객체의 name에 동적할당
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);  // 매개변수로 받은 이름을 객체 데이터 멤버에 대입

	// 같은 원리로 주소 입력
	this->addr = new char[strlen(addr) + 1];
	strcpy(this->addr, addr);
	
	cout << "Person 객체 생성함 (" << name << ")" << endl;
}

Person::~Person() // 소멸자
{
	cout << "Person 객체 제거함 (" << name << ")" << endl;
	delete[] name; // name에 동적할당 해제
	delete[] addr; // addr에 동적할당 해제
}

void Person::print() const
{
	cout << addr << "에 살고 있는 " << name << " 입니다." << endl;
}

void Person::chAddr(const char* newAddr)
{
	delete[] addr; // 기존 addr 동적할당 해제
	addr = new char[strlen(newAddr) + 1]; // 새로운 주소의 길이로 동적할당
	strcpy(addr, newAddr); // 주소 복사
}