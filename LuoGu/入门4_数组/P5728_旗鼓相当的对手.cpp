#include <bits/stdc++.h>
using namespace std;

int scores[1005][4];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> scores[i][j];
        }
        scores[i][3] = scores[i][0] + scores[i][1] + scores[i][2];
    }
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int flag = 1;
            for (int k = 0; k < 3; k++)
            {
                if (abs(scores[i][k] - scores[j][k]) > 5 || abs(scores[i][3] - scores[j][3]) > 10)
                {
                    flag = 0;
                    break;
                }
            }
            cnt += flag;
        }
    }
    cout << cnt;
    return 0;
}