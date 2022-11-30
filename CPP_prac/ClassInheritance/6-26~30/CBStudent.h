#pragma once

#include <iostream>
#include <string>
#include "CBPerson.h"
using namespace std;

class Student : public Person {
	string School;
public:
	Student(const string& n,const string& s) : Person(n),School(s) {}
	void Print() const {
		Person::Print();
		cout << " goes to " << School << endl;
	}
};