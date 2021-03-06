//Problem Description
//有一只经过训练的蜜蜂只能爬向右侧相邻的蜂房，不能反向爬行。请编程计算蜜蜂从蜂房a爬到蜂房b的可能路线数。
//其中，蜂房的结构如下所示。
//
//Input
//输入数据的第一行是一个整数N, 表示测试实例的个数，然后是N 行数据，每行包含两个整数a和b(0 < a < b < 50)。
//
//Output
//对于每个测试实例，请输出蜜蜂从蜂房a爬到蜂房b的可能路线数，每个实例的输出占一行。
#include "problem.h"
#include <iostream>
using namespace std;

long long *getBee(int n) {
	long long* p = new long long[n+1];
	p[1] = 1;
	p[2] = 2;
	for (int i = 3; i <= n; i++)
		p[i] = p[i - 1] + p[i - 2];
	return p;
}

void problem2044() {
	int n;
	int a, b;
	long long *p = getBee(50);
	while (cin >> n) {
		while (n--) {
			cin >> a >> b;
			cout << p[b - a] << endl;
		}
	}
}