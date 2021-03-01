//Problem Description
//青年歌手大奖赛中，评委会给参赛选手打分。选手得分规则为去掉一个最高分和一个最低分，然后计算平均得分，请编程输出某选手的得分。
//
//Input
//输入数据有多组，每组占一行，每行的第一个数是n(2 < n <= 100)，表示评委的人数，然后是n个评委的打分。
//
//Output
//对于每组输入数据，输出选手的得分，结果保留2位小数，每组输出占一行。
#include "problem.h"
#include <iostream>
#include <iomanip>
using namespace std;

void problem2014()
{
	int n, x;
	int max, min, sum;
	while (cin >> n)
	{
		double m = n - 2;
		cin >> x;
		max = min = sum = x;
		while (--n)
		{
			cin >> x;
			max < x ? max = x : max = max;
			min > x ? min = x : min = min;
			sum += x;
		}
		cout << setiosflags(ios::fixed) << setprecision(2) << (sum - min - max) / m << endl;
	}
}