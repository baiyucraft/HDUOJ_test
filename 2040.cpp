//Problem Description
//��ϣ����ѧ�ұϴ����˹����Ȼ���о��з��֣�220��������Լ��(�����������Լ��)֮��Ϊ��
//1 + 2 + 4 + 5 + 10 + 11 + 20 + 22 + 44 + 55 + 110��284��
//��284��������Լ��Ϊ1��2��4��71�� 142��������ǡ��Ϊ220�����Ƕ����������е��ܾ��棬����֮Ϊ�׺�����һ��ؽ���������������κ�һ����������һ��������Լ��֮�ͣ����������������׺�����
//�������ͱ�дһ�������жϸ������������Ƿ����׺���
//
//Input
//�������ݵ�һ�а���һ����M��������M�У�ÿ��һ��ʵ��, ������������A, B�� ���� 0 <= A, B <= 600000;
//
//Output
//����ÿ������ʵ�������A��B���׺����Ļ����YES���������NO��
#include "problem.h"
#include <iostream>
using namespace std;

bool isQin(int a, int b) {
	int sum_a = 1;
	int sum_b = 1;
	int i;
	for (i = 2; i * i < a; i++)
		if (a % i == 0)
			sum_a = sum_a + i + a / i;
	if (i * i == a)
		sum_a += i;
	for (i = 2; i * i < b; i++)
		if (b % i == 0)
			sum_b = sum_b + i + b / i;
	if (i * i == b)
		sum_b += i;
	if (sum_a == b && sum_b == a)
		return true;
	return false;
}
void problem2040() {
	int m;
	int a, b;
	while (cin >> m) {
		while (m--) {
			cin >> a >> b;
			isQin(a, b) ? cout << "YES" << endl : cout << "NO" << endl;
		}
	}
}