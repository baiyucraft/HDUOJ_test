//Problem Description
//据说在很久很久以前，可怜的兔子经历了人生中最大的打击——赛跑输给乌龟后，心中郁闷，发誓要报仇雪恨，于是躲进了杭州下沙某农业园卧薪尝胆潜心修炼，终于练成了绝技，能够毫不休息得以恒定的速度(VR m / s)一直跑。兔子一直想找机会好好得教训一下乌龟，以雪前耻。
//最近正值HDU举办50周年校庆，社会各大名流齐聚下沙，兔子也趁此机会向乌龟发起挑战。虽然乌龟深知获胜希望不大，不过迫于舆论压力，只能接受挑战。
//比赛是设在一条笔直的道路上，长度为L米，规则很简单，谁先到达终点谁就算获胜。
//无奈乌龟自从上次获胜以后，成了名龟，被一些八卦杂志称为“动物界的刘翔”，广告不断，手头也有了不少积蓄。为了能够再赢兔子，乌龟不惜花下血本买了最先进的武器——“"小飞鸽"牌电动车。这辆车在有电的情况下能够以VT1 m / s的速度“飞驰”，可惜电池容量有限，每次充满电最多只能行驶C米的距离，以后就只能用脚来蹬了，乌龟用脚蹬时的速度为VT2 m / s。更过分的是，乌龟竟然在跑道上修建了很多很多（N个)的供电站，供自己给电动车充电。其中，每次充电需要花费T秒钟的时间。当然，乌龟经过一个充电站的时候可以选择去或不去充电。
//比赛马上开始了，兔子和带着充满电的电动车的乌龟并列站在起跑线上。你的任务就是写个程序，判断乌龟用最佳的方案进军时，能不能赢了一直以恒定速度奔跑的兔子。
//
//Input
//本题目包含多组测试，请处理到文件结束。每个测试包括四行：
//第一行是一个整数L代表跑道的总长度
//第二行包含三个整数N，C，T，分别表示充电站的个数，电动车冲满电以后能行驶的距离以及每次充电所需要的时间
//第三行也是三个整数VR，VT1，VT2，分别表示兔子跑步的速度，乌龟开电动车的速度，乌龟脚蹬电动车的速度
//第四行包含了N(N <= 100)个整数p1, p2...pn, 分别表示各个充电站离跑道起点的距离，其中0 < p1 < p2 < ... < pn < L
//	其中每个数都在32位整型范围之内。
//
//Output
//当乌龟有可能赢的时候输出一行 “What a pity rabbit!"。否则输出一行"Good job, rabbit!";
//题目数据保证不会出现乌龟和兔子同时到达的情况。
#include "problem.h"
#include <iostream>
using namespace std;
const double INF = 0xfffff;//0x代表十六进制

void problem2059() {
	// 赛道长度L
	double L, len;
	// N充电站的个数，C电动车冲满电以后能行驶的距离，T每次充电所需要的时间
	int N, C, T;
	// Vr兔子跑步的速度，Vt1乌龟开电动车的速度，Vt2乌龟脚蹬电动车的速度
	double Vr, Vt1, Vt2;
	int i, j, time1, time2;
	while (cin >> L) {
		cin >> N >> C >> T;
		cin >> Vr >> Vt1 >> Vt2;
		// 充电站p
		int* p = new int[N + 2];
		double* DP = new double[N + 2];
		p[0] = 0;
		for (i = 1; i <= N; i++)
			cin >> p[i];
		p[N + 1] = L;
		//起点到起点最小耗费时间为0
		DP[0] = 0;
		for (i = 1; i <= N + 1; i++){
			//因为到第i个加电站最小耗费时间未知所以赋值无穷大
			DP[i] = INF;
			//倒序枚举I之前的所有充电站
			for (j = i - 1; j >= 0; j--) {
				len = p[i] - p[j];
				//如果是起点的这个特别的充电站
				if (j == 0) 
					if (len <= C) 
						DP[i] = DP[i] < DP[0] + len / Vt1 ? DP[i] : DP[0] + len / Vt1;
					//特判，状态转移为dp[i]=min(dp[i],dp[0]+s] s为起点直接开到i的时间
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
					//状态转移
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
//画个数轴想想，好理解 ，动态规划 
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
		p[0] = 0;      // 将起点看做第0个供电站 
		p[(int)N + 1] = L;   //终点看做最后一个供电站 
		dp[0] = 0;    //起点到起点的时间为0 
		for (int i = 1; i <= N + 1; i++) {
			dp[i] = ULONG_MAX;   //最大 
			for (int j = 0; j < i; j++) {
				double len = p[i] - p[j];
				if (len > C) {
					time = (len - C) / VT2 + C / VT1;
				}
				else {
					time = len / VT1;
				}
				time += dp[j];   //加上此站之前的最短时间
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