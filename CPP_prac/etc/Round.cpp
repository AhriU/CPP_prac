#include <iostream>
#include <cmath>
using namespace std;
double Round(double x, int d = 0);  // �� ��° ���� �Ű������� ����Ʈ �� 0�� ����

int mainRound()
{
	double a;
	cout << "�� = ";
	cin >> a;
	cout << "�ݿø� ---> " << Round(a) << endl;
	cout << "            " << Round(a, 1) << endl;
	cout << "            " << Round(a, 2) << endl;
	cout << "            " << Round(a, 3) << endl;
	return 0;
}

double Round(double x, int d) // �������� ����Ʈ���� ���������� ���� �������� �ʾƵ� �ȴ�.
{
	double a = x >= 0 ? 0.5 : -0.5;
	double pow10 = pow(10, d);
	return trunc(x * pow10 + a) / pow10;
}