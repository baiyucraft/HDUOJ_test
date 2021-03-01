//Problem Description
//�������ʻ��ļ��ڣ�ˮ�ɻ��������������˵Ĵ�������ѧ���и�ˮ�ɻ�����������������ģ�
//��ˮ�ɻ�������ָһ����λ�������ĸ�λ���ֵ������͵����䱾�������磺153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3��
//����Ҫ�����������m��n��Χ�ڵ�ˮ�ɻ�����
//
//Input
//���������ж��飬ÿ��ռһ�У�������������m��n��100 <= m <= n <= 999����
//
//Output
//����ÿ������ʵ����Ҫ����������ڸ�����Χ�ڵ�ˮ�ɻ���������˵�������ˮ�ɻ���������ڵ���m, ����С�ڵ���n������ж������Ҫ���С����������һ���������֮����һ���ո����;
//��������ķ�Χ�ڲ�����ˮ�ɻ����������no;
//ÿ������ʵ�������ռһ�С�

#include "problem.h"
#include <iostream>
#include <cmath>
using namespace std;

void problem2010()
{
	int m, n, total;
	int x1, x2, x3;
	while (cin >> m >> n)
	{
		total = 0;
		for (m; m <= n; m++)
		{
			x1 = m / 100;
			x2 = (m - x1 * 100) / 10;
			x3 = m % 10;
			if (pow(x1, 3) + pow(x2, 3) + pow(x3, 3) == m)
				total++ ? cout << " " << m : cout << m;
		}
		total ? cout << endl : cout << "no" << endl;
	}
}