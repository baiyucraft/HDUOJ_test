//Problem Description
//��˵�ںܾúܾ���ǰ�����������Ӿ��������������Ĵ��������������ڹ���������ƣ�����Ҫ����ѩ�ޣ����Ƕ���˺�����ɳĳũҵ԰��н����Ǳ�����������������˾������ܹ�������Ϣ���Ժ㶨���ٶ�(VR m / s)һֱ�ܡ�����һֱ���һ���úõý�ѵһ���ڹ꣬��ѩǰ�ܡ�
//�����ֵHDU�ٰ�50����У�죬���������������ɳ������Ҳ�ô˻������ڹ귢����ս����Ȼ�ڹ���֪��ʤϣ�����󣬲�����������ѹ����ֻ�ܽ�����ս��
//����������һ����ֱ�ĵ�·�ϣ�����ΪL�ף�����ܼ򵥣�˭�ȵ����յ�˭�����ʤ��
//�����ڹ��Դ��ϴλ�ʤ�Ժ󣬳������꣬��һЩ������־��Ϊ�����������衱����治�ϣ���ͷҲ���˲��ٻ��Ϊ���ܹ���Ӯ���ӣ��ڹ겻ϧ����Ѫ���������Ƚ�������������"С�ɸ�"�Ƶ綯�������������е��������ܹ���VT1 m / s���ٶȡ��ɳۡ�����ϧ����������ޣ�ÿ�γ��������ֻ����ʻC�׵ľ��룬�Ժ��ֻ���ý������ˣ��ڹ��ýŵ�ʱ���ٶ�ΪVT2 m / s�������ֵ��ǣ��ڹ꾹Ȼ���ܵ����޽��˺ܶ�ܶࣨN��)�Ĺ���վ�����Լ����綯����硣���У�ÿ�γ����Ҫ����T���ӵ�ʱ�䡣��Ȼ���ڹ꾭��һ�����վ��ʱ�����ѡ��ȥ��ȥ��硣
//�������Ͽ�ʼ�ˣ����Ӻʹ��ų�����ĵ綯�����ڹ겢��վ���������ϡ�����������д�������ж��ڹ�����ѵķ�������ʱ���ܲ���Ӯ��һֱ�Ժ㶨�ٶȱ��ܵ����ӡ�
//
//Input
//����Ŀ����������ԣ��봦���ļ�������ÿ�����԰������У�
//��һ����һ������L�����ܵ����ܳ���
//�ڶ��а�����������N��C��T���ֱ��ʾ���վ�ĸ������綯���������Ժ�����ʻ�ľ����Լ�ÿ�γ������Ҫ��ʱ��
//������Ҳ����������VR��VT1��VT2���ֱ��ʾ�����ܲ����ٶȣ��ڹ꿪�綯�����ٶȣ��ڹ�ŵŵ綯�����ٶ�
//�����а�����N(N <= 100)������p1, p2...pn, �ֱ��ʾ�������վ���ܵ����ľ��룬����0 < p1 < p2 < ... < pn < L
//	����ÿ��������32λ���ͷ�Χ֮�ڡ�
//
//Output
//���ڹ��п���Ӯ��ʱ�����һ�� ��What a pity rabbit!"���������һ��"Good job, rabbit!";
//��Ŀ���ݱ�֤��������ڹ������ͬʱ����������
#include "problem.h"
#include <iostream>
using namespace std;
const double INF = 0xfffff;//0x����ʮ������

void problem2059() {
	// ��������L
	double L, len;
	// N���վ�ĸ�����C�綯���������Ժ�����ʻ�ľ��룬Tÿ�γ������Ҫ��ʱ��
	int N, C, T;
	// Vr�����ܲ����ٶȣ�Vt1�ڹ꿪�綯�����ٶȣ�Vt2�ڹ�ŵŵ綯�����ٶ�
	double Vr, Vt1, Vt2;
	int i, j, time1, time2;
	while (cin >> L) {
		cin >> N >> C >> T;
		cin >> Vr >> Vt1 >> Vt2;
		// ���վp
		int* p = new int[N + 2];
		double* DP = new double[N + 2];
		p[0] = 0;
		for (i = 1; i <= N; i++)
			cin >> p[i];
		p[N + 1] = L;
		//��㵽�����С�ķ�ʱ��Ϊ0
		DP[0] = 0;
		for (i = 1; i <= N + 1; i++){
			//��Ϊ����i���ӵ�վ��С�ķ�ʱ��δ֪���Ը�ֵ�����
			DP[i] = INF;
			//����ö��I֮ǰ�����г��վ
			for (j = i - 1; j >= 0; j--) {
				len = p[i] - p[j];
				//�������������ر�ĳ��վ
				if (j == 0) 
					if (len <= C) 
						DP[i] = DP[i] < DP[0] + len / Vt1 ? DP[i] : DP[0] + len / Vt1;
					//���У�״̬ת��Ϊdp[i]=min(dp[i],dp[0]+s] sΪ���ֱ�ӿ���i��ʱ��
					else 
						DP[i] = DP[i] < DP[0] + C / Vt1 + (len - C) / Vt2 ? DP[i] : DP[0] + C / Vt1 + (len - C) / Vt2;
				else { 
					time1 = T; 
					time2 = 0;  
					time2 += len / Vt2;
					if (len <= C) 
						time1 += len / Vt1;
					else 
						time1 = time1 + len / Vt1 + (len - C) / Vt2;
					//״̬ת��
					DP[i] = DP[i] < DP[j] + time2 ? DP[i] : DP[j] + time2;
					DP[i] = DP[i] < DP[j] + time1 ? DP[i] : DP[j] + time1;
				}
			}
		}
		DP[N + 1] < (L / Vr)? cout << "What a pity rabbit!" << endl: cout << "Good job,rabbit!" << endl;
		delete[] p, DP;
	}
}

/*#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<limits.h>
//�����������룬����� ����̬�滮 
double min(double a, double b) {
	return a > b ? b : a;
}
int main() {
	double L, N, C, T, VR, VT1, VT2, time, ti;
	double p[102], dp[102];
	while (scanf("%lf", &L) != EOF) {
		scanf("%lf%lf%lf", &N, &C, &T);
		scanf("%lf%lf%lf", &VR, &VT1, &VT2);
		for (int i = 1; i <= N; i++) {
			scanf("%lf", &p[i]);
		}
		p[0] = 0;      // ����㿴����0������վ 
		p[(int)N + 1] = L;   //�յ㿴�����һ������վ 
		dp[0] = 0;    //��㵽����ʱ��Ϊ0 
		for (int i = 1; i <= N + 1; i++) {
			dp[i] = ULONG_MAX;   //��� 
			for (int j = 0; j < i; j++) {
				double len = p[i] - p[j];
				if (len > C) {
					time = (len - C) / VT2 + C / VT1;
				}
				else {
					time = len / VT1;
				}
				time += dp[j];   //���ϴ�վ֮ǰ�����ʱ��
				if (j > 0) {
					time += T;
				}
				dp[i] = min(dp[i], time);
			}
		}
		ti = L / VR;
		if (dp[(int)N + 1] > ti) printf("Good job,rabbit!\n");
		else printf("What a pity rabbit!\n");
	}
}*/