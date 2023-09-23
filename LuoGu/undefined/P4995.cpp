#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int h[n];
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    sort(h, h + n);
    long long res = h[n - 1] * h[n - 1];
    int l, r;
    int flag = 0;
    l = 0;
    r = n - 1;
    while (r > l)
    {
        res += (h[r] - h[l]) * (h[r] - h[l]);
        if (flag == 0)
        {
            r--;
            flag = 1;
        }
        else
        {
            l++;
            flag = 0;
        }
    }
    cout << res;
    return 0;
}