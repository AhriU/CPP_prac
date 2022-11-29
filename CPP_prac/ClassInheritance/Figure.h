#pragma once
#include <string>
#include "GrAttrib.h"

class Figure {
protected:
	GrAttrib Attrib;
public:
	// ���� �׷��ȿ� ���� ���� ��ü ����
	Figure() : Attrib(curAttrib) {}

	// �� �� �Ӽ� ����
	void SetLineColor(const string& lc) {
		Attrib.SetLineColor(lc);
	}
	void SetFillColor(const string& fc) {
		Attrib.SetFillColor(fc);
	}

	// ���������Լ��� ������ �̵�, ũ������, �׸��� ����Լ� ����
	virtual void Move(double dx, double dy) = 0;
	virtual void Scale(double s) = 0;
	virtual void Draw() const = 0;

};