//Problem Description
//虽然草儿是个路痴（就是在杭电待了一年多，居然还会在校园里迷路的人，汗~), 但是草儿仍然很喜欢旅行，因为在旅途中 会遇见很多人（白马王子， ^ 0 ^ ），很多事，还能丰富自己的阅历，还可以看美丽的风景……草儿想去很多地方，她想要去东京铁塔看夜景，去威尼斯看电影，去阳明山上看海芋，去纽约纯粹看雪景，去巴黎喝咖啡写信，去北京探望孟姜女……眼看寒假就快到了，这么一大段时间，可不能浪费啊，一定要给自己好好的放个假，可是也不能荒废了训练啊，所以草儿决定在要在最短的时间去一个自己想去的地方！因为草儿的家在一个小镇上，没有火车经过，所以她只能去邻近的城市坐火车（好可怜啊~）。
//
//Input
//输入数据有多组，每组的第一行是三个整数T，S和D，表示有T条路，和草儿家相邻的城市的有S个，草儿想去的地方有D个；
//接着有T行，每行有三个整数a，b，time, 表示a, b城市之间的车程是time小时；(1 = < (a, b) <= 1000; a, b 之间可能有多条路)
//	接着的第T + 1行有S个数，表示和草儿家相连的城市；
//	接着的第T + 2行有D个数，表示草儿想去地方。
//
//Output
//输出草儿能去某个喜欢的城市的最短时间。
#include "problem.h"
#include <iostream>
#include <vector>
using namespace std;
const int max_v = 1005;
struct node {
	int end;   //边的终点
	int time;  //边的时间花销
};
vector<node> p[max_v];  //邻接表：顺序存储和链式存储的结合 (重边直接存进去)
int a[max_v];
bool b[max_v] = { 0 };    //标记可能的终点（多个中的任意一个即可）
bool flag[max_v] = { 0 }; //标记所有已经遍历到的点
//这里已经假设起点为0
void dijkstra() {  
	a[0] = 0;
	flag[0] = true;
	for (int i = 1; i < max_v; i++) {
		a[i] = INT_MAX;
		flag[i] = false;
	}
	int next = 0;
	while (!b[next]) {
		for (int i = 0; i < p[next].size(); i++) {
			a[p[next][i].end] = (a[p[next][i].end] < a[next] + p[next][i].time ? a[p[next][i].end] : a[next] + p[next][i].time);
		}
		int min = INT_MAX;
		for (int i = 0; i < max_v; i++) {
			if (!flag[i] && min > a[i]) {
				next = i;
				min = a[i];
			}
		}
		flag[next] = true;
	}
	cout << a[next] << endl;
}

void problem2066() {
	int load, city, area;
	while (cin >> load >> city >> area) {
		for (int i = 0; i < load; i++) {
			int temp1, temp2, temp3;
			cin >> temp1 >> temp2 >> temp3;
			node edge1; edge1.end = temp1; edge1.time = temp3;
			node edge2; edge2.end = temp2; edge2.time = temp3;
			p[temp1].push_back(edge2);
			p[temp2].push_back(edge1);
		}
		for (int i = 0; i < city; i++) {
			node edge;
			cin >> edge.end;
			edge.time = 0;
			p[0].push_back(edge);
		}
		for (int i = 0; i < area; i++) {
			int temp;
			cin >> temp;
			b[temp] = true;
		}
		dijkstra();
		for (int i = 0; i < max_v; i++)
			p[i].clear();     //清空数据
		for (int i = 0; i < max_v; i++)
			b[i] = false;
	}
}