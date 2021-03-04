//Problem Description
//��һֻ����ѵ�����۷�ֻ�������Ҳ����ڵķ䷿�����ܷ������С����̼����۷�ӷ䷿a�����䷿b�Ŀ���·������
//���У��䷿�Ľṹ������ʾ��
//
//Input
//�������ݵĵ�һ����һ������N, ��ʾ����ʵ���ĸ�����Ȼ����N �����ݣ�ÿ�а�����������a��b(0 < a < b < 50)��
//
//Output
//����ÿ������ʵ����������۷�ӷ䷿a�����䷿b�Ŀ���·������ÿ��ʵ�������ռһ�С�
#include "problem.h"
#include <iostream>
using namespace std;

long long *getBee(int n) {
	long long* p = new long long[n+1];
	p[1] = 1;
	p[2] = 2;
	for (int i = 3; i <= n; i++)
		p[i] = p[i - 1] + p[i - 2];
	return p;
}

void problem2044() {
	int n;
	int a, b;
	long long *p = getBee(50);
	while (cin >> n) {
		while (n--) {
			cin >> a >> b;
			cout << p[b - a] << endl;
		}
	}
}