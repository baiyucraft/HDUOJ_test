//Problem Description
//����һ���ַ������ж����Ƿ���C�ĺϷ���ʶ����
//
//Input
//�������ݰ����������ʵ�������ݵĵ�һ����һ������n, ��ʾ����ʵ���ĸ�����Ȼ����n���������ݣ�ÿ����һ�����Ȳ�����50���ַ�����
//
//Output
//����ÿ���������ݣ����һ�С��������������C�ĺϷ���ʶ���������"yes"�����������no����
#include "problem.h"
#include <iostream>
#include <string>
using namespace std;

bool isLegal(string s){
	if (s[0] <= '9' && s[0] >= '0') 
		return false;
	for (int i = 0; i < s.length(); i++)
		if (!(s[i] == '_' || s[i] <= '9' && s[i] >= '0' || s[i] <= 'z' && s[i] >= 'a' || s[i] <= 'Z' && s[i] >= 'A'))
			return false;
	return true;
}

void problem2024() {
	int n;
	string s;
	while (cin >> n) {
		getline(cin, s);
		while (n--){
			getline(cin, s);
			if (isLegal(s)) 
				cout << "yes" << endl;
			else 
				cout << "no" << endl;
		}
	}
}
