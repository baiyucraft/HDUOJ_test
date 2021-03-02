//Problem Description
//求n个数的最小公倍数。
//
//Input
//输入包含多个测试实例，每个测试实例的开始是一个正整数n，然后是n个正整数。
//
//Output
//为每组测试数据输出它们的最小公倍数，每个测试实例的输出占一行。你可以假设最后的输出是一个32位的整数。
#include "problem.h"
#include <iostream>
using namespace std;

int getGcd(int a, int b){
	if (b == 0)
		return a;
	return getGcd(b, a % b);
}
int getLcm(int a, int b) {
	return a / getGcd(a, b) * b;
}
void problem2028() {
	int n;
	int allLcm, x;
	while (cin >> n) {
		cin >> allLcm;
		while (n--!=1) {
			cin >> x;
			allLcm = getLcm(allLcm, x);
		}
		cout<<allLcm<<endl;
	}
}