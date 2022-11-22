#include <iostream>
using namespace std;
#include "VecF.h"

int main() {
	float a[3] = { 1,2,3 };		// float 크기(4byte) 배열 3개 생성 후 1,2,3으로 초기화
	VecF v1(3, a);				// 객체 VecF에 배열요소개수 3과 초기화 값 a를 대입
	VecF v2(v1);				// 객체 복사
	v1.print();					// v1 객체의 print 메소드 사용
	cout << endl;				// 줄바꿈
	v2.print();					// v2 객체의 print 메소드 사용
	cout << endl;				// 줄바꿈
	return 0;
}