//Problem Description
//�����Ĵ�����һ�������ͷ�����һ�����ַ��������硰level�����ߡ�noon���ȵȾ��ǻ��Ĵ�����дһ�������ж϶�����ַ����Ƿ��ǡ����ġ���
//
//Input
//��������������ʵ�����������ݵĵ�һ����һ��������n, ��ʾ����ʵ���ĸ����������������n���ַ�����
//
//Output
//���һ���ַ����ǻ��Ĵ��������"yes", �������"no".
#include "problem.h"
#include <iostream>
#include <string>
using namespace std;

void problem2029() {
	int n;
	string s;
	bool flag;
	cin >> n;
	while (n--) {
		cin >> s;
		flag = true;
		for (int i = s.length() - 1; i >= s.length() / 2; i--) {
			if (s[i] != s[s.length() - 1 - i]) {
				flag = false;
				break;
			}
		}
		flag ? cout << "yes" << endl : cout << "no" << endl;
	}
}