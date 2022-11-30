#include "MIParttime.h"

int main() {

	// 철수는 Student와 Employee의 다중상속을 받으므로
	// 두 class의 멤버함수를 사용할 수 있다.
	Parttime Chulsoo("ABC Univ.", "DEF Co.");
	Chulsoo.PrintSchool();
	Chulsoo.PrintEmployee();

	return 0;
}