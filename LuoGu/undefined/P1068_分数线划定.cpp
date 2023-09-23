#include <bits/stdc++.h>
using namespace std;

int n, m, temp;
int k[5005];
int s[5005];

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> k[i] >> s[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (s[j] < s[j + 1] || s[j] == s[j + 1] && k[j] > k[j + 1])
            {
                temp = s[j + 1];
                s[j + 1] = s[j];
                s[j] = temp;
                temp = k[j + 1];
                k[j + 1] = k[j];
                k[j] = temp;
            }
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << s[i] << " " << k[i] << endl;
    // }
    int num = floor(m * 1.5);
    int score = s[num - 1];
    int cnt = 0;
    for (; cnt < n; cnt++)
    {
        if (s[cnt] < score)
        {
            break;
        }
    }

    cout << score << " " << cnt << endl;
    for (int i = 0; i < cnt; i++)
    {
        cout << k[i] << " " << s[i] << endl;
    }

    return 0;
}