#pragma once
#include <iostream>
#include <string>
#include "Person.h"

// Person의 파생Class인 Student를 정의
class Student : public Person {
	string School;
public:
	Student(const string& n, const string& s) : Person(n), School(s) {}
	string GetSchool() const { return School; }
	void print() const {
		Person::print();
		cout << " goes to " << School;
	}
};