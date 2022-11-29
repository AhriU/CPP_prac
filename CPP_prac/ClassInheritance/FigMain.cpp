#include <iostream>
#include <string>
#include "GrAttrib.h"
#include "Figure.h"
#include "Circle.h"
#include "Triangle.h"
using namespace std;

//GrAttrib curAttrib("검정", "흰색");

// 포인터와 반복문을 활용한 도형 그리기
void DrawFigs(const Figure* const figs[], int n) {
	for (int i = 0; i < n; i++) {
		figs[i]->Draw();
		cout << endl;
	}
}

int main() {

	// 도형을 가리키는 포인터 배열 생성
	Figure* figs[2];

	// 그래픽 값이 디폴트인 원 생성
	figs[0] = new Circle(0, 20, 10);
	
	// 그래픽 값을 바꾼 삼각형 생성
	double v[3][2] = { {0,0},{20,0},{10,15} };
	curAttrib.SetLineColor("빨강");
	curAttrib.SetFillColor("노랑");
	figs[1] = new Triangle(v);
	DrawFigs(figs, 2);

	figs[0]->Scale(2);
	figs[1]->Move(5, 10);
	DrawFigs(figs, 2);

	return 0;


}