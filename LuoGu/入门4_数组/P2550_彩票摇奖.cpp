#include <bits/stdc++.h>
using namespace std;

int ticket[1005][7];
int cnt[7];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            cin >> ticket[i][j];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        int temp = -1;
        for (int j = 0; j < 7; j++)
        {
            for (int k = 0; k < 7; k++)
            {
                if (ticket[0][j] == ticket[i][k])
                {
                    temp++;
                }
            }
        }
        if (temp != -1)
        {
            cnt[temp]++;
        }
    }
    for (int i = 6; i >= 0; i--)
    {
        cout << cnt[i] << " ";
    }
    return 0;
}