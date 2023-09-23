#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int a[N * 2], b[N * 2];
    int k = 0;
    int m = 1;
    while (k < N)
    {
        for (int i = 1; i <= m; i++)
        {
            a[k++] = i;
        }
        for (int i = m - 1; i >= 1; i--)
        {
            a[k++] = i;
        }
        m += 2;
    }
    k = 0;
    m = 2;
    while (k < N)
    {
        for (int i = 1; i <= m; i++)
        {
            b[k++] = i;
        }
        for (int i = m - 1; i >= 1; i--)
        {
            b[k++] = i;
        }

        m += 2;
    }
    // for (int i = 0; i < k; i++)
    // {
    //     cout << a[i] << endl;
    //     cout << b[i] << endl;
    // }
    cout << a[N - 1] << "/" << b[N - 1];
    return 0;
}

// 1 1 2 3 2 1 1 2 3 4 5 4 3 2 1

// 1 2 1 1 2 3 4 3 2 1 1 2 3 4 5 6 5 4 3 2 1
