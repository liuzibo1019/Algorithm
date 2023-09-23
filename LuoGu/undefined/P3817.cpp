#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    long long res = 0;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] + a[i + 1] > x)
        {
            res += a[i + 1] + a[i] - x;
            a[i + 1] = x - a[i];
        }
    }
    cout << res;
    return 0;
}