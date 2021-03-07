//Problem Description
//��Ȼ�ݶ��Ǹ�·�գ������ں������һ��࣬��Ȼ������У԰����·���ˣ���~), ���ǲݶ���Ȼ��ϲ�����У���Ϊ����;�� �������ܶ��ˣ��������ӣ� ^ 0 ^ �����ܶ��£����ܷḻ�Լ��������������Կ������ķ羰�����ݶ���ȥ�ܶ�ط�������Ҫȥ����������ҹ����ȥ����˹����Ӱ��ȥ����ɽ�Ͽ�����ȥŦԼ���⿴ѩ����ȥ����ȿ���д�ţ�ȥ����̽���Ͻ�Ů�����ۿ����پͿ쵽�ˣ���ôһ���ʱ�䣬�ɲ����˷Ѱ���һ��Ҫ���Լ��úõķŸ��٣�����Ҳ���ܻķ���ѵ���������Բݶ�������Ҫ����̵�ʱ��ȥһ���Լ���ȥ�ĵط�����Ϊ�ݶ��ļ���һ��С���ϣ�û�л𳵾�����������ֻ��ȥ�ڽ��ĳ������𳵣��ÿ�����~����
//
//Input
//���������ж��飬ÿ��ĵ�һ������������T��S��D����ʾ��T��·���Ͳݶ������ڵĳ��е���S�����ݶ���ȥ�ĵط���D����
//������T�У�ÿ������������a��b��time, ��ʾa, b����֮��ĳ�����timeСʱ��(1 = < (a, b) <= 1000; a, b ֮������ж���·)
//	���ŵĵ�T + 1����S��������ʾ�Ͳݶ��������ĳ��У�
//	���ŵĵ�T + 2����D��������ʾ�ݶ���ȥ�ط���
//
//Output
//����ݶ���ȥĳ��ϲ���ĳ��е����ʱ�䡣
#include "problem.h"
#include <iostream>
#include <vector>
using namespace std;
const int max_v = 1005;
struct node {
	int end;   //�ߵ��յ�
	int time;  //�ߵ�ʱ�仨��
};
vector<node> p[max_v];  //�ڽӱ�˳��洢����ʽ�洢�Ľ�� (�ر�ֱ�Ӵ��ȥ)
int a[max_v];
bool b[max_v] = { 0 };    //��ǿ��ܵ��յ㣨����е�����һ�����ɣ�
bool flag[max_v] = { 0 }; //��������Ѿ��������ĵ�
//�����Ѿ��������Ϊ0
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
			p[i].clear();     //�������
		for (int i = 0; i < max_v; i++)
			b[i] = false;
	}
}