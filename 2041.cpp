//Problem Description
//有一楼梯共M级，刚开始时你在第一级，若每次只能跨上一级或二级，要走上第M级，共有多少种走法？
//
//Input
//输入数据首先包含一个整数N，表示测试实例的个数，然后是N行数据，每行包含一个整数M（1 <= M <= 40）, 表示楼梯的级数。
//
//Output
//对于每个测试实例，请输出不同走法的数量
#include "problem.h"
#include <iostream>
using namespace std;

int *getFloor(int n) {
	int* p = new int[n];
	p[0] = 0;
	p[1] = 1;
	p[2] = 2;
	for (int i = 3; i < n; i++)
		p[i] = p[i - 1] + p[i - 2];
	return p;
}
void problem2041() {
	int n, m;
	int* p = getFloor(55);
	while (cin >> n) {
		while (n--) {
			cin >> m;
			cout << p[m-1] << endl;
		}
	}
}