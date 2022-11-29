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
	cout << "원 그리기" << endl;
	cout << "(" << Cx << ",";
	cout << Cy << ")에서부터 ";
	cout << Radius << "만큼 떨어진 모든점들을 ";
	cout << Attrib.GetLineColor() << "으로 그리고" << endl;
	cout << "내부를 " << Attrib.GetFillColor() << "로 채운다.";
	cout << endl;

}