#include <bits/stdc++.h>
using namespace std;

int cost[105];
int value[105];
int dp[105][1005];

int main()
{
    int T, M;
    cin >> T >> M;
    for (int i = 1; i <= M; i++)
    {
        cin >> cost[i] >> value[i];
    }
    // dp数组含义: dp[i][j] 表示从0 - i-1中选草药, 剩余j的容量时的最大价值
    // 递推公式: dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - cost[i]] + value[i])

    for (int i = 1; i <= M; i++)
    {
        // for (int j = T; j >= 0; j--)
        for(int j = 1; j <= T; j++)
        {
            if (j >= cost[i])
            {
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - cost[i]] + value[i]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
            // cout << dp[i][j] << " ";
        }
        // cout << endl;
    }
    cout << dp[M][T];
    return 0;
}