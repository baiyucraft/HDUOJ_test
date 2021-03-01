//Problem Description
//有一个长度为n(n <= 100)的数列，该数列定义为从2开始的递增有序偶数，现在要求你按照顺序每m个数求出一个平均值，如果最后不足m个，则以实际数量求平均值。编程输出该平均值序列。
//
//Input
//输入数据有多组，每组占一行，包含两个正整数n和m，n和m的含义如上所述。
//
//Output
//对于每组输入数据，输出一个平均值序列，每组输出占一行。
#include "problem.h"
#include <iostream>
using namespace std;

void problem2015() {
	int n, m, sum;
	int num, i, total;
	while (cin >> n) {
		cin >> m;
		total = i = 0;
		while (i < n){
			num = sum = 0;
			while (num++ != m) {
				if (i == n) 
					break;
				sum += (2 * ++i);
			}
			if (total++ == 0)
				cout << sum / m;
			else if (num > m)
				cout << " " << sum / m;
			else
				cout << " " << sum / (num - 1);
		}
		cout << endl;
	}
}