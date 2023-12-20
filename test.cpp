#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a[100], b[100], bk = 0; // 首先，定义变量，n是数的数量，a是数字，b是为了排除掉重复的，bk是为了记录（book）
    cin >> n;                      // 读入
    for (int i = 0; i < n; i++)
    {
        cin >> a[i]; // 读入
        b[i] = 2;    // 注意，这里是重点，很多人没有满分都是因为这个，把重复的计算进去了，所以在这里我们需要一个类似开关的东西来表示它到底是否重复了，如果为2就是没动过的，如果为1就是动过的
    }
    for (int i = 0; i < n; i++)
    { // 因为只需要两个数两个数地计算，所以可以简单地弄两个循环，这里是数学的规律，如：1,2,3,4这四个数中选择两个数相加，要所有的组合方式，我们有1,2、1，3、1,4、2,3、2,4、3,4
        for (int o = i + 1; o < n; o++)
        {
            for (int p = 0; p < n; p++)
            { // 重复地把所有的数挨个测试一遍是不是所有组合的和
                if (a[p] == a[i] + a[o] && b[p] != 1)
                { // 判定是否是所有组合的和。为了唯一性，所以要测试a是不是被动过的，b就是在这里派上用场的
                    bk++;
                    b[p] = 1; // 如果没动过就把a对应的b设成动过的
                }
            }
        }
    }
    cout << bk; // 输出
    return 0;
}