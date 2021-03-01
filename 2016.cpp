//Problem Description
//输入n(n < 100)个数，找出其中最小的数，将它与最前面的数交换后输出这些数。
//
//Input
//输入数据有多组，每组占一行，每行的开始是一个整数n，表示这个测试实例的数值的个数，跟着就是n个整数。n = 0表示输入的结束，不做处理。
//
//Output
//对于每组输入数据，输出交换后的数列，每组输出占一行。
#include "problem.h"
#include <iostream>
using namespace std;

void problem2016() {
	int n, i, min, j;
	while (cin >> n) {
		if (n == 0)
			break;
		if (n == 1) {
			cin >> i;
			cout << i << endl;
		}
		int* p = new int[n];
		i = j = 0;
		while (i != n) {
			cin >> p[i++];
		}
		min = p[0];
		for(i=1;i<n;i++)
			if (min > p[i]) {
				min = p[i];
				j = i;
			}
		p[j] = p[0];
		p[0] = min;
		i = 0;
		cout << p[i++];
		while (--n)
			cout << " " << p[i++];
		cout << endl;
	}
}