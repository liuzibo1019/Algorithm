#include <bits/stdc++.h>
using namespace std;

int a[105][105];
int x[100], y[100], o[100], p[100];

int dx1[13] = {-2, -1, -1, -1, 0, 0, 0, 0, 0, 1, 1, 1, 2};
int dy1[13] = {0, -1, 0, 1, -2, -1, 0, 1, 2, -1, 0, 1, 0};
int dx2[25] = {-2, -2, -2, -2, -2, -1, -1, -1, -1, -1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2, 2, 2, 2};
int dy2[25] = {-2, -1, 0, 1, 2, -2, -1, 0, 1, 2, -2, -1, 0, 1, 2, -2, -1, 0, 1, 2, -2, -1, 0, 1, 2};

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = 0; i < m; i++)
    {
        cin >> x[i] >> y[i];
        for (int j = 0; j < 13; j++)
        {
            if (x[i] + dx1[j] >= 1 && x[i] + dx1[j] <= n && y[i] + dy1[j] >= 1 && y[i] + dy1[j] <= n)
            {
                a[x[i] + dx1[j]][y[i] + dy1[j]] = 1;
            }
        }
    }
    for (int i = 0; i < k; i++)
    {
        cin >> o[i] >> p[i];
        for (int j = 0; j < 25; j++)
        {
            if (o[i] + dx2[j] >= 1 && p[i] + dx2[j] <= n && o[i] + dy2[j] >= 1 && p[i] + dy2[j] <= n)
            {
                a[o[i] + dx2[j]][p[i] + dy2[j]] = 1;
            }
        }
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j] == 0)
            {
                cnt++;
            }
            // cout << a[i][j] << " ";
        }
        // cout << endl;
    }
    cout << cnt;
    return 0;
}