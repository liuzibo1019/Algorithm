#include <bits/stdc++.h>
using namespace std;

long long cost[10000005], value[10005];
long long dp[10000005];
int main()
{
    int t, m;
    cin >> t >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> cost[i] >> value[i];
    }
    // for (int i = 0; i < m; i++)
    // {
    //     cout << cost[i] << " " << value[i] << endl;
    // }
    for (int i = 0; i < m; i++)
    {
        for (int j = cost[i]; j <= t; j++)
        {
            dp[j] = max(dp[j], dp[j - cost[i]] + value[i]);
        }
    }
    cout << dp[t];
    return 0;
}