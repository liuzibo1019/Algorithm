#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int money = n / (52 * 7);
    for (int i = 100; i > 0; i--)
    {
        if (money > i && (money - i) % 3 == 0)
        {
            cout << i << endl;
            cout << ((money - i) / 3) << endl;
            break;
        }
    }
    return 0;
}

// x  x+k  x+2k x+3k x+4k x+5k x+6k

// (7x + 21k) * 52 = n
// x + 3k = n / (52 * 3)