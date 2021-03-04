//Problem Description
//Give you two numbers Aand B, if A is equal to B, you should print "YES", or print "NO".
//
//Input
//each test case contains two numbers Aand B.
//
//Output
//for each case, if A is equal to B, you should print "YES", or print "NO".
#include "problem.h"
#include <iostream>
#include <string>
using namespace std;

string toNum(string s) {
	if (s[0] == '+')
		s.erase(s.begin());
	size_t it = s.find('.');
	if (it != string::npos) {
		size_t tail = s.length() - 1;
		while (s[tail] == '0')
			s.erase(tail--);
	}
	if (s == "-0")
		s.erase(s.begin());
	if (*(s.end() - 1) == '.')
		s.erase(s.end() - 1);
	return s;
}

void problem2054() {
	string a, b;
	while (cin >> a >> b) 
		toNum(a) == toNum(b) ? cout << "YES" << endl : cout << "NO" << endl;
}