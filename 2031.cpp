//Problem Description
//输入一个十进制数N，将它转换成R进制数输出。
//
//Input
//输入数据包含多个测试实例，每个测试实例包含两个整数N(32位整数)和R（2 <= R <= 16, R < >10）。
//
//Output
//为每个测试实例输出转换后的数，每个输出占一行。如果R大于10，则对应的数字规则参考16进制（比如，10用A表示，等等）。
#include "problem.h"
#include <iostream>
using namespace std;
char dig[] = "0123456789ABCDEF";

void Rjinzhi(int n, int r) {
	if (n == 0 ) {
		return;
	} 
	else {
		Rjinzhi(n / r, r);
		cout << dig[n % r];
	}
}

void problem2031() {
	int n, r;
	while (cin >> n >> r) {
		if (n == 0)
			cout << n;
		else if (n < 0) {
			cout << "-";
			Rjinzhi(-n, r);
		}
		else
			Rjinzhi(n, r);
		cout << endl;
	}
}