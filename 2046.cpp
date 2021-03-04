//Problem Description
//��2��n��һ�������η�����, ��һ��1�� 2�Ĺ�����������, ����n, ����̷ŷ���������.
//����n = 3ʱ, Ϊ2�� 3���񣬹��Ƶ��̷ŷ���������, ����ͼ��
//
//Input
//���������ɶ�����ɣ�ÿ�а���һ������n, ��ʾ�ò���ʵ���ĳ����η���Ĺ����2��n(0 < n <= 50)��
//
//Output
//����ÿ������ʵ����������̷ŷ�����������ÿ��ʵ�������ռһ�С�
#include "problem.h"
#include <iostream>
using namespace std;

long long *getN(int n) {
	long long* p = new long long[n + 1];
	p[1] = 1;
	p[2] = 2;
	for (int i = 3; i <= n; i++)
		p[i] = p[i - 1] + p[i - 2];
	return p;
}
void problem2046() {
	int n;
	long long* p = getN(50);
	while (cin >> n)
		cout << p[n] << endl;
}