#pragma once

#include <iostream>
#include <string>
#include "Person2.h"

// Person�� �Ļ�class �� Student class ����
class Student : public Person {
	string School;
public:
	Student(const string& n,const string& s) : Person(n) {
		cout << "Student�� ������" << endl;
		School = s;
	}
	~Student() {
		cout << "Student�� �Ҹ���" << endl;
	}
	string GetSchool() const { return School; }
	void print() const { cout << " goes to " << School; }
};