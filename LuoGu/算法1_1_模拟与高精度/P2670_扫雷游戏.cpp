#include <bits/stdc++.h>
using namespace std;

int boom[110][110];
int num[110][110];

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main()
{
    int n, m;
    cin >> n >> m;
    char s;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> s;
            if (s == '*')
            {
                boom[i][j] = 1;
                for (int k = 0; k < 8; k++)
                {
                    num[i + dx[k]][j + dy[k]]++;
                }
            }
        }
    }
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << boom[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (boom[i][j] == 1)
            {
                cout << "*";
            }
            else
            {
                cout << num[i][j];
            }
        }
        cout << endl;
    }
    return 0;
}