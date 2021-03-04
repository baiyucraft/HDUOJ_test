//Problem Description
//There are many lamps in a line.All of them are off at first.A series of operations are carried out on these lamps.On the i - th operation, the lamps whose numbers are the multiple of i change the condition(on to offand off to on).
//
//Input
//Each test case contains only a number n(0 < n <= 10 ^ 5) in a line.
//
//Output
//Output the condition of the n - th lamp after infinity operations(0 - off, 1 - on).
#include "problem.h"
#include <iostream>
#include <cmath>
using namespace std;

void problem2053() {
	int n;
	while (cin >> n)
		n == (int)sqrt(n) * (int)sqrt(n) ? cout << 1 << endl : cout << 0 << endl;
}