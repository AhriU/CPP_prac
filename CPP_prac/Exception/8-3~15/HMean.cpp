#include <iostream>
using namespace std;

// a�� b�� ���� 0�� ��츦 ����ó���ϱ� ����
// throw�� if���� ����
double Hmean(double a, double b) {
	if (a == -b)
		throw "��ȭ����� ����� �� ����!";
	return 2.0 * a * b / (a + b);
}


// x, y�� �Է¹޾� ��ȭ����� ���ϴ� �Լ�
int main(int argc, char* argv[])
{
	double x, y, z;
	cout << "�� ���� �Է��Ͻÿ� : ";
	while (cin >> x >> y) {
		
		try {
			z = Hmean(x, y);
		}

		catch(const char* s){
			cout << s << endl;
			cout << "�ٸ� ���� �Է��Ͻÿ� : ";
			continue;
		}

		cout << "��ȭ��� = " << z << endl;
		cout << "���� �� ���� �Է��Ͻÿ�(Q�� ����) :";
	}
	return 0;
}