//Problem Description
//background :
//A new semester comes, and the HDU also meets its 50th birthday.No matter what's your major, the only thing I want to tell you is:"Treasure the college life and seize the time." Most people thought that the college life should be colorful, less presure.But in actual, the college life is also busy and rough. If you want to master the knowledge learned from the book, a great deal of leisure time should be spend on individual study and practise, especially on the latter one. I think the every one of you should take the learning attitude just as you have in senior school.
//"No pain, No Gain", HDU also has scholarship, who can win it ? That's mainly rely on the GPA(grade-point average) of the student had got. Now, I gonna tell you the rule, and your task is to program to caculate the GPA.
//If there are K(K > 0) courses, the i - th course has the credit Ci, your score Si, then the result GPA is
//GPA = (C1 * S1 + C2 * S2 + ���� + Ci * Si����) / (C1 + C2 + ���� + Ci����) (1 <= i <= K, Ci != 0)
//If there is a 0 <= Si < 60, The GPA is always not existed.
//
//Input
//The first number N indicate that there are N test cases(N <= 50).In each case, there is a number K(the total courses number), then K lines followed, each line would obey the format : Course - Name(Length <= 30), Credits(<= 10), Score(<= 100).
//Notice : There is no blank in the Course Name.All the Inputs are legal
//
//Output
//Output the GPA of each case as discribed above, if the GPA is not existed, ouput:"Sorry!", else just output the GPA value which is rounded to the 2 digits after the decimal point.There is a blank line between two test cases.
#include "problem.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void problem2061() {
	int n, k;
	bool S;
	string thisN;
	double thisC, thisS;
	double totalSC, totalC;
	cout << setiosflags(ios::fixed) << setprecision(2);
	while (cin >> n) {
		while (n--) {
			cin >> k;
			S = true;
			totalSC = totalC = 0;
			while (k--) {
				cin >> thisN >> thisC >> thisS;
				if (thisS < 60) 
					S = false;
				else {
					totalC += thisC;
					totalSC += thisS * thisC;
				}
			}
			if (S)
				cout << totalSC / totalC << endl;
			else
				cout << "Sorry!" << endl;
			if(n!=0)
				cout << endl;
		}
	}
}