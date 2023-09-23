#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char cal;
    int a, b;
    int res;
    while (n--)
    {
        cin >> cal >> a >> b;
        res = 1;
        if (cal == 'A')
        {
            for (int i = a; i >= a - b + 1; i--)
            {
                res *= i;
            }
            cout << res << endl;
        }
        if (cal == 'C')
        {
            for (int i = a; i >= a - b + 1; i--)
            {
                res *= i;
            }
            for (int i = b; i >= 1; i--)
            {
                res /= i;
            }
            cout << res << endl;
        }
    }
    return 0;
}