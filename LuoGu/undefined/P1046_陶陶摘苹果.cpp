#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    int h;
    int cnt = 0;
    cin >> h;
    for (int i = 0; i < 10; i++)
    {
        if (h + 30 >= a[i])
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}