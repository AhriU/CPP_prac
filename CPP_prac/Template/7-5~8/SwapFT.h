#pragma once
#include <utility>
using namespace std;

// �Լ� template ����
// x�� y�� ���� ��ȯ���ִ� �Լ�
template <typename ANY>
void SwapFT(ANY& x, ANY& y) {
	ANY Temp;
	Temp = move(x);
	x = move(y);
	y = move(Temp);
}