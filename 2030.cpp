//Problem Description
//ͳ�Ƹ����ı��ļ��к��ֵĸ�����
//
//Input
//�����ļ����Ȱ���һ������n����ʾ����ʵ���ĸ�����Ȼ����n���ı���
//
//Output
//����ÿһ���ı���������еĺ��ֵĸ�����ÿ������ʵ�������ռһ�С�
//
//[Hint:]�Ӻ��ֻ�������ص㿼��~
//����ռ�����ֽڣ�һ���ֽ���λ��1����Ϊ��һλ�Ƿ���λ��ת��Ϊʮ���ƾ��Ǹ���
#include "problem.h"
#include <iostream>
#include <string>
using namespace std;

void problem2030() {
	int n, sum;
	string s;
	cin >> n;
	getline(cin, s);
	while (n--) {
		getline(cin, s);
		sum = 0;
		for (int i = 0; i<s.length(); i++) {
			if (s[i] < 0) {
				sum++;
				i++;
			}
		}
		cout << sum << endl;
	}
}