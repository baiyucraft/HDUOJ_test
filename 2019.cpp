//Problem Description
//有n(n <= 100)个整数，已经按照从小到大顺序排列好，现在另外给一个整数x，请将该数插入到序列中，并使新的序列仍然有序。
//
//Input
//输入数据包含多个测试实例，每组数据由两行组成，第一行是n和m，第二行是已经有序的n个数的数列。n和m同时为0标示输入数据的结束，本行不做处理。
//
//Output
//对于每个测试实例，输出插入新的元素后的数列。
#include "problem.h"
#include <iostream>
using namespace std;

void problem2019() {
	int n, m, i;
	while (cin >> n >> m) {
		if (n == 0 && m == 0)
			break;
		int* p = new int[n + 1];
		for (i = 0; i < n; i++) {
			cin >> p[i];
			if (p[i] > m) {
				p[i + 1] = p[i];
				p[i++] = m;
				break;
			}
		}
		if (i == n && p[i] < m)
			p[i] = m;
		while (++i <= n)
			cin >> p[i];
		cout << p[0];
		for (i = 1; i <= n; i++)
			cout << " " << p[i];
		cout << endl;
	}
}