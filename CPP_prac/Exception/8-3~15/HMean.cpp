#include <iostream>
using namespace std;

// a와 b의 합이 0일 경우를 예외처리하기 위해
// throw를 if문에 넣음
double Hmean(double a, double b) {
	if (a == -b)
		throw "조화평균을 계산할 수 없음!";
	return 2.0 * a * b / (a + b);
}


// x, y를 입력받아 조화평균을 구하는 함수
int main(int argc, char* argv[])
{
	double x, y, z;
	cout << "두 수를 입력하시오 : ";
	while (cin >> x >> y) {
		
		try {
			z = Hmean(x, y);
		}

		catch(const char* s){
			cout << s << endl;
			cout << "다른 수를 입력하시오 : ";
			continue;
		}

		cout << "조화평균 = " << z << endl;
		cout << "다음 두 수를 입력하시오(Q는 종료) :";
	}
	return 0;
}