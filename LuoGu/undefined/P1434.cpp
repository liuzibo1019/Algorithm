#include <bits/stdc++.h>
using namespace std;

int a[101][101];
int s[101][101];
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
int R, C;

int dp(int x, int y)
{
    if (s[x][y] != 0)
    {
        return s[x][y];
    }
    s[x][y] = 1;
    for (int i = 0; i < 4; i++)
    {
        int xx = dx[i] + x;
        int yy = dy[i] + y;
        if (xx > 0 && yy > 0 && xx <= R && yy <= C && a[x][y] > a[xx][yy])
        {
            dp(xx, yy);
            s[x][y] = max(s[x][y], s[xx][yy] + 1);
        }
    }

    return s[x][y];
}

int main()
{
    cin >> R >> C;
    for (int i = 1; i <= R; i++)
    {
        for (int j = 1; j <= C; j++)
        {
            cin >> a[i][j];
        }
    }
    int res = 0;
    for (int i = 1; i <= R; i++)
    {
        for (int j = 1; j <= C; j++)
        {
            if (dp(i, j) > res)
            {
                res = dp(i, j);
            }
        }
    }
    cout << res;
    return 0;
}