#pragma once
#include <iostream>
#include <string>
#include "Person.h"

// Person�� �Ļ�Class�� Student�� ����
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