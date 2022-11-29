#pragma once

#include <iostream>
#include "Figure.h"
using namespace std;

class Circle : public Figure {
	double Cx, Cy;
	double Radius;
public:
	// ������ �׷��� �Ӽ��� ���� �� ��ü ����
	// (x,y)�� ���� �߽���ǥ
	// r : �ݰ�
	Circle(double x, double y, double r) : Cx(x), Cy(y), Radius(y) {}

	// ���� �̵�, ���� ���� ũ�� ����, �׸��� ����Լ�
	void Move(double x, double y);
	void Scale(double s);
	void Draw() const;

};