#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person {
	string Name;
public:
	Person(const string& n) : Name(n) {}
	void Print() const {

		// Name의 주소를 확인 및 출력
		cout << &Name;
	}
};