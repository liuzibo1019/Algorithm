#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int cnt = 1;
    while (a > 1)
    {
        a /= 2;
        cnt++;
    }
    cout << cnt;
    return 0;
}