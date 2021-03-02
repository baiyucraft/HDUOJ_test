//Problem Description
//���ǵ���ѧʱ��ѧ������������𣿾���Ķ������ﲻ������������Բο����µ�ͼ�Σ�
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//1 5 10 10 5 1
//
//Input
//�������ݰ����������ʵ����ÿ������ʵ��������ֻ����һ��������n��1 <= n <= 30������ʾ��Ҫ�����������ǵĲ�����
//
//Output
//��Ӧ��ÿһ�����룬�������Ӧ������������ǣ�ÿһ�������֮����һ���ո������ÿһ��������Ǻ����һ�����С�
#include "problem.h"
#include <iostream>
using namespace std;

int getSum(int n) {
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return n + getSum(n - 1);
}
int* getStrangle(int n) {
	int* p = new int[getSum(n) + 1];
	p[1] = 1;
	p[2] = 1;
	p[3] = 1;
	int pre, prepre;
	int i, j;
	for (i = 3; i <= n; i++) {
		prepre = getSum(i - 2);
		pre = getSum(i - 1);
		p[pre + 1] = 1;
		for (j = 2; j < i; j++)
			p[pre + j] = p[prepre + j-1] + p[prepre + j];
		p[pre + i] = 1;
	}
	return p;
}
void problem2032() {
	int n, i, j, t;
	int* p = getStrangle(55);
	while (cin >> n) {
		for (i = 1; i <= n; i++) {
			t = getSum(i - 1);
			cout << p[t + 1];
			for (j = 2; j <= i; j++)
				cout << " " << p[t + j];
			cout << endl;
		}
		cout << endl;
	}
}