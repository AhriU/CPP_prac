#include "VBParttime.h"

int main() {
	Parttime Chulsoo("Chulsoo", "ABC Univ", "DEF Co.");

	// Person class의 멤버가 동일한 주소임을 확인할 수 있다.
	Chulsoo.Print();
	return 0;
}