#include <bits/stdc++.h>
using namespace std;

int a[3005];

int main()
{
    int n, m, temp;
    int mymin = __INT_MAX__;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i <= n - m; i++)
    {
        temp = 0;
        for (int j = 0; j < m; j++)
        {
            temp += a[i + j];
        }
        if (temp < mymin)
        {
            mymin = temp;
        }
    }
    cout << mymin;

    return 0;
}