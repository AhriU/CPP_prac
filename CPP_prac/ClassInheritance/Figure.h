#pragma once
#include <string>
#include "GrAttrib.h"

class Figure {
protected:
	GrAttrib Attrib;
public:
	// 현재 그래픽에 따라 도형 객체 생성
	Figure() : Attrib(curAttrib) {}

	// 선 색 속성 지정
	void SetLineColor(const string& lc) {
		Attrib.SetLineColor(lc);
	}
	void SetFillColor(const string& fc) {
		Attrib.SetFillColor(fc);
	}

	// 순수가상함수로 도형의 이동, 크기조정, 그리기 멤버함수 지정
	virtual void Move(double dx, double dy) = 0;
	virtual void Scale(double s) = 0;
	virtual void Draw() const = 0;

};