#include <iostream>
#include "SwapFT.h"
#include "MyString.h"
using namespace std;

int main() {
	
	// x�� 10 , y�� 20�� ������ SwapFT �Լ�template�� �̿��Ͽ� x, y�� ��ȯ
	int x = 10, y = 20;
	cout << "x = " << x << ", y = " << y << endl;
	SwapFT(x, y);
	cout << "���� ��ȯ �� --> ";
	cout << "x = " << x << ", y = " << y << endl;

	Mystring s1("KNOU"), s2("CS");
	cout << "s1 = " << s1 << ", s2 = " << s2 << endl;
	SwapFT(s1, s2);
	cout << "���� ��ȯ �� --> ";
	cout << "s1 = " << s1 << ", s2 = " << s2 << endl;

	return 0;

}