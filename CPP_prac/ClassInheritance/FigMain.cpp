#include <iostream>
#include <string>
#include "GrAttrib.h"
#include "Figure.h"
#include "Circle.h"
#include "Triangle.h"
using namespace std;

//GrAttrib curAttrib("����", "���");

// �����Ϳ� �ݺ����� Ȱ���� ���� �׸���
void DrawFigs(const Figure* const figs[], int n) {
	for (int i = 0; i < n; i++) {
		figs[i]->Draw();
		cout << endl;
	}
}

int main() {

	// ������ ����Ű�� ������ �迭 ����
	Figure* figs[2];

	// �׷��� ���� ����Ʈ�� �� ����
	figs[0] = new Circle(0, 20, 10);
	
	// �׷��� ���� �ٲ� �ﰢ�� ����
	double v[3][2] = { {0,0},{20,0},{10,15} };
	curAttrib.SetLineColor("����");
	curAttrib.SetFillColor("���");
	figs[1] = new Triangle(v);
	DrawFigs(figs, 2);

	figs[0]->Scale(2);
	figs[1]->Move(5, 10);
	DrawFigs(figs, 2);

	return 0;


}