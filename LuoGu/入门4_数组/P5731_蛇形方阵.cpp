#include <bits/stdc++.h>
using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int a[15][15];

int main()
{
    int n;
    cin >> n;
    int x = 0, y = 0;
    int j = 0;
    for (int i = 1; i <= n * n; i++)
    {
        a[x][y] = i;
        if (x + dx[j] < 0 || x + dx[j] >= n || y + dy[j] < 0 || y + dy[j] >= n || a[x + dx[j]][y + dy[j]] != 0)
        {
            j++;
            if (j == 4)
            {
                j = 0;
            }
        }
        x = x + dx[j];
        y = y + dy[j];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(3) << a[i][j];
        }
        cout << endl;
    }
    return 0;
}