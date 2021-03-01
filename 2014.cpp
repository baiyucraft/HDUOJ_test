//Problem Description
//������ִ����У���ί�������ѡ�ִ�֡�ѡ�ֵ÷ֹ���Ϊȥ��һ����߷ֺ�һ����ͷ֣�Ȼ�����ƽ���÷֣��������ĳѡ�ֵĵ÷֡�
//
//Input
//���������ж��飬ÿ��ռһ�У�ÿ�еĵ�һ������n(2 < n <= 100)����ʾ��ί��������Ȼ����n����ί�Ĵ�֡�
//
//Output
//����ÿ���������ݣ����ѡ�ֵĵ÷֣��������2λС����ÿ�����ռһ�С�
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