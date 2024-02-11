#include <bits/stdc++.h>
using namespace std;

int a[50][50];

int main()
{
    int n;
    cin >> n;
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= j; i++)
        {
            if (i == 1 && j == 1)
            {
                a[i][j] = 1;
            }
            else
            {
                a[i][j] = a[i - 1][j - 1] + a[i][j - 1];
            }
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}