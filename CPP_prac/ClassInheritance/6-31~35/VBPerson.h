#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person {
	string Name;
public:
	Person(const string& n) : Name(n) {}
	void Print() const {

		// Name�� �ּҸ� Ȯ�� �� ���
		cout << &Name;
	}
};