#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];
int a[1005][1005];

int main()
{
    int n;
    cin >> n;
    // 初始化
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cin >> a[i][j];
        }
    }
    // 动态规划
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + a[i][j];
            // cout << dp[i][j] << " ";
        }
        // cout << endl;
    }
    int res = dp[n][1];
    for(int i = 1; i <= n; i++){
        if(dp[n][i] > res){
            res = dp[n][i];
        }
    }
    cout << res;
    return 0;
}