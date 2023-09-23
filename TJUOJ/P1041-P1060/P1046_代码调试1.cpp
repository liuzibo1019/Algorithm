#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    char c1[100001], c2[100001];
    int i, j, n, m, dp[100001], book[100001], s;
    while (scanf("%s%s", c1, c2))
    {
        memset(dp, 0, sizeof(dp));
        memset(book, 0, sizeof(book));
        n = strlen(c1);
        m = strlen(c2);
        for (i = 1; i <= n; i++)
        {
            s = 0;
            for (j = 1; j <= m; j++)
            {
                if (c1[i - 1] == c2[j - 1])
                    dp[j] = book[j - 1] + 1;
                else if (dp[j - 1] > book[j])
                    dp[j] = dp[j - 1];
                else
                    dp[j] = book[j];
                book[j - 1] = s;
                s = dp[j];
            }
            book[m] = s;
        }
        printf("%d\n", dp[m]);
    }
    return 0;
}