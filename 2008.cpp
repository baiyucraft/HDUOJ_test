//Problem Description
//ͳ�Ƹ�����n�����У���������������ĸ�����
//
//Input
//���������ж��飬ÿ��ռһ�У�ÿ�еĵ�һ����������n��n < 100������ʾ��Ҫͳ�Ƶ���ֵ�ĸ�����Ȼ����n��ʵ�������n = 0�����ʾ������������в�������
//
//Output
//����ÿ���������ݣ����һ��a, b��c���ֱ��ʾ�����������и�������������ĸ�����

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