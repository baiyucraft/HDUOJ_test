//Problem Description
//输入两点坐标（X1, Y1）, （X2, Y2）, 计算并输出两点间的距离。
//
//Input
//输入数据有多组，每组占一行，由4个实数组成，分别表示x1, y1, x2, y2, 数据之间用空格隔开。
//
//Output
//对于每组输入数据，输出一行，结果保留两位小数。
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