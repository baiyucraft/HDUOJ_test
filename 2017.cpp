//Problem Description
//对于给定的一个字符串，统计其中数字字符出现的次数。
//
//Input
//输入数据有多行，第一行是一个整数n，表示测试实例的个数，后面跟着n行，每行包括一个由字母和数字组成的字符串。
//
//Output
//对于每个测试实例，输出该串中数值的个数，每个输出占一行。
#include "problem.h"
#include <iostream>
#include <string>
using namespace std;

void problem2017() {
	int n, count;
	string r;
	while (cin >> n) {
		while (n--) {
			count = 0;
            cin >> r;
			for (auto i : r)
				if (i >= '0' && i <= '9')
					count++;
			cout << count << endl;
		}
	}
}