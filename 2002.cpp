//Problem Description
//根据输入的半径值，计算球的体积。
//
//Input
//输入数据有多组，每组占一行，每行包括一个实数，表示球的半径。
//
//Output
//输出对应的球的体积，对于每组输入数据，输出一行，计算结果保留三位小数。
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