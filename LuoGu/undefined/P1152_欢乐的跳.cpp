#include <bits/stdc++.h>
using namespace std;

int a[10005], sub[10005];
int n, flag = 1;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int j = 0; j < n - 1; j++)
    {
        sub[j] = a[j + 1] - a[j];
        if (sub[j] < 0)
        {
            sub[j] = -sub[j];
        }
    }
    sort(sub, sub + n - 1);

    for (int i = 0; i < n - 1; i++)
    {
        if (sub[i] != i + 1)
        {
            flag = 0;
        }
    }
    if (flag)
    {
        cout << "Jolly";
    }
    else
    {
        cout << "Not jolly";
    }
    return 0;
}