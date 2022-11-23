#include <iostream>
#include <cmath>
using namespace std;
double Round(double x, int d = 0);  // 두 번째 형식 매개변수에 디폴트 값 0을 정의

int mainRound()
{
	double a;
	cout << "값 = ";
	cin >> a;
	cout << "반올림 ---> " << Round(a) << endl;
	cout << "            " << Round(a, 1) << endl;
	cout << "            " << Round(a, 2) << endl;
	cout << "            " << Round(a, 3) << endl;
	return 0;
}

double Round(double x, int d) // 원형에서 디폴트값을 지정했으면 따로 지정하지 않아도 된다.
{
	double a = x >= 0 ? 0.5 : -0.5;
	double pow10 = pow(10, d);
	return trunc(x * pow10 + a) / pow10;
}