//Problem Description
//����һ���������������������������ż����ƽ�����Լ����������������͡�
//
//Input
//�������ݰ����������ʵ����ÿ�����ʵ������һ�У�����������m��n��ɡ�
//
//Output
//����ÿ���������ݣ����һ�У�Ӧ������������x��y���ֱ��ʾ�ö�����������������ż����ƽ�����Լ����������������͡�
//�������Ϊ32λ�������Ա�������
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
