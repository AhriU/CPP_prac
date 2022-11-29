#pragma once
#include <iostream>
#include "Figure.h"
using namespace std;

class Triangle : public Figure {
	double x1, y1, x2, y2, x3, y3;
public:
	// �׷����� �ʱⰪ
	// �ﰢ���� 3���� ��ǥ�� �����ڷ� ����
	Triangle(const double v[3][2]);

	void Move(double x, double y);
	void Scale(double s);
	void Draw() const;
};