//Problem Description
//����һ��Ӣ�ľ��ӣ���ÿ�����ʵĵ�һ����ĸ�ĳɴ�д��ĸ��
//
//Input
//�������ݰ����������ʵ����ÿ������ʵ����һ�����Ȳ�����100��Ӣ�ľ��ӣ�ռһ�С�
//
//Output
//���������Ҫ���д���Ӣ�ľ��ӡ�
#include "problem.h"
#include <iostream>
#include <string>
using namespace std;

void problem2026() {
	string s;
	while (getline(cin, s)) {
		s[0] -= 32;
		for (int i = 0; i < s.length(); i++) 
			if (s[i] == ' ')
				s[i++ + 1] -= 32;
		cout << s << endl;
	}
}