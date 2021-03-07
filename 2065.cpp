//Problem Description
//医学界发现的新病毒因其蔓延速度和Internet上传播的"红色病毒"不相上下, 被称为"红色病毒", 经研究发现, 该病毒及其变种的DNA的一条单链中, 胞嘧啶, 腺嘧啶均是成对出现的。
//现在有一长度为N的字符串, 满足一下条件:
//(1) 字符串仅由A, B, C, D四个字母组成;
//(2) A出现偶数次(也可以不出现);
//(3) C出现偶数次(也可以不出现);
//计算满足条件的字符串个数.
//当N = 2时, 所有满足条件的字符串有如下6个:BB, BD, DB, DD, AA, CC.
//由于这个数据肯能非常庞大, 你只要给出最后两位数字即可.
//
//Input
//每组输入的第一行是一个整数T, 表示测试实例的个数, 下面是T行数据, 每行一个整数N(1 <= N < 2 ^ 64), 当T = 0时结束.
//
//Output
//对于每个测试实例, 输出字符串个数的最后两位, 每组输出后跟一个空行.
/*根据问题可知道A、C只能出现偶数次，于是分别假设下面几种情况：
1、f[n][0]表示长度为n的合法字符串的数量
2、f[n][1]表示长度为n、仅A出现次数为奇数次的字符串数量
3、f[n][2]表示长度为n、仅C出现次数为奇数次的字符串数量
4、f[n][3]表示长度为n、A和C出现次数都为奇数次的字符串数量

对于第一种f[n][0]的情况，其可以表示为f[n - 1][0]加上B或D、f[n - 1][1]加上A、f[n - 1][2]加上C。
对于第二种f[n][1]的情况，其可以表示为f[n - 1][0]加上A、f[n - 1][1]加上B或D、f[n - 1][3]加上C。
对于第三种f[n][2]的情况，其可以表示为f[n - 1][0]加上C、f[n - 1][2]加上B或D、f[n - 1][3]加上A。
对于第四种f[n][3]的情况，其可以表示为f[n - 1][1]加上C、f[n - 1][2]加上A、f[n - 1][3]加上B或D。

则根据上面所述可以得到下列公式：
1. f[n][0] = f[n - 1][0] * 2 + f[n - 1][1] + f[n - 1][2]
2. f[n][1] = f[n - 1][1] * 2 + f[n - 1][0] + f[n - 1][3]
3. f[n][2] = f[n - 1][2] * 2 + f[n - 1][0] + f[n - 1][3]
4. f[n][3] = f[n - 1][3] * 2 + f[n - 1][1] + f[n - 1][2]

假设没有任何限制条件，则A、B、C、D组成的长度为n的字符串数量为4 ^ n。其刚好包括上面描述4中，于是可以得到
f[n][0] + f[n][1] + f[n][2] + f[n][3] = 4 ^ n。根据上面的4个公式可以得到 f[n][0] + f[n][3] = f[n][1] + f[n][2]。于是得到 f[n][1] + f[n][2] = 4 ^ n / 2。所以 f[n - 1][1] + f[n - 1][2] = 4 ^ (n - 1) / 2 = 2 * 4 ^ (n - 2)。

综上可以得到 f[n][0] = f[n - 1][0] * 2 + 2 * 4 ^ (n - 2)。

则可以得到：
f[n][0] = f[n - 1][0] * 2 + 2 * 4 ^ (n - 2)
f[n - 1][0] = f[n - 2][0] * 2 + 2 * 4 ^ (n - 3)
f[n - 2][0] = f[n - 3][0] * 2 + 2 * 4 ^ (n - 4)
……
f[2][0] = f[1][0] * 2 + 2 * 4 ^ 0
f[1][0] = 2

通过迭代可以求得
f[n][0] = 2 ^ (n - 1) * f[1][0] + 2 ^ (n - 1) * 4 ^ 0 + 2 ^ (n - 2) * 4 + … + 2 ^ (n - m) * 4 ^ (m - 1) + … + 2 * 4 ^ (n - 2)
= 2 ^ n + 2 ^ (n - 1) + 2 ^ n + 2 ^ (n + 1) + ... + 2 ^ (n + m - 1) + ... + 2 ^ (2n - 3)
= 2 ^ n + 2 ^ (2n - 2) - 2 ^ (n - 1)
= 2 ^ (n - 1) + 2 ^ (2n - 2)*/
#include "problem.h"
#include <iostream>
using namespace std;
// 快速幂(牛的)
long long fastPower(long long base, long long power, int mod) {
    long long result = 1;
    while (power > 0) {
        //此处等价于if(power%2==1)
        if (power & 1) 
            result = result * base % mod;
        //此处等价于power=power/2
        power >>= 1;
        base = (base * base) % mod;
    }
    return result;
}
void problem2065() {
	int t;
	long long n;
	int i;
	while (cin >> t && t) {
		i = 1;
		while (t--) {
            cin >> n;
            cout << "Case" << " " << i++ << ": " << (fastPower(4, n - 1,100) + fastPower(2, n - 1,100)) % 100 << endl;
		}
        cout << endl;
	}
}