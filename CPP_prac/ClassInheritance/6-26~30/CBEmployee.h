#pragma once

#include <iostream>
#include <string>
#include "CBPerson.h"
using namespace std;

class Employee : public Person {
	string Company;
public:
	Employee(const string& n, const string& c)
		: Person(n), Company(c) {}
	void Print() const {
		Person::Print();
		cout << " is employed by " << Company << endl;
	}
};