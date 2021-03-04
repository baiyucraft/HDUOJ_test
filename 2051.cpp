//Problem Description
//Give you a number on base ten, you should output it on base two.(0 < n < 1000)
//
//Input
//For each case there is a postive number n on base ten, end of file.
//
//Output
//For each case output a number on base two.
#include "problem.h"
#include <iostream>
using namespace std;

void RJin(int n) {
	if (n == 0) {
		return;
	}
	else {
		RJin(n / 2);
		cout << n % 2;
	}
}
void problem2051() {
	int n;
	while (cin >> n) {
		RJin(n);
		cout << endl;
	}
}