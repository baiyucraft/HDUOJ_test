//Problem Description
//���ڱ��ʽn ^ 2 + n + 41����n�ڣ�x, y����Χ��ȡ����ֵʱ������x, y��(-39 <= x < y <= 50)���ж��ñ��ʽ��ֵ�Ƿ�Ϊ������
//
//Input
//���������ж��飬ÿ��ռһ�У�����������x��y��ɣ���x = 0, y = 0ʱ����ʾ������������в�������
//
//Output
//����ÿ��������Χ�ڵ�ȡֵ��������ʽ��ֵ��Ϊ�����������"OK", �����������Sorry��, ÿ�����ռһ�С�
#include "problem.h"
#include <iostream>
#include <cmath>
using namespace std;

bool isShu(int x)
{
	for (int i = 2; i < sqrt(x); i++)
	{
		if (x % i == 0)
			return false;
	}
	return true;
}
void problem2012()
{
	int x, y;
	while (cin >> x >> y)
	{
		if (x == 0 && y == 0)
			break;
		for (x; x <= y; x++)
		{
			if (isShu(pow(x, 2) + x + 41))
				continue;
			else
			{
				cout << "Sorry";
				break;
			}
		}
		x > y ? cout << "OK" << endl : cout << endl;
	}
}