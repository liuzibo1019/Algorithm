#include <bits/stdc++.h>
using namespace std;

int cost[105], value[105];
int dp[1005];

int main()
{
    int T, M;
    cin >> T >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> cost[i] >> value[i];
    }
    for (int i = 0; i < M; i++)
    {
        for (int j = T; j >= 0; j--)
        {
            if (j >= cost[i])
            {
                dp[j] = max(dp[j - cost[i]] + value[i], dp[j]);
            }
        }
    }
    cout << dp[T];
    return 0;
}