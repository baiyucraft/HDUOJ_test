//Problem Description
//��������İ뾶ֵ��������������
//
//Input
//���������ж��飬ÿ��ռһ�У�ÿ�а���һ��ʵ������ʾ��İ뾶��
//
//Output
//�����Ӧ��������������ÿ���������ݣ����һ�У�������������λС����
#include "problem.h"
#include <iostream>
#include <cmath>
#include <iomanip>
#define PI 3.1415927
using namespace std;

void problem2002() 
{
	double r;
	while (cin >> r) 
		cout << setiosflags(ios::fixed) << setprecision(3) << pow(r, 3) * PI * (4 / 3.0) << endl;
}