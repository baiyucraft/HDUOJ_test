//Problem Description
//����n�������������������������ĳ˻���
//
//Input
//�������ݰ����������ʵ����ÿ������ʵ��ռһ�У�ÿ�еĵ�һ����Ϊn����ʾ��������һ����n����������n������������Լ���ÿ�����ݱض����ٴ���һ��������
//
//Output
//���ÿ�����е����������ĳ˻������ڲ���ʵ�������һ�С�
#include "problem.h"
#include <iostream>
using namespace std;

void problem2006()
{
	int n, x, num=1;
	while (cin >> n)
	{
		while (n--)
		{
			cin >> x;
			x % 2 ? num *= x : num *= 1;
		}
		cout << num << endl;
		num = 1;
	}
}