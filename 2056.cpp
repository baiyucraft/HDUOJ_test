//Problem Description
//Given two rectanglesand the coordinates of two points on the diagonals of each rectangle, you have to calculate the area of the intersected part of two rectangles.its sides are parallel to OXand OY .
//
//Input
//Input The first line of input is 8 positive numbers which indicate the coordinates of four points that must be on each diagonal.The 8 numbers are x1, y1, x2, y2, x3, y3, x4, y4.That means the two points on the first rectangle are(x1, y1), (x2, y2); the other two points on the second rectangle are(x3, y3), (x4, y4).
//
//Output
//Output For each case output the area of their intersected part in a single line.accurate up to 2 decimal places.
#include "problem.h"
#include <iostream>
#include <iomanip>
using namespace std;
// 针对四条线计算
double deal(double x1, double x2, double x3, double x4) {
	double temp;
	if (x1 > x2) {
		temp = x1;
		x1 = x2; 
		x2 = temp;
	}
	if (x3 > x4) {
		temp = x3;
		x3 = x4;
		x4 = temp;
	}
	if (x1 < x3)
		if (x3 < x2)
			if (x2 < x4)
				return x2 - x3;
			else
				return x4 - x3;
		else
			return 0;
	else
		if (x1 < x4)
			if (x4 < x2)
				return x4 - x1;
			else
				return x2 - x1;
	return 0;
}
void problem2056() {
	double x[4], y[4];
	cout << setiosflags(ios::fixed) << setprecision(2);
	while (cin >> x[0] >> y[0] >> x[1] >> y[1] >> x[2] >> y[2] >> x[3] >> y[3]) {
		cout << deal(x[0], x[1], x[2], x[3]) * deal(y[0], y[1], y[2], y[3]) << endl;
	}
}