#include <bits/stdc++.h>
using namespace std;

double a[50][5];

int main()
{
    int n, m;
    int cnt = 0;
    cin >> n >> m;
    double avern[m], averm[n], sum;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += a[i][j];
        }
        averm[i] = sum / m;
        cout << fixed << setprecision(2) << averm[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < m; i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += a[j][i];
        }
        avern[i] = sum / n;
        cout << fixed << setprecision(2) << avern[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] < avern[j])
            {
                break;
            }
            if (a[i][j] >= avern[j] && j == m - 1)
            {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}