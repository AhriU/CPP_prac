#include <iostream>
using namespace std;
void SwapValues(int& x, int& y);

int mainSwap()
{
	int a, b;
	cout << "�� ���� �Է��ϼ��� : ";
	cin >> a >> b;
	if (a < b) SwapValues(a, b);
	cout << "ū �� : " << a << "  ���� �� : " << b << endl;
	return 0;
}

void SwapValues(int& x, int& y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
}