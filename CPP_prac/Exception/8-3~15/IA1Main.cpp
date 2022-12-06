#include <iostream>
#include "IntArray1.h"
using namespace std;

int main() {
	Array arr(10);
	try {
		for (int i = 0; i <= 10; i++) {
			arr[i] = i;
		}
	}
	// throw 된 오류의 범위를 자세하게 안내
	catch(const Array::BadIndex& e){
		cerr << e.what();
		cerr << "인덱스 범위 오류 --> " << e.wrongIndex << endl;
	}
	cout << arr << endl;
	return 0;
}