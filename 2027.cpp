//Problem Description
//统计每个元音字母在字符串中出现的次数。
//
//Input
//输入数据首先包括一个整数n，表示测试实例的个数，然后是n行长度不超过100的字符串。
//
//Output
//对于每个测试实例输出5行，格式如下：
//a : num1
//e : num2
//i : num3
//o : num4
//u : num5
//多个测试实例之间由一个空行隔开。
//
//请特别注意：最后一块输出后面没有空行：）。

#include "problem.h"
#include <iostream>
#include <string>
using namespace std;

void dealS(string s) {
	int count[5] = { 0,0,0,0,0 };
	for (auto i : s) {
		switch (i) {
		case 'a':
			count[0]++;
			break;
		case 'e':
			count[1]++;
			break;
		case 'i':
			count[2]++;
			break;
		case 'o':
			count[3]++;
			break;
		case 'u':
			count[4]++;
			break;
		default:
			break;
		}
	}
	cout << "a:" << count[0] << endl;
	cout << "e:" << count[1] << endl;
	cout << "i:" << count[2] << endl;
	cout << "o:" << count[3] << endl;
	cout << "u:" << count[4] << endl;
}
void problem2027() {
	int n;
	string s;
	cin >> n;
	getline(cin, s);
	while (n-- != 1) {
		getline(cin, s);
		dealS(s);
		cout << endl;
	}
	getline(cin, s);
	dealS(s);
}