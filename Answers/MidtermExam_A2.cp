// Please see README.txt
// We will go over the answers in class.
// Thank you.

#include <iostream>
using namespace std;

int main() {

	// Proper Deallocation
	auto* pStr2 = new string("CSC340");
	delete pStr2;
	pStr2 = nullptr;

	return 0;
}