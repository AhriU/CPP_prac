#include <iostream>
#include "Feet.h"
#include "Meter.h"
using namespace std;

int main() {
	Meter mLen;
	Feet fLen(10, 5);

	// 송신 측 클래스에 정의된 형 변환
	mLen = fLen;

	fLen.display();
	mLen.display();

	// 수신 측 클래스에 정의된 형 변환
	fLen = mLen;
	fLen.display();

	return 0;

}