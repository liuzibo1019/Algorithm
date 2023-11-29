#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, last, next;
    int len = 1, maxLen = 0;
    cin >> n;
    cin >> next;
    for (int i = 1; i < n; i++)
    {
        last = next;
        cin >> next;
        if (next == last + 1)
        {
            len++;
        }
        else
        {
            len = 1;
        }
        if (len > maxLen)
        {
            maxLen = len;
        }
    }
    cout << maxLen;
    return 0;
}