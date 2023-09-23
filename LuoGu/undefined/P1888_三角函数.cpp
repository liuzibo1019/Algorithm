#include <bits/stdc++.h>
using namespace std;

// int gcd(int a, int b)
// {
//     if (b == 0)
//     {
//         return a;
//     }
//     return gcd(b, a % b);
//     // return !b ? a : gcd(b, a % b);
// }

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int max = a, min = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;
    if (b < min)
        min = b;
    if (c < min)
        min = c;
    int m = __gcd(max, min);
    cout << min/m << "/" << max/m;

    return 0;
}