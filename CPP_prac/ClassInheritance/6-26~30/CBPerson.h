#pragma once

#include <iostream>
#include <string>
using namespace std;

class Person {
	string Name;
public:
	Person(const string& n) : Name(n) {}

	// 이중상속을 확인하기 위해 Name의 주소를 출력
	void Print()const { cout << &Name; }
};