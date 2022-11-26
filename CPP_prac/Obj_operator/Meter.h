#pragma once

#include <iostream>
using namespace std;

class Meter {
	
	// m�� cm ����
	int m;
	int cm;

public:

	Meter() : m(0), cm(0) {}
	Meter(int meter, int cmeter) : m(meter), cm(cmeter) {}
	void display() {
		if (m)
			cout << m << "M ";
		if (cm || !m)
			cout << cm << "cm";
		cout << endl;
	}

	// ������ ����� ������ �� �� �ֵ��� ����Լ� ����
	int getM() const { return m; }
	int getCm() const { return cm; }

};