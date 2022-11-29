#include <iostream>
#include <string>
#include "Circle.h"

void Circle::Move(double x, double y) {
	Cx += x;
	Cy += y;
}

void Circle::Scale(double s) {
	Cx *= s;
	Cy *= s;
	Radius *= s;
}

void Circle::Draw() const {
	cout << "�� �׸���" << endl;
	cout << "(" << Cx << ",";
	cout << Cy << ")�������� ";
	cout << Radius << "��ŭ ������ ��������� ";
	cout << Attrib.GetLineColor() << "���� �׸���" << endl;
	cout << "���θ� " << Attrib.GetFillColor() << "�� ä���.";
	cout << endl;

}