#include <bits/stdc++.h>
using namespace std;

int tree[10005];

int main()
{
    int l, m;
    cin >> l >> m;
    for (int i = 0; i < m; i++)
    {
        int start, end;
        cin >> start >> end;
        for (int j = start; j <= end; j++)
        {
            tree[j] = 1;
        }
    }
    int cnt = 0;
    for (int i = 0; i <= l; i++)
    {
        if (tree[i] == 0)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}