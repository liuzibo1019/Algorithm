#include <bits/stdc++.h>
using namespace std;

int gcd(long a, long b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int main()
{
    long n, m;
    while (cin >> n >> m)
    {
        if (n == 0 && m == 0)
        {
            break;
        }
        cout << gcd(n, m) << endl;
    }
    return 0;
}