#pragma once

#include <iostream>
#include "Meter.h"

class Feet {

	// ft�� inch ����
	int ft, in;

public:

	// ������
	Feet() : ft(0), in(0) {}
	Feet(int f, int i) : ft(f), in(i) {}

	// Meter�� Feet�� ��ȯ(1�μ� ������-�� ��ȯ)
	Feet(const Meter& m) {
		// m�� cm�� ��ȯ
		int cmeter = m.getM() * 100 + m.getCm();

		// ��ġ�� ��ȯ�Ͽ� �ݿø�
		in = static_cast<int>(cmeter / 2.54 + 0.5);
		ft = in / 12;
		in %= 12;
	}

	// Feet -> meter�� ����ȯ
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