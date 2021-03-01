//Problem Description
//���еĶ������£�
//���еĵ�һ��Ϊn���Ժ����Ϊǰһ���ƽ�����������е�ǰm��ĺ͡�
//
//Input
//���������ж��飬ÿ��ռһ�У�����������n��n < 10000����m(m < 1000)��ɣ�n��m�ĺ�����ǰ������
//
//Output
//����ÿ���������ݣ���������еĺͣ�ÿ������ʵ��ռһ�У�Ҫ�󾫶ȱ���2λС����

#include "problem.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void problem2009()
{
	double n, res;
	int m;
	while (cin >> n)
	{
		cin >> m;
		res = 0;
		while (m--)
		{
			res += n;
			n = sqrt(n);
		}
		cout << setiosflags(ios::fixed) << setprecision(2) << res << endl;
	}
}