#include <bits/stdc++.h>
using namespace std;

int myarray[50][50];

int main()
{
    int n;
    cin >> n;
    int x = 1, y = (n + 1) / 2;
    myarray[x][y] = 1;
    for (int i = 2; i <= n * n; i++)
    {
        if (x == 1 && y != n)
        {
            x = n;
            y = y + 1;
        }
        else if (x != 1 && y == n)
        {
            x = x - 1;
            y = 1;
        }
        else if (x == 1 && y == n)
        {
            x = x + 1;
            y = y;
        }
        else if (myarray[x - 1][y + 1] == 0)
        {
            x = x - 1;
            y = y + 1;
        }
        else
        {
            x = x + 1;
            y = y;
        }
        myarray[x][y] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << myarray[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}