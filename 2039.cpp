//Problem Description
//���������ߣ������ж�һ���ܲ������һ�������Ρ�
//
//Input
//�������ݵ�һ�а���һ����M��������M�У�ÿ��һ��ʵ����������������A, B, C������A, B, C < 1000;
//
//Output
//����ÿ������ʵ������������߳�A, B, C����������εĻ������YES������NO��
#include "problem.h"
#include <iostream>
using namespace std;

bool isStrangle(double a, double b, double c) {
	if (a + b <= c)
		return false;
	if (b + c <= a)
		return false;
	if (a + c <= b)
		return false;
	return true;
}

void problem2039() {
	int n;
	double a, b, c;
	while (cin >> n) {
		while (n--) {
			cin >> a >> b >> c;
			isStrangle(a, b, c) ? cout << "YES" << endl : cout << "NO" << endl;
		}
	}
}