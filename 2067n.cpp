//Problem Description
//小兔的叔叔从外面旅游回来给她带来了一个礼物，小兔高兴地跑回自己的房间，拆开一看是一个棋盘，小兔有所失望。不过没过几天发现了棋盘的好玩之处。从起点(0，0)走到终点(n, n)的最短路径数是C(2n, n), 现在小兔又想如果不穿越对角线(但可接触对角线上的格点)，这样的路径数有多少 ? 小兔想了很长时间都没想出来，现在想请你帮助小兔解决这个问题，对于你来说应该不难吧!
//
//Input
//每次输入一个数n(1 <= n <= 35)，当n等于－1时结束输入。
//
//Output
//对于每个输入数据输出路径数，具体格式看Sample。
/*h(0) = 1
先考虑一个h(1) = 1明显。
两个节点的时候，h(2) = h(1) + h(0) = 2;
我们推广到一般的情况，n个节点的二叉树的情况分析，根节点是一定有的，只要去考虑左子树以及右子树的情况，左子树为0时h(0)* h(n - 1), 左子树有1个节点的时候h(1)* h(n - 2), 以此类推，根节点的左子树视作另一个根节点。即h(n) = h(0) * h(n - 1) + h(1) * h(n - 2) + … + h(n - 1) * h(0) (n >= 2)。*/
#include "problem.h"
#include <iostream>
using namespace std;
// 卡特兰数
__int64* getKTL(int n) {
	__int64* p = new __int64[n + 1];
	__int64 temp;
	p[0] = 1;
	p[1] = 1;
	for (int i = 2; i <= n; i++){
		temp = 0;
		for (int j = 0; j < i; j++){
			temp += p[j] * p[i - j - 1];
		}
		p[i] = temp;
	}
	return p;
}
void problem2067() {
	int n;
	__int64* p = getKTL(35);
	int i = 0;
	while (cin >> n) {
		if (n == -1)
			break;
		cout << ++i << " " << n << " " << 2 * p[n] << endl;
	}
}