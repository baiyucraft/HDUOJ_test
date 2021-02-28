//Problem Description
//输入三个字符后，按各字符的ASCII码从小到大的顺序输出这三个字符。
//
//Input
//输入数据有多组，每组占一行，有三个字符组成，之间无空格。
//
//Output
//对于每组输入数据，输出一行，字符中间用一个空格分开。

#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int i, j;
    char a[4], t;
    while (gets_s(a))
    {
        for (j = 0; j < 3; j++)
            for (i = j + 1; i < 3; i++)
                if (a[j] > a[i])
                {
                    t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
        cout << a[0] << " " << a[1] << " " << a[2] << endl;
    }
    return 0;
}
