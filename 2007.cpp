//Problem Description
//给定一段连续的整数，求出他们中所有偶数的平方和以及所有奇数的立方和。
//
//Input
//输入数据包含多组测试实例，每组测试实例包含一行，由两个整数m和n组成。
//
//Output
//对于每组输入数据，输出一行，应包括两个整数x和y，分别表示该段连续的整数中所有偶数的平方和以及所有奇数的立方和。
//你可以认为32位整数足以保存结果。
#include "problem.h"
#include <iostream>
#include <cmath>
using namespace std;

void problem2007()
{
	int m, n, temp;
	int num1, num2;
	while (cin >> m >> n)
	{
		num1 = num2 = 0;
		if (m > n) 
		{
			temp = m;
			m = n;
			n = temp;
		}
		for (int i = m; i <= n; i++)
		{
			i % 2 ? num2 += pow(i, 3) : num1 += pow(i, 2);
		}
		cout << num1 << " " << num2 << endl;
	}
}
