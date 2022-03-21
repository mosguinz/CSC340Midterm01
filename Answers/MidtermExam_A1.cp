// Please see README.txt
// We will go over the answers in class.
// Thank you.

#include <iostream>
using namespace std;

int main() {

	// Pointer vs. Reference Variable 
	// Please refer to the mock-up exam and the review sessions & the review materials
	// We will go over the midterm exam in class

	int year = 2019;
	int yearNext = 2020;
	int & ref = year;

	ref = yearNext;
	cout << "ref: " << ref << endl;		// ref: 2020
	cout << "year: " << year << endl;	// year: 2020

	// & ref = yearNext; // ERROR
	// Expression must be a modifiable lvalue
	// '=': cannot convert from 'int' to 'int*'	

	return 0;
}