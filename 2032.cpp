//Problem Description
//还记得中学时候学过的杨辉三角吗？具体的定义这里不再描述，你可以参考以下的图形：
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//1 5 10 10 5 1
//
//Input
//输入数据包含多个测试实例，每个测试实例的输入只包含一个正整数n（1 <= n <= 30），表示将要输出的杨辉三角的层数。
//
//Output
//对应于每一个输入，请输出相应层数的杨辉三角，每一层的整数之间用一个空格隔开，每一个杨辉三角后面加一个空行。
#include "problem.h"
#include <iostream>
using namespace std;

int getSum(int n) {
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return n + getSum(n - 1);
}
int* getStrangle(int n) {
	int* p = new int[getSum(n) + 1];
	p[1] = 1;
	p[2] = 1;
	p[3] = 1;
	int pre, prepre;
	int i, j;
	for (i = 3; i <= n; i++) {
		prepre = getSum(i - 2);
		pre = getSum(i - 1);
		p[pre + 1] = 1;
		for (j = 2; j < i; j++)
			p[pre + j] = p[prepre + j-1] + p[prepre + j];
		p[pre + i] = 1;
	}
	return p;
}
void problem2032() {
	int n, i, j, t;
	int* p = getStrangle(55);
	while (cin >> n) {
		for (i = 1; i <= n; i++) {
			t = getSum(i - 1);
			cout << p[t + 1];
			for (j = 2; j <= i; j++)
				cout << " " << p[t + j];
			cout << endl;
		}
		cout << endl;
	}
}