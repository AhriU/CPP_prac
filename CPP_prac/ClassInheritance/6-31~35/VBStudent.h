#pragma once

#include <iostream>
#include <string>
#include "VBPerson.h"
using namespace std;

// 가상 기초클래스를 상속받음
class Student : virtual public Person {
	string School;
public:
	Student(const string& n, const string& s) : Person(n),School(s) {}
	void Print() const { 
		Person::Print();
		cout << " goes to " << School << endl;
	}
};