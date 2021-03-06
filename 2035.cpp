//Problem Description
//求A^ B的最后三位数表示的整数。
//说明：A^ B的含义是“A的B次方”
//
//Input
//输入数据包含多个测试实例，每个实例占一行，由两个正整数A和B组成（1 <= A, B <= 10000），如果A = 0, B = 0，则表示输入数据的结束，不做处理。
//
//Output
//对于每个测试实例，请输出A ^ B的最后三位表示的整数，每个输出占一行。
#include "problem.h"
#include <iostream>
#include <cmath>
using namespace std;

int powThree(int a, int b) {
    if (b == 1) return a;
    if (b % 2){
        return (powThree((a * a) % 1000, b / 2) * a) % 1000;
    }
    else{
        return (powThree((a * a) % 1000, b / 2)) % 1000;
    }
}
void problem2035() {
	int a, b;
	while (cin >> a >> b) {
		if (a == 0 && b == 0)
			break;
		cout << powThree(a, b) << endl;
	}
}
