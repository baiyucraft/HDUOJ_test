//Problem Description
//��һ������Ϊn(n <= 100)�����У������ж���Ϊ��2��ʼ�ĵ�������ż��������Ҫ���㰴��˳��ÿm�������һ��ƽ��ֵ����������m��������ʵ��������ƽ��ֵ����������ƽ��ֵ���С�
//
//Input
//���������ж��飬ÿ��ռһ�У���������������n��m��n��m�ĺ�������������
//
//Output
//����ÿ���������ݣ����һ��ƽ��ֵ���У�ÿ�����ռһ�С�
#include "problem.h"
#include <iostream>
using namespace std;

void problem2015() {
	int n, m, sum;
	int num, i, total;
	while (cin >> n) {
		cin >> m;
		total = i = 0;
		while (i < n){
			num = sum = 0;
			while (num++ != m) {
				if (i == n) 
					break;
				sum += (2 * ++i);
			}
			if (total++ == 0)
				cout << sum / m;
			else if (num > m)
				cout << " " << sum / m;
			else
				cout << " " << sum / (num - 1);
		}
		cout << endl;
	}
}