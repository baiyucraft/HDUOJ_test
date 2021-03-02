//Problem Description
//“回文串”是一个正读和反读都一样的字符串，比如“level”或者“noon”等等就是回文串。请写一个程序判断读入的字符串是否是“回文”。
//
//Input
//输入包含多个测试实例，输入数据的第一行是一个正整数n, 表示测试实例的个数，后面紧跟着是n个字符串。
//
//Output
//如果一个字符串是回文串，则输出"yes", 否则输出"no".
#include "problem.h"
#include <iostream>
#include <string>
using namespace std;

void problem2029() {
	int n;
	string s;
	bool flag;
	cin >> n;
	while (n--) {
		cin >> s;
		flag = true;
		for (int i = s.length() - 1; i >= s.length() / 2; i--) {
			if (s[i] != s[s.length() - 1 - i]) {
				flag = false;
				break;
			}
		}
		flag ? cout << "yes" << endl : cout << "no" << endl;
	}
}