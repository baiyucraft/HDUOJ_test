//Problem Description
//���������ÿ���ַ������������е������ĸ���ڸ���ĸ��������ַ�����(max)����
//
//Input
//�������ݰ����������ʵ����ÿ��ʵ����һ�г��Ȳ�����100���ַ�����ɣ��ַ������ɴ�Сд��ĸ���ɡ�
//
//Output
//����ÿ������ʵ�����һ���ַ���������Ľ���ǲ����ַ�����(max)����Ľ����������ڶ��������ĸ������ÿһ�������ĸ���涼����"(max)"��

#include "problem.h"
#include <iostream>
#include <string>
using namespace std;

void problem2025() {
	string s;
	string maxs = "(max)";
	char max;
	while (cin >> s) {
		max = s[0];
		for (auto i : s)
			if (max < i)
				max = i;
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == max) {
				s.insert(i + 1, maxs);
				i = i + 5;
			}
		}
		cout << s << endl;
	}
}