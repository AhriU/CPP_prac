#pragma once

#include <iostream>
#include <string>
#include "MIStudent.h"
#include "MIEmployee.h"
using namespace std;

class Parttime : public Student, public Employee {
public:
	Parttime(const string& s, const string& c) 
		: Student(s), Employee(c) {}
};