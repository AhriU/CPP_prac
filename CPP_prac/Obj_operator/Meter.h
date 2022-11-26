#pragma once

#include <iostream>
using namespace std;

class Meter {
	
	// m와 cm 선언
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

	// 데이터 멤버를 엑세스 할 수 있도록 멤버함수 구성
	int getM() const { return m; }
	int getCm() const { return cm; }

};