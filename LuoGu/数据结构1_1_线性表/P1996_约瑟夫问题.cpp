#include <bits/stdc++.h>
using namespace std;

int main()
{
    int visited[105] = {0};
    int n, m, cur = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cur++;
            if (cur > n)
            {
                cur = 1;
            }
            if (visited[cur] == 1)
            {
                j--;
            }
        }
        visited[cur] = 1;
        cout << cur << " ";
    }
    return 0;
}