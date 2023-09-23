#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> dis(105, vector<int>(105, 0x1ffffff));

void floyd(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                dis[j][k] = min(dis[j][k], dis[j][i] + dis[i][k]);
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            if (i == j)
                dis[i][j] = 0;
            if (x != 0)
                dis[i][j] = x;
        }
    }

    floyd(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (dis[i][j] == 0x1fffffff)
            {
                cout << "-1 ";
            }
            else
            {
                cout << dis[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}