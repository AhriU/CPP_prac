#pragma once
#include <iostream>
#include "Figure.h"
using namespace std;

class Triangle : public Figure {
	double x1, y1, x2, y2, x3, y3;
public:
	// 그래픽은 초기값
	// 삼각형의 3개의 좌표를 생성자로 전달
	Triangle(const double v[3][2]);

	void Move(double x, double y);
	void Scale(double s);
	void Draw() const;
};