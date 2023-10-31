#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    int cur = 1;
    int cnt = 0;
    int sum = 0;
    while (k--)
    {
        sum += cur;
        cnt++;
        if (cnt == cur)
        {
            cur++;
            cnt = 0;
        }
    }
    cout << sum << endl;
    return 0;
}