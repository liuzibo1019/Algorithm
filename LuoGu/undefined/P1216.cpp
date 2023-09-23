#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n + 1][n + 1];
    memset(a, 0, sizeof(a));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cin >> a[i][j];
        }
    }
    int res[n + 1][n + 1];
    memset(res, 0, sizeof(res));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            res[i][j] = max(res[i - 1][j - 1], res[i - 1][j]) + a[i][j];
        }
    }
    int maxRes = 0;
    for (int i = 1; i <= n; i++)
    {
        if (res[n][i] > maxRes)
        {
            maxRes = res[n][i];
        }
    }

    cout << maxRes << endl;
    return 0;
}