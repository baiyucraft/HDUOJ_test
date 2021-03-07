//Problem Description
//RPG girls今天和大家一起去游乐场玩，终于可以坐上梦寐以求的过山车了。可是，过山车的每一排只有两个座位，而且还有条不成文的规矩，就是每个女生必须找个个男生做partner和她同坐。但是，每个女孩都有各自的想法，举个例子把，Rabbit只愿意和XHD或PQK做partner，Grass只愿意和linle或LL做partner，PrincessSnow愿意和水域浪子或伪酷儿做partner。考虑到经费问题，boss刘决定只让找到partner的人去坐过山车，其他的人，嘿嘿，就站在下面看着吧。聪明的Acmer，你可以帮忙算算最多有多少对组合可以坐上过山车吗？
//
//Input
//输入数据的第一行是三个整数K, M, N，分别表示可能的组合数目，女生的人数，男生的人数。0 < K <= 1000
//	1 <= N 和M <= 500.接下来的K行，每行有两个数，分别表示女生Ai愿意和男生Bj做partner。最后一个0结束输入。
//
//Output
//对于每组数据，输出一个整数，表示可以坐上过山车的最多组合数。
#include "problem.h"
#include <iostream>
using namespace std;

int male, fmale;//性别数应为全局变量
int cp[501][501], girl[501], used[501];

bool find(int x){
    //为男生选合适的女生，从1开始
    for (int i = 1; i <= fmale; i++) {
        //满足女生有好感，且没有计算过（防止男生尝试同一个女生）
        if (cp[x][i] == 1 && used[i] == 0) {
            used[i] = 1;
            //满足女生未被选择或被该女生选择的男生有其他选择）
            if (girl[i] == 0 || find(girl[i])) {
                //该女生与x配对
                girl[i] = x;
                return true;
            }
        }
    }
    return false;
}
void problem2063() {
    int k, a, b;
    int sum, i;
    while (cin >> k && k) {
        cin >> fmale >> male;
        sum = 0;
        //初始化0（下同）
        memset(cp, 0, sizeof(cp));
        memset(girl, 0, sizeof(girl));
        for (i = 1; i <= k; i++) {
            cin >> a >> b;
            cp[b][a] = 1;
        }
        //从一号男生开始选择
        for (i = 1; i <= male; i++) {
            //初始化0（表示该男生未与任何女生尝试过）
            memset(used, 0, sizeof(used));
            if (find(i))//配对成功
                sum = sum + 1;
        }
        cout << sum << endl;
    }
}