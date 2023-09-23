#include <bits/stdc++.h>
using namespace std;

int a[200005];
long long dp[200005];

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    // dp[i]表示从1到i, 包含a[i]的的最大字段和
    // dp[i] = max dp[i - 1] + a[i], a[i];
    dp[1] = a[1];
    for (int i = 2; i <= n; i++)
    {
        dp[i] = max((long long)a[i], dp[i - 1] + a[i]);
        // cout << dp[i] << " ";
    }
    // cout << endl;
    int res = dp[1];
    for (int i = 1; i <= n; i++)
    {
        if (dp[i] > res)
        {
            res = dp[i];
        }
    }
    cout << res;
    return 0;
}