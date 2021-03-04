//Problem Description
//There must be many A + B problems in our HDOJ, now a new one is coming.
//Give you two hexadecimal integers, your task is to calculate the sum of them, and print it in hexadecimal too.
//Easy ? AC it !
//
//Input
//The input contains several test cases, please process to the end of the file.
//Each case consists of two hexadecimal integers Aand B in a line seperated by a blank.
//The length of Aand B is less than 15.
//
//Output
//For each test case, print the sum of Aand B in hexadecimal in one line.
#include "problem.h"
#include <iostream>
#include <iomanip>
using namespace std;

void problem2057() {
	long long a, b;
	cin >> hex;
	cout << setiosflags(ios::uppercase) << hex;
	while (cin >> a >> b){
		if (a + b < 0){
			cout << "-";
			a = -a; b = -b;
		}
		cout << a + b << endl;
	}
}