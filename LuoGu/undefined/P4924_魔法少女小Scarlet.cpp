#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[500][500], tempArray[500][500];
int x[500], y[500], r[500], z[500];

void copyArray()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = tempArray[i][j];
        }
    }
}
void rorate(int k)
{
    // x[i] y[i] r[i] z[i]
    if (z[k] == 0)
    {
        for (int i = -r[k]; i <= r[k]; i++)
        {
            for (int j = -r[k]; j <= r[k]; j++)
            {
                tempArray[x[k] + j - 1][y[k] - i - 1] = a[x[k] + i - 1][y[k] + j - 1];
            }
        }
    }

    if (z[k] == 1)
    {
        for (int i = -r[k]; i <= r[k]; i++)
        {
            for (int j = -r[k]; j <= r[k]; j++)
            {
                tempArray[x[k] - j - 1][y[k] + i - 1] = a[x[k] + i - 1][y[k] + j - 1];
            }
        }
    }
    copyArray();
}

int main()
{
    cin >> n >> m;
    int temp = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = temp;
            tempArray[i][j] = temp;
            temp++;
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << tempArray[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    for (int i = 0; i < m; i++)
    {
        cin >> x[i] >> y[i] >> r[i] >> z[i];
    }
    for (int i = 0; i < m; i++)
    {
        rorate(i);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
