//Problem Description
//求实数的绝对值。
//
//Input
//输入数据有多组，每组占一行，每行包含一个实数。
//
//Output
//对于每组输入数据，输出它的绝对值，要求每组数据输出一行，结果保留两位小数。

#include "problem.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void problem2003()
{
	double x;
	while (cin >> x)
		cout << setiosflags(ios::fixed) << setprecision(2) << fabs(x) << endl;
}