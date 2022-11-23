#include <iostream>
using namespace std;

// inline 함수를 선언하여 아래 SwapValues2 자리에 함수가 그대로 들어있는 것처럼 처리
inline void SwapValues2(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

int main()
{
	int a, b;
	cout << "두 수를 입력하시오 : ";
	cin >> a >> b;
	if (a < b) SwapValues2(a, b);
	cout << "큰 수 = " << a << ", 작은수 = " << b;
}