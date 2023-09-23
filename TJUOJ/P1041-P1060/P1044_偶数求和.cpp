#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, sum;
    int a[105];
    for (int i = 1; i < 105; i++)
    {
        a[i] = i * 2;
    }
    while (cin >> n >> m)
    {
        if (n == 0 && m == 0)
        {
            break;
        }
        sum = 0;
        for (int i = 1; i <= n; i++)
        {
            sum += a[i];
            if (i % m == 0)
            {
                cout << sum / m << " ";
                sum = 0;
            }
            if (i == n && sum != 0)
            {
                cout << sum / (n % m) << " ";
            }
                }
        cout << endl;
    }

    return 0;
}