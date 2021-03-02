//Problem Description
//��n��������С��������
//
//Input
//��������������ʵ����ÿ������ʵ���Ŀ�ʼ��һ��������n��Ȼ����n����������
//
//Output
//Ϊÿ���������������ǵ���С��������ÿ������ʵ�������ռһ�С�����Լ������������һ��32λ��������
#include "problem.h"
#include <iostream>
using namespace std;

int getGcd(int a, int b){
	if (b == 0)
		return a;
	return getGcd(b, a % b);
}
int getLcm(int a, int b) {
	return a / getGcd(a, b) * b;
}
void problem2028() {
	int n;
	int allLcm, x;
	while (cin >> n) {
		cin >> allLcm;
		while (n--!=1) {
			cin >> x;
			allLcm = getLcm(allLcm, x);
		}
		cout<<allLcm<<endl;
	}
}