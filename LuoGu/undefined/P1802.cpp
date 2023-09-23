#include <bits/stdc++.h>
using namespace std;

long long lose[1000005], win[1000005], use[1005];
long long dp[1005];

int main()
{
    int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> lose[i] >> win[i] >> use[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = x; j >= 0; j--)
        {
            if (j >= use[i])
            {
                dp[j] = max(dp[j - use[i]] + win[i], dp[j] + lose[i]);
            }
            else
            {
                dp[j] = dp[j] + lose[i];
            }
        }
    }
    cout << dp[x] * 5;
    return 0;
}