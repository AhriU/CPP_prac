#pragma once

#include <iostream>
#include "Figure.h"
using namespace std;

class Circle : public Figure {
	double Cx, Cy;
	double Radius;
public:
	// 현재의 그래픽 속성에 따라 원 객체 생성
	// (x,y)는 원의 중심좌표
	// r : 반경
	Circle(double x, double y, double r) : Cx(x), Cy(y), Radius(y) {}

	// 원의 이동, 원점 기준 크기 조정, 그리기 멤버함수
	void Move(double x, double y);
	void Scale(double s);
	void Draw() const;

};