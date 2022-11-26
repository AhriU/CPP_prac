#pragma once

#include <iostream>
#include "Meter.h"

class Feet {

	// ft와 inch 선언
	int ft, in;

public:

	// 생성자
	Feet() : ft(0), in(0) {}
	Feet(int f, int i) : ft(f), in(i) {}

	// Meter를 Feet로 변환(1인수 생성자-형 변환)
	Feet(const Meter& m) {
		// m를 cm로 변환
		int cmeter = m.getM() * 100 + m.getCm();

		// 인치로 변환하여 반올림
		in = static_cast<int>(cmeter / 2.54 + 0.5);
		ft = in / 12;
		in %= 12;
	}

	// Feet -> meter로 형변환
	operator Meter()const {
		int m = static_cast<int>((ft * 12 + in) * 2.54 + 0.5);
		return Meter(m / 100, m % 100);
	}

	void display() const {
		if (ft)
			cout << ft << "ft";
		if (in || !ft)
			cout << in << "inch";
		cout << endl;
	}

};