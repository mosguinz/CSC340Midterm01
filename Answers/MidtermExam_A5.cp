// Please see README.txt
// We will go over the answers in class.
// Thank you.

#include <iostream>
using namespace std;

int main() {

	int cs = 340;
	int *pointer = &cs;

	// Please code a constant pointer which points to pointer
	int ** const ptr = &pointer;


	// Please code an lvalue reference to reference *pointer
	int & lref = *pointer;


	// Please code an rvalue reference to reference *pointer
	int && rref = move(*pointer);


	// Please use the reference(s) or the pointer you created, if legal,
	// to change the value of cs to 413. Provide your code :
	
	// OPTIONS:
	**ptr = 1;
	cout << cs << endl; // Works!
	lref = 2;
	cout << cs << endl; // Works!
	rref = 3;
	cout << cs << endl; // Works!

	// OK. Let us answer the question
	rref = 413;
	cout << cs << endl;
}