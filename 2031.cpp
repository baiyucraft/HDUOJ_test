//Problem Description
//����һ��ʮ������N������ת����R�����������
//
//Input
//�������ݰ����������ʵ����ÿ������ʵ��������������N(32λ����)��R��2 <= R <= 16, R < >10����
//
//Output
//Ϊÿ������ʵ�����ת���������ÿ�����ռһ�С����R����10�����Ӧ�����ֹ���ο�16���ƣ����磬10��A��ʾ���ȵȣ���
#include "problem.h"
#include <iostream>
using namespace std;
char dig[] = "0123456789ABCDEF";

void Rjinzhi(int n, int r) {
	if (n == 0 ) {
		return;
	} 
	else {
		Rjinzhi(n / r, r);
		cout << dig[n % r];
	}
}

void problem2031() {
	int n, r;
	while (cin >> n >> r) {
		if (n == 0)
			cout << n;
		else if (n < 0) {
			cout << "-";
			Rjinzhi(-n, r);
		}
		else
			Rjinzhi(n, r);
		cout << endl;
	}
}