//Problem Description
//��һ¥�ݹ�M�����տ�ʼʱ���ڵ�һ������ÿ��ֻ�ܿ���һ���������Ҫ���ϵ�M�������ж������߷���
//
//Input
//�����������Ȱ���һ������N����ʾ����ʵ���ĸ�����Ȼ����N�����ݣ�ÿ�а���һ������M��1 <= M <= 40��, ��ʾ¥�ݵļ�����
//
//Output
//����ÿ������ʵ�����������ͬ�߷�������
#include "problem.h"
#include <iostream>
using namespace std;

int *getFloor(int n) {
	int* p = new int[n];
	p[0] = 0;
	p[1] = 1;
	p[2] = 2;
	for (int i = 3; i < n; i++)
		p[i] = p[i - 1] + p[i - 2];
	return p;
}
void problem2041() {
	int n, m;
	int* p = getFloor(55);
	while (cin >> n) {
		while (n--) {
			cin >> m;
			cout << p[m-1] << endl;
		}
	}
}