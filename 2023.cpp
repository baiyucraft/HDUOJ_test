//Problem Description
//假设一个班有n(n <= 50)个学生，每人考m(m <= 5)门课，求每个学生的平均成绩和每门课的平均成绩，并输出各科成绩均大于等于平均成绩的学生数量。
//
//Input
//输入数据有多个测试实例，每个测试实例的第一行包括两个整数n和m，分别表示学生数和课程数。然后是n行数据，每行包括m个整数（即：考试分数）。
//
//Output
//对于每个测试实例，输出3行数据，第一行包含n个数据，表示n个学生的平均成绩，结果保留两位小数；第二行包含m个数据，表示m门课的平均成绩，结果保留两位小数；第三行是一个整数，表示该班级中各科成绩均大于等于平均成绩的学生数量。
//每个测试实例后面跟一个空行。
#include "problem.h"
#include <iostream>
#include <iomanip>
using namespace std;

void problem2023() {
	int n, m;
	int i, j;
	double sum;
	int count;
	bool flag;
	while (cin >> n >> m) {
		// 创建存储数据的二维动态数组
		int** p = new int* [n];
		for (i = 0; i < n; i++)
			p[i] = new int[m];
		// 遍历每行计算每个人的平均分
		double* averStd = new double[n];
		for (i = 0; i < n; i++) {
			sum = 0;
			for (j = 0; j < m; j++) {
				cin >> p[i][j];
				sum += p[i][j];
			}
			averStd[i] = sum / m;
		}
		// 遍历每列计算每门课的平均分
		double* averSub = new double[m];
		count = 0;
		for (j = 0; j < m; j++) {
			sum = 0;
			for (i = 0; i < n; i++)
				sum += p[i][j];
			averSub[j] = sum / n;
		}
		// 各科成绩大于
		for (i = 0; i < n; i++) {
			flag = true;
			for (j = 0; j < m; j++)
				if (p[i][j] < averSub[j])
					flag = false;
			if (flag)
				count++;
		}
		cout << setiosflags(ios::fixed) << setprecision(2);
		cout << averStd[0];
		for (i = 1; i < n; i++)
			cout << " " << averStd[i];
		cout << endl;
		cout << averSub[0];
		for (j = 1; j < m; j++)
			cout << " " << averSub[j];
		cout << endl;
		cout << setprecision(0) << count << endl << endl;
	}
}