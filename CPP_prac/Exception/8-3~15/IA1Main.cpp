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
	// throw �� ������ ������ �ڼ��ϰ� �ȳ�
	catch(const Array::BadIndex& e){
		cerr << e.what();
		cerr << "�ε��� ���� ���� --> " << e.wrongIndex << endl;
	}
	cout << arr << endl;
	return 0;
}