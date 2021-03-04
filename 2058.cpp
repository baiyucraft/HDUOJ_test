//Problem Description
//Given a sequence 1, 2, 3, ......N, your job is to calculate all the possible sub - sequences that the sum of the sub - sequence is M.
//
//Input
//Input contains multiple test cases.each case contains two integers N, M(1 <= N, M <= 1000000000).input ends with N = M = 0.
//
//Output
//For each test case, print all the possible sub - sequence that its sum is M.The format is show in the sample below.print a blank line after each test case.
#include "problem.h"
#include <iostream>
using namespace std;
// 用区间长度做变量枚举
void problem2058() {
	int n, m, i, a;
	int sum;
	while (cin >> n >> m) {
		if (n == 0 && m == 0)
			break;
		for (i = sqrt(2 * m); i >= 1; i--) {
			a = (m - ((i - 1) * i) / 2) / i;
			if (m == a * i + (i * (i - 1)) / 2)
				cout << '[' << a << ',' << a + i - 1 << ']' << endl;
		}
		cout << endl;
	}
}