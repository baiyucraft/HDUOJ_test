//Problem Description
//����n(n <= 100)�����������վ���ֵ�Ӵ�С������������Ŀ��֤����ÿһ������ʵ�������е����ľ���ֵ������ȡ�
//
//Input
//���������ж��飬ÿ��ռһ�У�ÿ�еĵ�һ������Ϊn, ������n��������n = 0��ʾ�������ݵĽ�������������
//
//Output
//����ÿ������ʵ������������Ľ����������֮����һ���ո������ÿ������ʵ��ռһ�С�
#include "problem.h"
#include <iostream>
#include <cmath>
using namespace std;

void problem2020() {
	int n, i, j, k, x;
	while (cin >> n) {
		if (n == 0)
			break;
		int* p = new int[n];
		cin >> p[0];
		for (i = 1; i < n; i++) {
			cin >> x;
			for (j = 0; j < i; j++) {
				if (abs(p[j]) < abs(x)) {
					for (k = i; k > j; k--)
						p[k] = p[k - 1];
					p[j] = x;
					break;
				}
				p[i] = x;
			}
		}
		cout << p[0];
		for (i = 1; i < n; i++)
			cout << " " << p[i];
		cout << endl;
	}
}