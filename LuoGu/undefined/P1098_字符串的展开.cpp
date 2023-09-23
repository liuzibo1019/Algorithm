#include <bits/stdc++.h>
using namespace std;
int p1, p2, p3;
char s[200];

void fillString(char a, char b)
{
    int n = b - a;
    string fills;
    // cout << n;
    if (p1 == 1 || p1 == 2 && a >= '0' && a <= '9')
    {
        for (int i = 1; i <= n - 1; i++)
        {
            string temps(p2, a + i);
            fills.append(temps);
        }
    }
    else if (p1 == 2)
    {
        for (int i = 1; i <= n - 1; i++)
        {
            string temps(p2, a + i - 32);
            fills.append(temps);
        }
    }
    else
    {
        for (int i = 1; i <= n - 1; i++)
        {
            string temps(p2, '*');
            fills.append(temps);
        }
    }
    // for (int i = 1; i <= n - 1; i++)
    // {
    //     if (p1 == 1)
    //     {
    //         string temps(p2, a + i);
    //         fills.append(temps);
    //     }
    //     else if (p1 == 2)
    //     {
    //         if()
    //         string temps(p2, a + i -32);
    //         fills.append(temps);
    //     }
    // }
    if (p3 == 2)
    {
        reverse(fills.begin(), fills.end());
    }
    cout << fills;
}

int main()
{
    cin >> p1 >> p2 >> p3;
    cin >> s;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == '-' && i != 0 && i != strlen(s) - 1 && s[i + 1] > s[i - 1] &&
            ((s[i - 1] >= '0' && s[i - 1] <= '9' && s[i + 1] >= '0' && s[i + 1] <= '9') ||
             (s[i - 1] >= 'a' && s[i - 1] <= 'z' && s[i + 1] >= 'a' && s[i + 1] <= 'z')))
        {
            fillString(s[i - 1], s[i + 1]);
        }
        else
        {
            cout << s[i];
        }
    }
    return 0;
}