//Problem Description
//����һ�����ڣ������������Ǹ���ĵڼ��졣
//
//Input
//���������ж��飬ÿ��ռһ�У����ݸ�ʽΪYYYY / MM / DD��ɣ�����μ�sample input, ���⣬��������ȷ�����е����������ǺϷ��ġ�
//
//Output
//����ÿ���������ݣ����һ�У���ʾ�������Ǹ���ĵڼ��졣
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