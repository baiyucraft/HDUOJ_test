//Problem Description
//输入n(n <= 100)个整数，按照绝对值从大到小排序后输出。题目保证对于每一个测试实例，所有的数的绝对值都不相等。
//
//Input
//输入数据有多组，每组占一行，每行的第一个数字为n, 接着是n个整数，n = 0表示输入数据的结束，不做处理。
//
//Output
//对于每个测试实例，输出排序后的结果，两个数之间用一个空格隔开。每个测试实例占一行。
#include "problem.h"
#include <iostream>
#include <cmath>
using namespace std;

void problem2020() {
	int n, i, j, k, x;
	while (cin >> n) {
		if (n == 0)
			break;
		int* p = new int[n];
		cin >> p[0];
		for (i = 1; i < n; i++) {
			cin >> x;
			for (j = 0; j < i; j++) {
				if (abs(p[j]) < abs(x)) {
					for (k = i; k > j; k--)
						p[k] = p[k - 1];
					p[j] = x;
					break;
				}
				p[i] = x;
			}
		}
		cout << p[0];
		for (i = 1; i < n; i++)
			cout << " " << p[i];
		cout << endl;
	}
}