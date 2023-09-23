#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int p[m], a[m];
    for (int i = 0; i < m; i++)
    {
        cin >> p[i] >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            if (p[i] > p[j])
            {
                swap(p[i], p[j]);
                swap(a[i], a[j]);
            }
        }
    }
    int res = 0;
    for (int i = 0; i < m; i++)
    {
        if (n >= a[i])
        {
            n -= a[i];
            res += a[i] * p[i];
        }
        else
        {
            res += n * p[i];
            n = 0;
            break;
        }
    }
    cout << res;
    return 0;
}