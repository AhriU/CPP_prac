#pragma once

#include <iostream>
#include <string>
using namespace std;

class Person {
	string Name;
public:
	Person(const string& n) : Name(n) {}

	// ���߻���� Ȯ���ϱ� ���� Name�� �ּҸ� ���
	void Print()const { cout << &Name; }
};