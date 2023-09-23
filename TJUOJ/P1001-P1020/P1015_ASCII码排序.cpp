#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a, b, c, tmp;
    while (cin >> a >> b >> c)
    {
        if (a == '0' && b == '0' && c == '0')
        {
            break;
        }
        if (a > b)
        {
            tmp = a;
            a = b;
            b = tmp;
        }
        if (a > c)
        {
            tmp = a;
            a = c;
            c = tmp;
        }
        if (b > c)
        {
            tmp = b;
            b = c;
            c = tmp;
        }
        cout << a << " " << b << " " << c << " " << endl;
    }
    return 0;
}