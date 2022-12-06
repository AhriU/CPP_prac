#include <iostream>
#include "IntArray2.h"
using namespace std;

int main() {
	gArray arr(2000, 10);

	// 오류가 발생할 수 있는 구문을 try 블록에 넣음
	try {
		// i값 조절로 제대로 구동하는지 확인 가능
		for (int i = 2001; i <= 2010; i++)
			arr[i] = i;
		cout << arr << endl;
	}

	// 인덱스 하한보다 내려가는 값을 받을 때의 catch 문
	catch (const gArray::LowIndex& e) {
		cerr << e.what() << "-->" << e.wrongIndex << endl;
		cerr << "인덱스 하한 : " << e.LowBound << endl;
	}

	// 인덱스 상한보다 올라가는 값을 받을 때의 catch 문
	catch (const gArray::HighIndex& e) {
		cerr << e.what() << "-->" << e.wrongIndex << endl;
		cerr << "인덱스 상한 : " << e.HighBound << endl;
	}

	return 0;
}