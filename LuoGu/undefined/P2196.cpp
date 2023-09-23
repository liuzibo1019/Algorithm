// #include <bits/stdc++.h>
// using namespace std;
// int boom[21];
// int link[21][21];
// int n;
// int sum;

// int dp(int x)
// {
//     sum += boom[x];
//     for (int i = 1; i <= n; i++)
//     {
//         if (link[x][i]){
//             return dp(i);
//         }
//     }
//     return 0;
// }

// int main()
// {
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         cin >> boom[i];
//     }
//     for (int i = 1; i <= n - 1; i++)
//     {
//         for (int j = i + 1; j <= n; j++)
//         {
//             cin >> link[i][j];
//         }
//     }
//     // for (int i = 1; i <= n; i++)
//     // {
//     //     for (int j = 1; j <= n; j++)
//     //     {
//     //         cout << link[i][j] << " ";
//     //     }
//     //     cout << endl;
//     // }
//     int res = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         sum = 0;
//         int temp = dp(i);
//         if (temp > res)
//         {
//             res = temp;
//         }
//     }
//     cout << sum;
//     return 0;
// }

#include <iostream>

using namespace std;

int n, a, res, place;
int d[30], boom[30], wayCount[30], path[30];
bool link[30][30];

int dp(int u)
{
    if (d[u])
        return d[u];
    int v = 0, k = -1;
    for (int i = 1; i <= n; i++)
        if (link[u][i])
        {
            if (d[i] == 0)
                d[i] = dp(i);
            if (d[i] > v)
                v = d[i], k = i;
        }
    path[u] = k;
    return v + boom[u];
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> boom[i];
        wayCount[i] = 0;
        path[i] = -1;
    }
    for (int i = 1; i <= n; i++)
        for (int j = i + 1; j <= n; j++)
        {
            cin >> a;
            if (a)
            {
                link[i][j] = true, wayCount[j]++;
            }
        }
    for (int i = 1; i <= n; i++)
        if (wayCount[i] == 0)
        {
            d[i] = dp(i);
            if (d[i] > res)
                res = d[i], place = i;
        }
    while (place != -1)
    {
        cout << place << ' ';
        place = path[place];
    }
    cout << endl
         << res;
    return 0;
}