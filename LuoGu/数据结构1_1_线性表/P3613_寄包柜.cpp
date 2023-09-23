#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, map<int, int>> cab; // 通过map实现二次映射
    int n, q;
    cin >> n >> q;
    int select, i, j, k;
    while (q--)
    {
        cin >> select;
        if (select == 1)
        {
            cin >> i >> j >> k;
            cab[i][j] = k;
        }
        else if (select = 2)
        {
            cin >> i >> j;
            cout << cab[i][j] << endl;
        }
    }
    return 0;
}