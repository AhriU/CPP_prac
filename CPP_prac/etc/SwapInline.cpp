#include <iostream>
using namespace std;

// inline �Լ��� �����Ͽ� �Ʒ� SwapValues2 �ڸ��� �Լ��� �״�� ����ִ� ��ó�� ó��
inline void SwapValues2(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

int main()
{
	int a, b;
	cout << "�� ���� �Է��Ͻÿ� : ";
	cin >> a >> b;
	if (a < b) SwapValues2(a, b);
	cout << "ū �� = " << a << ", ������ = " << b;
}