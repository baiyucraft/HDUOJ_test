//Problem Description
//���ڸ�����һ���ַ�����ͳ�����������ַ����ֵĴ�����
//
//Input
//���������ж��У���һ����һ������n����ʾ����ʵ���ĸ������������n�У�ÿ�а���һ������ĸ��������ɵ��ַ�����
//
//Output
//����ÿ������ʵ��������ô�����ֵ�ĸ�����ÿ�����ռһ�С�
#include "problem.h"
#include <iostream>
#include <string>
using namespace std;

void problem2017() {
	int n, count;
	string r;
	while (cin >> n) {
		while (n--) {
			count = 0;
            cin >> r;
			for (auto i : r)
				if (i >= '0' && i <= '9')
					count++;
			cout << count << endl;
		}
	}
}