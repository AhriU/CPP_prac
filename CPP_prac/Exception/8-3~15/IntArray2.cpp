#include <iostream>
#include "IntArray2.h"
using namespace std;

int& gArray::operator[](int Offset) {
	if (Offset < Base)
		throw LowIndex(Offset, Base);
	if (Offset >= (Base+Size))
		throw HighIndex(Offset, Base + Size - 1);
	return Buf[Offset - Base];
}

int gArray::operator[](int Offset) const {
	if (Offset < Base)
		throw LowIndex(Offset, Base);
	if (Offset >= (Base + Size))
		throw HighIndex(Offset, Base + Size - 1);
	return Buf[Offset - Base];
}

ostream& operator << (ostream& os, gArray& garr) {
	int s = garr.GetSize();
	int b = garr.GetBase();

	for (int i = b; i < b + s; i++) {
		if (i % 5 == 0) os << endl;
		os << "[" << i << "]" << garr[i] << " ";
	}
	return os;
}