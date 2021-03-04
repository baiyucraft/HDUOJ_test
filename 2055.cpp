//Problem Description
//we define f(A) = 1, f(a) = -1, f(B) = 2, f(b) = -2, ... f(Z) = 26, f(z) = -26;
//Give you a letter xand a number y, you should output the result of y + f(x).
//
//Input
//On the first line, contains a number T.then T lines follow, each line is a case.each case contains a letterand a number.
//
//Output
//for each case, you should the result of y + f(x) on a line.
#include "problem.h"
#include <iostream>
using namespace std;

int f(char s) {
	if (s >= 'a' && s <= 'z')
		return 96 - s;
	if (s >= 'A' && s <= 'Z')
		return s - 64;
}
void problem2055() {
	int  T;
	char x;
	int y;
	while (cin >> T) {
		while (T--) {
			cin >> x >> y;
			cout << f(x) + y << endl;
		}
	}
}