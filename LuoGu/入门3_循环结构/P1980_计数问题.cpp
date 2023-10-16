#include <bits/stdc++.h>
using namespace std;

int cntNum(int i, int x)
{
    int cnt = 0;
    while (i != 0)
    {
        if (i % 10 == x)
        {
            cnt++;
        }
        i /= 10;
    }
    return cnt;
}

int main()
{
    int n, x;
    cin >> n >> x;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        cnt += cntNum(i, x);
    }
    cout << cnt;
    return 0;
}