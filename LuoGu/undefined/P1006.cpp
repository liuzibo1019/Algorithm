#include <bits/stdc++.h>
using namespace std;
// #define 51 51

int m, n;
int f[51][51][51][51];
int a[51][51];

int main()
{
    cin >> m >> n;
    // memset(a, 0, sizeof(a));
    memset(f, 0, sizeof(f));
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    // for (int i = 1; i <= m; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= m; k++)
            {
                for (int l = 1; l <= n; l++)
                {
                    f[i][j][k][l] = max(max(f[i - 1][j][k - 1][l], f[i - 1][j][k][l - 1]), max(f[i][j - 1][k - 1][l], f[i][j - 1][k][l - 1])) + a[i][j] + a[k][l];
                    if (i == k && j == l)
                        f[i][j][k][l] -= a[i][j];
                }
            }
        }
    }
    cout << f[m][n][m][n];
    return 0;
}