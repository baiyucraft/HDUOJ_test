//Problem Description
//输入一个百分制的成绩t，将其转换成对应的等级，具体转换规则如下：
//90~100为A;
//80~89为B;
//70~79为C;
//60~69为D;
//0~59为E;
//
//Input
//输入数据有多组，每组占一行，由一个整数组成。
//
//Output
//对于每组输入数据，输出一行。如果输入数据不在0~100范围内，请输出一行：“Score is error!”。

#include "problem.h"
#include <iostream>
using namespace std;

void problem2004()
{
	int score;
	while (cin >> score)
	{
		if (score >= 0 && score <= 100)
		{
			score = score / 10;
			switch (score)
			{
			case 10:
			case 9:
				cout << "A" << endl;
				break;
			case 8:
				cout << "B" << endl;
				break;
			case 7:
				cout << "C" << endl;
				break;
			case 6:
				cout << "D" << endl;
				break;
			default:
				cout << "E" << endl;
				break;
			}
		}
		else
		{
			cout << "Score is error!" << endl;
		}
	}
}
