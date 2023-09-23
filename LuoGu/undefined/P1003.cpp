#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a[10000], b[10000], g[10000], k[10000];
    int x, y;
    cin >> n;
    int res = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i] >> g[i] >> k[i];
    }
    cin >> x >> y;
    // cout << n << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " " << b[i] << " " << g[i] << " " << k[i] << endl;
    // }
    // cout << x << " " << y << endl;
    // return 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (x >= a[i] && y >= b[i] && (x <= a[i] + g[i]) && (y <= b[i] + k[i]))
        {
            res = i;
            break;
        }
    }
    cout << res+1;
    return 0;
}