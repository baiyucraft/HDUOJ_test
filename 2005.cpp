//Problem Description
//给定一个日期，输出这个日期是该年的第几天。
//
//Input
//输入数据有多组，每组占一行，数据格式为YYYY / MM / DD组成，具体参见sample input, 另外，可以向你确保所有的输入数据是合法的。
//
//Output
//对于每组输入数据，输出一行，表示该日期是该年的第几天。
#include "problem.h"
#include <iostream>
using namespace std;

bool isYear(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		return true;
	}
	return false;
}
void problem2005() 
{
	int year, month, day;
	int m[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	char temp;
	while (cin >> year >> temp >> month >> temp >> day)
	{
		isYear(year) ? m[1] = 29 : m[1] = 28;
		int sum=0;
		for (int i = 0; i < month - 1; i++)
			sum += m[i];
		sum += day;
		cout << sum << endl;
	}
}