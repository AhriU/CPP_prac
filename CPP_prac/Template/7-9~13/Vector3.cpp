#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

// 오름차순과 내림차순을 결정짓는 함수객체(comp에 전달)
// a<b는 오름차순
// a>b는 내림차순
// 즉, true 값일땐 값을 안바꾸고 false일때 값을 바꾸는 것을 알 수있다.
template<typename T> class GREATER {
public:
	bool operator() (const T& a, const T& b) {
		return a < b;
	}
};


int main() {

	// 난수 발생기 초기화
	srand((unsigned)time(NULL)); 

	vector<int> Iv1(5);
	cout << "백터1에 저장된 값 : ";
	for (auto& i : Iv1) {	// 대입을 위해서 auto&를 사용
		i = rand() % 100;	// 0~99 사이의 난수 발생 및 i에 대입
		cout << i << " ";
	}

	// 정렬 알고리즘인 sort를 사용하여 난수를 오름차순으로 정렬(디폴트)
	sort(Iv1.begin(), Iv1.end(), GREATER<int>());
	cout << endl << "정렬된 백터1 : ";
	for (auto i : Iv1)
		cout << i << " ";

	cout << endl << endl;

	vector<int> Iv2(5);
	cout << "백터2에 저장된 값 : ";
	for (auto& i : Iv2) {
		i = rand() % 100;
		cout << i << " ";
	}

	sort(Iv2.begin(), Iv2.end(), GREATER<int>());
	cout << endl << "정렬된 백터2 : ";
	for (auto i : Iv2)
		cout << i << " ";

	cout << endl << endl;

	// 합병 결과를 저장할 백터
	vector<int> Iv3(Iv1.size() + Iv2.size());

	// merge를 통해 합형 후 Iv3에 저장
	// merge도 오름차순이 디폴트
	merge(Iv1.begin(), Iv1.end(), Iv2.begin(), Iv2.end(),Iv3.begin(), GREATER<int>());
	cout << "백터1과 백터2를 합병한 결과 : ";
	for (auto i : Iv3)
		cout << i << " ";
	cout << endl << endl;

	return 0;
}