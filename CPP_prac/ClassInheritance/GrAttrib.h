#pragma once

#include <string>
using namespace std;


// �׷��� �Ӽ� Class
class GrAttrib {
	string LineColor, FillColor;
public:

	// �׷��� �Ӽ��� ������
	GrAttrib() : LineColor("������"), FillColor("���") {}
	GrAttrib(const string& lc, const string& fc) : LineColor(lc), FillColor(fc) {}

	// �Ӽ� ���� ����Լ�
	void SetLineColor(const string& lc) {
		LineColor = lc;
	}
	void SetFillColor(const string& fc) {
		FillColor = fc;
	}

	// �Ӽ� ���� �д� �Լ�
	string GetLineColor() const { return LineColor; }
	string GetFillColor() const { return FillColor; }

};

// ���� ��ü�� �����Ͽ� ����Ʈ �׷����� ����
extern GrAttrib curAttrib;
