//Problem Description
//��A^ B�������λ����ʾ��������
//˵����A^ B�ĺ����ǡ�A��B�η���
//
//Input
//�������ݰ����������ʵ����ÿ��ʵ��ռһ�У�������������A��B��ɣ�1 <= A, B <= 10000�������A = 0, B = 0�����ʾ�������ݵĽ�������������
//
//Output
//����ÿ������ʵ���������A ^ B�������λ��ʾ��������ÿ�����ռһ�С�
#include "problem.h"
#include <iostream>
#include <cmath>
using namespace std;

int powThree(int a, int b) {
    if (b == 1) return a;
    if (b % 2){
        return (powThree((a * a) % 1000, b / 2) * a) % 1000;
    }
    else{
        return (powThree((a * a) % 1000, b / 2)) % 1000;
    }
}
void problem2035() {
	int a, b;
	while (cin >> a >> b) {
		if (a == 0 && b == 0)
			break;
		cout << powThree(a, b) << endl;
	}
}
