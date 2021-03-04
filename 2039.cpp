//Problem Description
//给定三条边，请你判断一下能不能组成一个三角形。
//
//Input
//输入数据第一行包含一个数M，接下有M行，每行一个实例，包含三个正数A, B, C。其中A, B, C < 1000;
//
//Output
//对于每个测试实例，如果三条边长A, B, C能组成三角形的话，输出YES，否则NO。
#include "problem.h"
#include <iostream>
using namespace std;

bool isStrangle(double a, double b, double c) {
	if (a + b <= c)
		return false;
	if (b + c <= a)
		return false;
	if (a + c <= b)
		return false;
	return true;
}

void problem2039() {
	int n;
	double a, b, c;
	while (cin >> n) {
		while (n--) {
			cin >> a >> b >> c;
			isStrangle(a, b, c) ? cout << "YES" << endl : cout << "NO" << endl;
		}
	}
}