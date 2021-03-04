//Problem Description
//在2×n的一个长方形方格中, 用一个1× 2的骨牌铺满方格, 输入n, 输出铺放方案的总数.
//例如n = 3时, 为2× 3方格，骨牌的铺放方案有三种, 如下图：
//
//Input
//输入数据由多行组成，每行包含一个整数n, 表示该测试实例的长方形方格的规格是2×n(0 < n <= 50)。
//
//Output
//对于每个测试实例，请输出铺放方案的总数，每个实例的输出占一行。
#include "problem.h"
#include <iostream>
using namespace std;

long long *getN(int n) {
	long long* p = new long long[n + 1];
	p[1] = 1;
	p[2] = 2;
	for (int i = 3; i <= n; i++)
		p[i] = p[i - 1] + p[i - 2];
	return p;
}
void problem2046() {
	int n;
	long long* p = getN(50);
	while (cin >> n)
		cout << p[n] << endl;
}