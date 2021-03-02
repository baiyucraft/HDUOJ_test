//Problem Description
//ͳ��ÿ��Ԫ����ĸ���ַ����г��ֵĴ�����
//
//Input
//�����������Ȱ���һ������n����ʾ����ʵ���ĸ�����Ȼ����n�г��Ȳ�����100���ַ�����
//
//Output
//����ÿ������ʵ�����5�У���ʽ���£�
//a : num1
//e : num2
//i : num3
//o : num4
//u : num5
//�������ʵ��֮����һ�����и�����
//
//���ر�ע�⣺���һ���������û�п��У�����

#include "problem.h"
#include <iostream>
#include <string>
using namespace std;

void dealS(string s) {
	int count[5] = { 0,0,0,0,0 };
	for (auto i : s) {
		switch (i) {
		case 'a':
			count[0]++;
			break;
		case 'e':
			count[1]++;
			break;
		case 'i':
			count[2]++;
			break;
		case 'o':
			count[3]++;
			break;
		case 'u':
			count[4]++;
			break;
		default:
			break;
		}
	}
	cout << "a:" << count[0] << endl;
	cout << "e:" << count[1] << endl;
	cout << "i:" << count[2] << endl;
	cout << "o:" << count[3] << endl;
	cout << "u:" << count[4] << endl;
}
void problem2027() {
	int n;
	string s;
	cin >> n;
	getline(cin, s);
	while (n-- != 1) {
		getline(cin, s);
		dealS(s);
		cout << endl;
	}
	getline(cin, s);
	dealS(s);
}