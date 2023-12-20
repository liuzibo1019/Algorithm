#include <bits/stdc++.h>
using namespace std;

int a[105];
int flag[105];
int main()
{
    int n, sum;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            sum = a[i] + a[j];
            for (int k = 0; k < n; k++)
            {
                if (a[k] == sum && flag[k] == 0)
                {
                    cnt++;
                    flag[k] = 1;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}