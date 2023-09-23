#include <bits/stdc++.h>
using namespace std;

int a[105][105];

int compare(int a, int b)
{
    if (a < 0)
    {
        a *= -1;
    }
    if (b < 0)
    {
        b *= -1;
    }
    return a > b;
}

int main()
{
    int m, n;
    int max = 0, maxi = 0, maxj = 0;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            cin >> a[i][j];
            if (compare(a[i][j], max))
            {
                max = a[i][j];
                maxi = i;
                maxj = j;
            }
        }
    }
    cout << maxi + 1 << " " << maxj + 1 << " " << a[maxi][maxj];
    return 0;
}