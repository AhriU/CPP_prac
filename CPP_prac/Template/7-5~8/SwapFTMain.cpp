#include <iostream>
#include "SwapFT.h"
#include "MyString.h"
using namespace std;

int main() {
	
	// x는 10 , y는 20을 선언후 SwapFT 함수template를 이용하여 x, y를 교환
	int x = 10, y = 20;
	cout << "x = " << x << ", y = " << y << endl;
	SwapFT(x, y);
	cout << "값을 교환 후 --> ";
	cout << "x = " << x << ", y = " << y << endl;

	Mystring s1("KNOU"), s2("CS");
	cout << "s1 = " << s1 << ", s2 = " << s2 << endl;
	SwapFT(s1, s2);
	cout << "값을 교환 후 --> ";
	cout << "s1 = " << s1 << ", s2 = " << s2 << endl;

	return 0;

}