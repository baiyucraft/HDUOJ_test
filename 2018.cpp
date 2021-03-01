//Problem Description
//��һͷĸţ����ÿ�������һͷСĸţ��ÿͷСĸţ�ӵ��ĸ���ͷ��ʼ��ÿ�����Ҳ��һͷСĸţ������ʵ���ڵ�n���ʱ�򣬹��ж���ͷĸţ��
//
//Input
//���������ɶ������ʵ����ɣ�ÿ������ʵ��ռһ�У�����һ������n(0 < n < 55)��n�ĺ�������Ŀ��������
//n = 0��ʾ�������ݵĽ�������������
//
//Output
//����ÿ������ʵ��������ڵ�n���ʱ��ĸţ��������
//ÿ�����ռһ�С�
#include "problem.h"
#include <iostream>
using namespace std;

int* getCow() {
	int *cow = new int[55];
	cow[0] = 1;
	cow[1] = 2;
	cow[2] = 3;
	for (int i = 3; i < 55; i++)
		cow[i] = cow[i - 1] + cow[i - 3];
	return cow;
}

void problem2018() {
	int n;
	int* cow = getCow();
	while (cin >> n) {
		if (n == 0)
			break;
		cout << cow[n - 1] << endl;
	}
}