//Problem Description
//HDU 2006'10 ACM contest的颁奖晚会隆重开始了！
//为了活跃气氛，组织者举行了一个别开生面、奖品丰厚的抽奖活动，这个活动的具体要求是这样的：
//首先，所有参加晚会的人员都将一张写有自己名字的字条放入抽奖箱中；
//然后，待所有字条加入完毕，每人从箱中取一个字条；
//最后，如果取得的字条上写的就是自己的名字，那么“恭喜你，中奖了！”
//大家可以想象一下当时的气氛之热烈，毕竟中奖者的奖品是大家梦寐以求的Twins签名照呀！不过，正如所有试图设计的喜剧往往以悲剧结尾，这次抽奖活动最后竟然没有一个人中奖！
//我的神、上帝以及老天爷呀，怎么会这样呢？
//不过，先不要激动，现在问题来了，你能计算一下发生这种情况的概率吗？
//不会算？难道你也想以悲剧结尾？！
//
//Input
//输入数据的第一行是一个整数C, 表示测试实例的个数，然后是C 行数据，每行包含一个整数n(1 < n <= 20), 表示参加抽奖的人数。
//
//Output
//对于每个测试实例，请输出发生这种情况的百分比，每个实例的输出占一行, 结果保留两位小数(四舍五入)，具体格式请参照sample output。
#include "problem.h"
#include <iostream>
#include <iomanip>
using namespace std;

double* getC(int n) {
	double* p = new double[n + 1];
	double* q = new double[n + 1];
	int i;
	p[1] = 0;
	p[2] = 1;
	q[1] = 1;
	q[2] = 2;
	for (i = 3; i <= n; i++) {
		p[i] = (i - 1) * (p[i - 1] + p[i - 2]);
		q[i] = q[i - 1] * i;
	}
	for (i = 1; i <= n; i++)
		p[i] /= q[i];
	return p;
}
void problem2048() {
	int c, n;
	double* p = getC(20);
	cout << setiosflags(ios::fixed) << setprecision(2);
	while (cin >> c) {
		while (c--) {
			cin >> n;
			cout << p[n] * 100 << "%" << endl;
		}
	}
}