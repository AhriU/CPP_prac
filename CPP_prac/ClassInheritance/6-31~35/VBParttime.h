#pragma once

#include <iostream>
#include <string>
#include "VBStudent.h"
#include "VBEmployee.h"
using namespace std;

class Parttime : public Student, public Employee {
public:
	Parttime(const string& n, const string& s, const string& c)

		// Person Ŭ������ ���
		: Person(n), Student(n, s), Employee(n,c) {}
	void Print() const {
		Student::Print();
		Employee::Print();
	}
};