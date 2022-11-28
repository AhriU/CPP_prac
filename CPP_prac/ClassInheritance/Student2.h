#pragma once

#include <iostream>
#include <string>
#include "Person2.h"

// Person의 파생class 인 Student class 정의
class Student : public Person {
	string School;
public:
	Student(const string& n,const string& s) : Person(n) {
		cout << "Student의 생성자" << endl;
		School = s;
	}
	~Student() {
		cout << "Student의 소멸자" << endl;
	}
	string GetSchool() const { return School; }
	void print() const { cout << " goes to " << School; }
};