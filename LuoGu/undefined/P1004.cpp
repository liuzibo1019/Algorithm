#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    int x, y, value;
    cin >> N;
    int a[11][11];
    int f[11][11][11][11];
    memset(f, 0, sizeof(f));
    memset(a, 0, sizeof(a));
    cin >> x >> y >> value;
    while (x != 0 || y != 0 || value != 0)
    {
        a[x][y] = value;
        cin >> x >> y >> value;
    }
    // for (int i = 0; i < N; i++)
    // {
    //     for (int j = 0; j < N; j++)
    //     {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            for (int k = 1; k <= N; k++)
            {
                for (int l = 1; l <= N; l++)
                {
                    f[i][j][k][l] = max(max(f[i - 1][j][k - 1][l], f[i - 1][j][k][l - 1]), max(f[i][j - 1][k - 1][l], f[i][j - 1][k][l - 1])) + a[i][j] + a[k][l];
                    if (i == k && j == l)
                        f[i][j][k][l] -= a[i][j];
                }
            }
        }
    }
    cout << f[N][N][N][N];
    return 0;
}