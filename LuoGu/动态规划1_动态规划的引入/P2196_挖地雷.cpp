#include <bits/stdc++.h>
using namespace std;

int bomb[25];
int path[25][25];
long dp[25];
int rever[25];
int output[25];

int main()
{
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> bomb[i];
        dp[i] = bomb[i];
    }
    for (int i = 1; i <= N; i++)
    {
        for (int j = i + 1; j <= N; j++)
        {
            cin >> path[i][j];
        }
    }
    for (int i = 0; i <= N; i++)
    {
        for (int j = i; j <= N; j++)
        {
            if (path[i][j] == 1)
            {
                if (dp[i] + bomb[j] > dp[j])
                {
                    dp[j] = dp[i] + bomb[j];
                    rever[j] = i;
                }
                // cout << "i j " << i << " " << j << endl;
                // for (int k = 1; k <= N; k++)
                // {
                //     cout << dp[k] << " ";
                // }
            }
            // cout << endl;
        }
    }
    int maxVal = dp[1];
    int maxN = 1;
    for (int i = 1; i <= N; i++)
    {
        if (dp[i] > maxVal)
        {
            maxVal = dp[i];
            maxN = i;
        }
    }
    int cnt = 0;
    int x = maxN;
    while (x > 0)
    {
        output[cnt++] = rever[x];
        x = rever[x];
    }
    for (int i = cnt - 2; i >= 0; i--)
    {
        cout << output[i] << " ";
    }
    cout << maxN << " ";

    cout << endl;
    cout << maxVal;
    return 0;
}