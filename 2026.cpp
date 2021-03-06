//Problem Description
//输入一个英文句子，将每个单词的第一个字母改成大写字母。
//
//Input
//输入数据包含多个测试实例，每个测试实例是一个长度不超过100的英文句子，占一行。
//
//Output
//请输出按照要求改写后的英文句子。
#include "problem.h"
#include <iostream>
#include <string>
using namespace std;

void problem2026() {
	string s;
	while (getline(cin, s)) {
		s[0] -= 32;
		for (int i = 0; i < s.length(); i++) 
			if (s[i] == ' ')
				s[i++ + 1] -= 32;
		cout << s << endl;
	}
}