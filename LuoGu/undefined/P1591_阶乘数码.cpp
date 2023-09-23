#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;
int a[5000];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 1; i <= 1001; i++)
            a[i] = 0; //将数组清零。
        a[1] = 1;     //必须设为1。不能为0，不然怎么乘都是0。
        int n, i, j, k, m;
        int p = 1, jw = 0; // p代表位数，jw代表进位。
        scanf("%d%d", &n, &m);
        for (i = 2; i <= n; i++) //从2开始，反正任何数乘1还等于它本身。
        {
            jw = 0;
            for (j = 1; j <= p; j++) //高精度*单精度。
            {
                a[j] = a[j] * i + jw; //高精度*单精度+进位。
                jw = a[j] / 10;       //设置进位。
                a[j] = a[j] % 10;
            }
            while (jw > 0) //如果还有进位，处理进位。
            {
                a[j] = jw % 10;
                jw /= 10;
                j++;
            }
            p = j - 1;
        }
        long long sum = 0;
        for (i = p; i >= 1; i--) //搜索n!里有几个指定数字。
        {
            if (a[i] == m)
                sum++;
        }
        cout << sum << endl; //输出。
    }
    return 0;
}