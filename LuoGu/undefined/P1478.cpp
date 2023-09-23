#include <bits/stdc++.h>
using namespace std;
// int x[5000], y[5000];

int main()
{
    int n, s;
    cin >> n >> s;
    int a, b;
    cin >> a >> b;
    int x[n], y[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (y[i] > y[j])
            {
                swap(x[i], x[j]);
                swap(y[i], y[j]);
            }
        }
    }
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (x[i] <= a + b)
        {
            if (s >= y[i])
            {
                res++;
                s -= y[i];
            }
        }
    }
    cout << res;
    return 0;
}