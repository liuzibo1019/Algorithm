#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2;
    }
    else
    {
        for (int i = 3; i < sqrt(n); i += 2)
        {
            if (n % i == 0)
            {
                cout << n / i;
            }
        }
    }
    return 0;
}