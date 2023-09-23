#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n, x;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        x = i;
        if (x % 3 == 0)
        {
            cout << " " << x;
        }
        else
        {
            do
            {
                if (x % 10 == 3)
                {
                    cout << " " << i;
                    break;
                }
                x /= 10;
            } while (x);
        }
    }
    cout << endl;
    return 0;
}