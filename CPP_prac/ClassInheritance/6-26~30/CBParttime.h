#pragma once

#include <iostream>
#include <string>
#include "CBStudent.h"
#include "CBEmployee.h"

class Parttime : public Student, public Employee {
public:
	Parttime(const string& n,const string& s, const string& c)
		: Student(n, s), Employee(n, c) {}
};