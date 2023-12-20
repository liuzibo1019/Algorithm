// copy

#include <cstdio>
using namespace std;

char c[10][5][4] = // 打表数组，坑1
    {              // 没有任何技术含量的打表
        "XXX",     // 0
        "X.X",
        "X.X",
        "X.X",
        "XXX",
        "..X", // 1,右对齐，坑2
        "..X",
        "..X",
        "..X",
        "..X",
        "XXX", // 2
        "..X",
        "XXX",
        "X..",
        "XXX",
        "XXX", // 3
        "..X",
        "XXX",
        "..X",
        "XXX",
        "X.X", // 4
        "X.X",
        "XXX",
        "..X",
        "..X",
        "XXX", // 5
        "X..",
        "XXX",
        "..X",
        "XXX",
        "XXX", // 6
        "X..",
        "XXX",
        "X.X",
        "XXX",
        "XXX", // 7
        "..X",
        "..X",
        "..X",
        "..X",
        "XXX", // 8
        "X.X",
        "XXX",
        "X.X",
        "XXX",
        "XXX", // 9
        "X.X",
        "XXX",
        "..X",
        "XXX"},
     ans[10][1000]; // 答案数组，坑4
int main()
{                    // 主函数
    int n, a, s = 0; // s表示当前位置
    scanf("%d", &n);
    while (n--)
    {
        scanf("%1d", &a);           // 坑3，小技巧%1d只读一位
        for (int i = 0; i < 5; i++) // 复制
            for (int j = 0; j < 3; j++)
                ans[i][s + j] = c[a][i][j];
        for (int i = 0; i < 5; i++)
            ans[i][s + 3] = '.'; // 一列'.'，坑5
        s += 4;                  // 往后挪
    }
    for (int i = 0; i < 5; i++)
    { // 输出
        for (int j = 0; j < s - 1; j++)
            printf("%c", ans[i][j]); // 注意范围，坑6
        printf("\n");
    }
    return 0; // 华丽结束
}