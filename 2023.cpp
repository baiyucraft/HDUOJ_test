//Problem Description
//����һ������n(n <= 50)��ѧ����ÿ�˿�m(m <= 5)�ſΣ���ÿ��ѧ����ƽ���ɼ���ÿ�ſε�ƽ���ɼ�����������Ƴɼ������ڵ���ƽ���ɼ���ѧ��������
//
//Input
//���������ж������ʵ����ÿ������ʵ���ĵ�һ�а�����������n��m���ֱ��ʾѧ�����Ϳγ�����Ȼ����n�����ݣ�ÿ�а���m���������������Է�������
//
//Output
//����ÿ������ʵ�������3�����ݣ���һ�а���n�����ݣ���ʾn��ѧ����ƽ���ɼ������������λС�����ڶ��а���m�����ݣ���ʾm�ſε�ƽ���ɼ������������λС������������һ����������ʾ�ð༶�и��Ƴɼ������ڵ���ƽ���ɼ���ѧ��������
//ÿ������ʵ�������һ�����С�
#include "problem.h"
#include <iostream>
#include <iomanip>
using namespace std;

void problem2023() {
	int n, m;
	int i, j;
	double sum;
	int count;
	bool flag;
	while (cin >> n >> m) {
		// �����洢���ݵĶ�ά��̬����
		int** p = new int* [n];
		for (i = 0; i < n; i++)
			p[i] = new int[m];
		// ����ÿ�м���ÿ���˵�ƽ����
		double* averStd = new double[n];
		for (i = 0; i < n; i++) {
			sum = 0;
			for (j = 0; j < m; j++) {
				cin >> p[i][j];
				sum += p[i][j];
			}
			averStd[i] = sum / m;
		}
		// ����ÿ�м���ÿ�ſε�ƽ����
		double* averSub = new double[m];
		count = 0;
		for (j = 0; j < m; j++) {
			sum = 0;
			for (i = 0; i < n; i++)
				sum += p[i][j];
			averSub[j] = sum / n;
		}
		// ���Ƴɼ�����
		for (i = 0; i < n; i++) {
			flag = true;
			for (j = 0; j < m; j++)
				if (p[i][j] < averSub[j])
					flag = false;
			if (flag)
				count++;
		}
		cout << setiosflags(ios::fixed) << setprecision(2);
		cout << averStd[0];
		for (i = 1; i < n; i++)
			cout << " " << averStd[i];
		cout << endl;
		cout << averSub[0];
		for (j = 1; j < m; j++)
			cout << " " << averSub[j];
		cout << endl;
		cout << setprecision(0) << count << endl << endl;
	}
}