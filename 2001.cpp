//Problem Description
//�����������꣨X1, Y1��, ��X2, Y2��, ���㲢��������ľ��롣
//
//Input
//���������ж��飬ÿ��ռһ�У���4��ʵ����ɣ��ֱ��ʾx1, y1, x2, y2, ����֮���ÿո������
//
//Output
//����ÿ���������ݣ����һ�У����������λС����
#include "problem.h"
#include <iostream>
#include <cmath>
#include<iomanip>
using namespace std;

void problem2001() 
{
    double x1,y1,x2,y2;
    while (cin>>x1>>y1>>x2>>y2)
    {
        double res;
        res = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        cout << setiosflags(ios::fixed) << setprecision(2) << res << endl;
    }
}