//Problem Description
//����n(n < 100)�������ҳ�������С��������������ǰ����������������Щ����
//
//Input
//���������ж��飬ÿ��ռһ�У�ÿ�еĿ�ʼ��һ������n����ʾ�������ʵ������ֵ�ĸ��������ž���n��������n = 0��ʾ����Ľ�������������
//
//Output
//����ÿ���������ݣ��������������У�ÿ�����ռһ�С�
#include "problem.h"
#include <iostream>
using namespace std;

void problem2016() {
	int n, i, min, j;
	while (cin >> n) {
		if (n == 0)
			break;
		if (n == 1) {
			cin >> i;
			cout << i << endl;
		}
		int* p = new int[n];
		i = j = 0;
		while (i != n) {
			cin >> p[i++];
		}
		min = p[0];
		for(i=1;i<n;i++)
			if (min > p[i]) {
				min = p[i];
				j = i;
			}
		p[j] = p[0];
		p[0] = min;
		i = 0;
		cout << p[i++];
		while (--n)
			cout << " " << p[i++];
		cout << endl;
	}
}