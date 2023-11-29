#include <bits/stdc++.h>
using namespace std;

int main()
{
    double target;
    cin >> target;
    int cnt = 0;
    double sum = 0, cur = 2;
    while (true)
    {
        cnt++;
        sum += cur;
        if (sum >= target)
        {
            cout << cnt;
            break;
        }
        cur *= 0.98;
    }
    return 0;
}