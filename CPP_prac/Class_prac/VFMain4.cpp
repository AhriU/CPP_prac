#include <iostream>
#include "VecF.h"
using namespace std;

void swapVec(VecF& v1, VecF& v2) {
	VecF tmp = move(v1);
	v1 = move(v2);
	v2 = move(tmp);
}

int main() {
	
	float a[3] = { 1,2,3 };
	float b[3] = { 2,4,6 };
	VecF v1(3, a);
	VecF v2(3, b);
	
	cout << "v1 = " << v1 << endl;
	cout << "v2 = " << v2 << endl;
	swapVec(v1, v2);
	cout << "v1 = " << v1 << endl;
	cout << "v2 = " << v2 << endl;

	return 0;
}