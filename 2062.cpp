//Problem Description
//Consider the aggregate An = { 1, 2, бн, n }. For example, A1 = { 1 }, A3 = { 1,2,3 }. A subset sequence is defined as a array of a non - empty subset.Sort all the subset sequece of An in lexicography order.Your task is to find the m - th one.
//
//Input
//The input contains several test cases.Each test case consists of two numbers nand m(0 < n <= 20, 0 < m <= the total number of the subset sequence of An).
//
//Output
//For each test case, you should output the m - th subset sequence of An in one line.
#include "problem.h"
#include <iostream>
#include <vector>
using namespace std;

long long* getCount(int n) {
	long long* p = new long long[n + 1];
	p[0] = 0;
	p[1] = 1;
	for (int i = 2; i <= n; i++)
		p[i] = (p[i - 1] + 1) * i;
	return p;
}
void problem2062() {
	long long* p = getCount(20);
	vector <int> list;
	long long m;
	int n;
	int i, temp;
	while(cin >> n >> m) {
		list.clear();
		for (i = 1; i <= n; i++)
			list.push_back(i);
		for (i = n; i > 0; i--) {
			temp = (m - 1) / (p[i - 1] + 1);
			cout << list[temp];
			list.erase(list.begin() + temp);
			m = (m - 1) % (p[i - 1] + 1);
			if (m == 0)
				break;
			else
				cout << " ";
		}
		cout << endl;
	}
}