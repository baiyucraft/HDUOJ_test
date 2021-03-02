//Problem Description
//输入一个字符串，判断其是否是C的合法标识符。
//
//Input
//输入数据包含多个测试实例，数据的第一行是一个整数n, 表示测试实例的个数，然后是n行输入数据，每行是一个长度不超过50的字符串。
//
//Output
//对于每组输入数据，输出一行。如果输入数据是C的合法标识符，则输出"yes"，否则，输出“no”。
#include "problem.h"
#include <iostream>
#include <string>
using namespace std;

bool isLegal(string s){
	if (s[0] <= '9' && s[0] >= '0') 
		return false;
	for (int i = 0; i < s.length(); i++)
		if (!(s[i] == '_' || s[i] <= '9' && s[i] >= '0' || s[i] <= 'z' && s[i] >= 'a' || s[i] <= 'Z' && s[i] >= 'A'))
			return false;
	return true;
}

void problem2024() {
	int n;
	string s;
	while (cin >> n) {
		getline(cin, s);
		while (n--){
			getline(cin, s);
			if (isLegal(s)) 
				cout << "yes" << endl;
			else 
				cout << "no" << endl;
		}
	}
}
