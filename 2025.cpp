//Problem Description
//对于输入的每个字符串，查找其中的最大字母，在该字母后面插入字符串“(max)”。
//
//Input
//输入数据包括多个测试实例，每个实例由一行长度不超过100的字符串组成，字符串仅由大小写字母构成。
//
//Output
//对于每个测试实例输出一行字符串，输出的结果是插入字符串“(max)”后的结果，如果存在多个最大的字母，就在每一个最大字母后面都插入"(max)"。

#include "problem.h"
#include <iostream>
#include <string>
using namespace std;

void problem2025() {
	string s;
	string maxs = "(max)";
	char max;
	while (cin >> s) {
		max = s[0];
		for (auto i : s)
			if (max < i)
				max = i;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == max) {
				s.insert(i + 1, maxs);
				i = i + 5;
			}
		}
		cout << s << endl;
	}
}