//Problem Description
//��ʵ���ľ���ֵ��
//
//Input
//���������ж��飬ÿ��ռһ�У�ÿ�а���һ��ʵ����
//
//Output
//����ÿ���������ݣ�������ľ���ֵ��Ҫ��ÿ���������һ�У����������λС����

#include "problem.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void problem2003()
{
	double x;
	while (cin >> x)
		cout << setiosflags(ios::fixed) << setprecision(2) << fabs(x) << endl;
}