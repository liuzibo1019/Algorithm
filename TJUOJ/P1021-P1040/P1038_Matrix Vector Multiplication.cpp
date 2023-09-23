#include <bits/stdc++.h>
using namespace std;

int a[105][105];
int b[105];
int res[105];
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            res[i] += a[i][j] * b[j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << res[i] << endl;
    }
    return 0;
}