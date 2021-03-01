//Problem Description
//统计给定的n个数中，负数、零和正数的个数。
//
//Input
//输入数据有多组，每组占一行，每行的第一个数是整数n（n < 100），表示需要统计的数值的个数，然后是n个实数；如果n = 0，则表示输入结束，该行不做处理。
//
//Output
//对于每组输入数据，输出一行a, b和c，分别表示给定的数据中负数、零和正数的个数。

#include "problem.h"
#include <iostream>
using namespace std;

void problem2008() 
{
	int n;
	double x;
	int a, b, c;
	while (cin >> n && n) 
	{
		a = b = c = 0;
		while (n--)
		{
			cin >> x;
			if (x < 0)
				a++;
			else if (x > 0)
				c++;
			else
				b++;
		}
		cout << a << " " << b << " " << c << endl;
	}
}