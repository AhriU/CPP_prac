#pragma once

#include <string>
using namespace std;


// 그래픽 속성 Class
class GrAttrib {
	string LineColor, FillColor;
public:

	// 그래픽 속성의 생성자
	GrAttrib() : LineColor("검정색"), FillColor("흰색") {}
	GrAttrib(const string& lc, const string& fc) : LineColor(lc), FillColor(fc) {}

	// 속성 지정 멤버함수
	void SetLineColor(const string& lc) {
		LineColor = lc;
	}
	void SetFillColor(const string& fc) {
		FillColor = fc;
	}

	// 속성 값을 읽는 함수
	string GetLineColor() const { return LineColor; }
	string GetFillColor() const { return FillColor; }

};

// 전역 객체를 생성하여 디폴트 그래픽을 정함
extern GrAttrib curAttrib;
