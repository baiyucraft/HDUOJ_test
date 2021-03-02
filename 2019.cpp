//Problem Description
//��n(n <= 100)���������Ѿ����մ�С����˳�����кã����������һ������x���뽫�������뵽�����У���ʹ�µ�������Ȼ����
//
//Input
//�������ݰ����������ʵ����ÿ��������������ɣ���һ����n��m���ڶ������Ѿ������n���������С�n��mͬʱΪ0��ʾ�������ݵĽ��������в�������
//
//Output
//����ÿ������ʵ������������µ�Ԫ�غ�����С�
#include "problem.h"
#include <iostream>
using namespace std;

void problem2019() {
	int n, m, i;
	while (cin >> n >> m) {
		if (n == 0 && m == 0)
			break;
		int* p = new int[n + 1];
		for (i = 0; i < n; i++) {
			cin >> p[i];
			if (p[i] > m) {
				p[i + 1] = p[i];
				p[i++] = m;
				break;
			}
		}
		if (i == n && p[i] < m)
			p[i] = m;
		while (++i <= n)
			cin >> p[i];
		cout << p[0];
		for (i = 1; i <= n; i++)
			cout << " " << p[i];
		cout << endl;
	}
}