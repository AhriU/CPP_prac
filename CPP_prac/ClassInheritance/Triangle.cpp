#include <iostream>
#include <string>
#include "Triangle.h"
using namespace std;

Triangle::Triangle(const double v[3][2]) {
	x1 = v[0][0];	y1 = v[0][1];
	x2 = v[1][0];	y2 = v[1][1];
	x3 = v[2][0];	y3 = v[2][1];
}

void Triangle::Move(double x, double y) {
	x1 += x; y1 += y;
	x2 += x; y2 += y;
	x3 += x; y3 += y;
}

void Triangle::Scale(double s) {
	x1 *= s; y1 *= s;
	x2 *= s; y2 *= s;
	x3 *= s; y3 *= s;
}

void Triangle::Draw() const {
	cout << "�ﰢ�� �׸���" << endl;
	cout << "(" << x1 << "," << y1 << "),";
	cout << "(" << x2 << "," << y2 << "),";
	cout << "(" << x3 << "," << y3 << ")�� ��ǥ�� �մ� ������";
	cout << Attrib.GetLineColor() << "���� �׸���" << endl;
	cout << "���θ� " << Attrib.GetFillColor() << "�� ä���.";
	cout << endl;
}