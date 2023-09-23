#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    int cnt;
    while (cin >> a >> b >> c)
    {
        cnt = 0;
        if (a == 0 && b == 0 && c == 0) break;
        for (int i = a; i <= b; i++)
        {
            if (c % i == 0)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}