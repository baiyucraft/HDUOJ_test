//Problem Description
//Give you the widthand height of the rectangle, darw it.
//
//Input
//Input contains a number of test cases.For each case, there are two numbers nand m(0 < n, m < 75)indicate the widthand height of the rectangle.Iuput ends of EOF.
//
//Output
//For each case, you should draw a rectangle with the widthand height giving in the input.
//after each case, you should a blank line.
#include "problem.h"
#include <iostream>
using namespace std;

void problem2052() {
	int n, m;
	int i, j;
	while (cin >> n >> m) {
		for (i = 0; i < m + 2; i++) {
			if (i == 0 || i == m + 1) {
				cout << "+";
				for (j = 0; j < n; j++)
					cout << "-";
				cout << "+" << endl;
			}
			else {
				cout << "|";
				for (j = 0; j < n; j++)
					cout << " ";
				cout << "|" << endl;
			}
		}
		cout << endl;
	}
}