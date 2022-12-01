#pragma once

#include "SwapFT.h"

// �������� �˰���
// DoAgain�� False �϶����� �ݺ�
// �迭�� �� �ڸ� ���ϰ� Ŭ ��� �ڷ� �ѱ�� ����
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