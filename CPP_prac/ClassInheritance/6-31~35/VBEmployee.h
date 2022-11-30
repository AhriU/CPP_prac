#pragma once

#include <iostream>
#include <string>
#include "VBPerson.h"
using namespace std;

// 기초클래스를 가상함수로 상속받음
class Employee : virtual public Person {
	string Company;
public:
	Employee(const string& n, const string& c)
		: Person(n), Company(c) {}
	void Print() const {
		Person::Print();
		cout << " is employed by " << Company << endl;
	}
};