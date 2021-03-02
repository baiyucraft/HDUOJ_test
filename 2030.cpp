//Problem Description
//统计给定文本文件中汉字的个数。
//
//Input
//输入文件首先包含一个整数n，表示测试实例的个数，然后是n段文本。
//
//Output
//对于每一段文本，输出其中的汉字的个数，每个测试实例的输出占一行。
//
//[Hint:]从汉字机内码的特点考虑~
//汉字占两个字节，一个字节首位是1，因为第一位是符号位，转换为十进制就是负数
#include "problem.h"
#include <iostream>
#include <string>
using namespace std;

void problem2030() {
	int n, sum;
	string s;
	cin >> n;
	getline(cin, s);
	while (n--) {
		getline(cin, s);
		sum = 0;
		for (int i = 0; i<s.length(); i++) {
			if (s[i] < 0) {
				sum++;
				i++;
			}
		}
		cout << sum << endl;
	}
}