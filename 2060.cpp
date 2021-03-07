//Problem Description
//background :
//Philip likes to play the QQ game of Snooker when he wants a relax, though he was just a little vegetable - bird.Maybe you hadn't played that game yet, no matter, I'll introduce the rule for you first.
//There are 21 object balls on board, including 15 red balls and 6 color balls : yellow, green, brown, blue, pink, black.
//The player should use a white main ball to make the object balls roll into the hole, the sum of the ball's fixed value he made in the hole is the player's score.The player should firstly made a red ball into the hole, after that he gains red - ball's value(1 points), then he gets the chance to make a color ball, then alternately. The color ball should be took out until all the red-ball are in the hole. In other word, if there are only color balls left on board, the player should hit the object balls in this order: yellow(2 point), green(3 point), brown(4 point), blue(5 point), pink(6 point), black(7 point), after the ball being hit into the hole, they are not get out of the hole, after no ball left on board, the game ends, the player who has
//the higher score wins the game.PS : red object balls never get out of the hole.
//I just illustrate the rules that maybe used, if you want to contact more details, visit http ://sports.tom.com/snooker/ after
//the contest.
//
//for example, if there are 12 red balls on board(if there are still red ball left on board, it can be sure that all the color
//	balls must be on board either).So suppose Philp can continuesly hit the ball into the hole, he can get the maximun score is
//	12 * 1 (12 red - ball in one shoot) + 7 * 12(after hit a red ball, a black ball which was the most valuable ball should be the target) + 2 + 3 + 4 + 5 + 6 + 7(when no red ball left, make all the color ball in hole).
//	Now, your task is to judge whether Philip should make the decision to give up when telling you the condition on board(How many object balls still left not in the hole and the other player's score). If Philp still gets the chance to win, just print "Yes", otherwise print "No". (PS: if the max score he could get on board add his current score is equal to the opponent's current score, still output "Yes")
//
//
//Input
//The first line contains a numble N indicating the total conditions.Then followed by N lines, each line is made of three integers :
//Ball_Left P_Score O_Score represeting the ball number left on board, Philp's current score, and the opponent's current score.
//All the input value are in 32 bit integer value range.
//
//
//Output
//You should caculate the max score left Philp can gain, and judge whether he has the possiblity to win.
#include "problem.h"
#include <iostream>
using namespace std;
// 彩球的分
int colorScore[] = { 7,6,5,4,3,2 };

void problem2060() {
	int n;
	int Ball, PScore, OScore;
	int redBall, colorBall;
	while (cin >> n) {
		while (n--) {
			cin >> Ball >> PScore >> OScore;
			// 大于6个球，说明有红球
			if (Ball > 6) {
				redBall = Ball - 6; 
				colorBall = 6;
			} 
			else {
				redBall = 0;
				colorBall = Ball;
			}
			PScore = PScore + redBall * 8;
			while (colorBall--)
				PScore += colorScore[colorBall];
			PScore >= OScore ? cout << "Yes" << endl : cout << "No" << endl;
		}
	}
}