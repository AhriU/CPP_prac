#pragma once
#include <utility>
using namespace std;

// 함수 template 생성
// x와 y의 값을 교환해주는 함수
template <typename ANY>
void SwapFT(ANY& x, ANY& y) {
	ANY Temp;
	Temp = move(x);
	x = move(y);
	y = move(Temp);
}