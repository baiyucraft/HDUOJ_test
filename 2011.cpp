//Problem Description
//����ʽ���������£�
//1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 - 1 / 6 + ...
//������������ö���ʽ��ǰn��ĺ͡�
//
//Input
//����������2����ɣ�������һ��������m��m < 100������ʾ����ʵ���ĸ������ڶ��а���m��������������ÿһ������(������Ϊn, n < 1000������ö���ʽ��ǰn��ĺ͡�
//
//Output
//����ÿ������ʵ��n��Ҫ���������ʽǰn��ĺ͡�ÿ������ʵ�������ռһ�У��������2λС����
#include "problem.h"
#include <iostream>
#include <iomanip>
using namespace std;

void problem2011()
{
	int m, n, temp;
	double sum;
	while (cin >> m)
	{
		while (m--)
		{
			cin >> n;
			sum = temp = 0;
			while (n != temp)
				++temp % 2 ? sum += 1.0 / temp : sum -= 1.0 / temp;
			cout << setiosflags(ios::fixed) << setprecision(2) << sum << endl;
		}
	}
}