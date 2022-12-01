#pragma once

#include "SwapFT.h"

// 버블정렬 알고리즘
// DoAgain이 False 일때까지 반복
// 배열의 앞 뒤를 비교하고 클 경우 뒤로 넘기는 연산
template <typename T> void SortFT(T arr[], int Size) {
	bool DoAgain = true;
	for (int i = 1; DoAgain; i++) {
		DoAgain = false;
		for (int j = 0; j < Size - i; j++) {
			if (arr[j] > arr[j + 1]) {
				SwapFT(arr[j], arr[j + 1]);
				DoAgain = true;
			}
		}
	}
}