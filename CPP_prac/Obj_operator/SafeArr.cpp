#include <iostream>
#include "SafeInArray.h"
using namespace std;

int main() {
	SafeInArray a(10);

	for (int i = 0; i < 10; i++) {
		a[i] = i;
	}

	cout << a[5] << endl;

	a[5] = 15;

	cout << a[5] << endl;
	cout << a[12] << endl;

	return 0;
}