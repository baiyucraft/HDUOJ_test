//Problem Description
//�����ڼ�, ʡ��HZ�ով�����һ��ʢ��ļ������, Ϊ��ʹ������еķḻһЩ, ˾����ʱ�������һ������˼�Ľ�Ŀ, ����"������", ����Ĳ�����������:
//����, ��ÿλ������ü���һģһ��, �����ϴ��ĺ��ͷ�������һ��;
//Ȼ��, �ø�λ����Ѱ���Լ�������.ÿ��ֻ׼��һ��, ���Ҳ����������һ��.
//���, �ҿ���ͷ, ����Ҵ��˶����Ҫ���ڹ���°�...
//����������Ҳ�������׵�����...
//����һ����N���»��, ������M�������Ҵ�������, �����������һ���ж����ֿ���.
//
//Input
//�������ݵĵ�һ����һ������C, ��ʾ����ʵ���ĸ�����Ȼ����C�����ݣ�ÿ�а�����������N��M(1 < M <= N <= 20)��
//
//Output
//����ÿ������ʵ���������һ���ж����ַ�����������Ŀ��ܣ�ÿ��ʵ�������ռһ�С�
#include "problem.h"
#include <iostream>
using namespace std;

long long* getCuopai(int n) {
	long long* p = new long long[n + 1];
	int i;
	p[1] = 0;
	p[2] = 1;
	for (i = 3; i <= n; i++) 
		p[i] = (i - 1) * (p[i - 1] + p[i - 2]);
	return p;
}
long long getPai(int n, int m) {
	long long res = 1, i=1;
	while (m--)
		res = res * n-- / (i++);
	return res;
}
void problem2049() {
	int c, n, m;
	long long* p = getCuopai(20);
	while (cin >> c) {
		while (c--) {
			cin >> n >> m;
			cout << p[m] * getPai(n, m) << endl;
		}
	}
}