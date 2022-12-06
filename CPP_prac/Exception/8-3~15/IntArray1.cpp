#include <iostream>
#include <cstring>
#include "IntArray1.h"

Array::Array(int s): Size(s){
	Buf = new int[s];
	memset(Buf, 0, sizeof(int) * s);
}

// size보다 큰 인수가 들어오게된다면
// throw로 BanIndex를 catch로 보냄
int& Array::operator[](int Offset) {
	if (Offset < 0 || Offset >= Size)
		throw BadIndex(Offset);
	return Buf[Offset];
}

const int& Array::operator[](int Offset) const {
	if (Offset < 0 || Offset >= Size)
		throw BadIndex(Offset);
	return Buf[Offset];
}

ostream& operator << (ostream& os, Array& arr) {
	for (int i = 0; i < arr.GetSize(); i++) {
		if (i % 5 == 0)
			os << endl;
		os << "[" << i << "]" << arr[i] << " ";
	}
	return os;
}