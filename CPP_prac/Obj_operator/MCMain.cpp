#include <iostream>
#include "Feet.h"
#include "Meter.h"
using namespace std;

int main() {
	Meter mLen;
	Feet fLen(10, 5);

	// �۽� �� Ŭ������ ���ǵ� �� ��ȯ
	mLen = fLen;

	fLen.display();
	mLen.display();

	// ���� �� Ŭ������ ���ǵ� �� ��ȯ
	fLen = mLen;
	fLen.display();

	return 0;

}