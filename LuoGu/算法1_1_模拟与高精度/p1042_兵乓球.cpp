#include <bits/stdc++.h>
using namespace std;

char combatLog[25 * 2501];

void show(int n)
{
    int w = 0, l = 0;
    for (int i = 0;; i++)
    {
        if (combatLog[i] == 'W')
        {
            w++;
        }
        if (combatLog[i] == 'L')
        {
            l++;
        }
        if (combatLog[i] == 'E')
        {
            cout << w << ":" << l << endl;
            break;
        }
        if ((w >= n || l >= n) && abs(w - l) >= 2)
        {
            cout << w << ":" << l << endl;
            w = 0;
            l = 0;
        }
    }
}

int main()
{
    // init
    char s;
    int cnt = 0;
    while (cin >> s)
    {
        combatLog[cnt++] = s;
        if (s == 'E')
        {
            break;
        }
    }

    show(11);
    cout << endl;
    show(21);
    return 0;
}