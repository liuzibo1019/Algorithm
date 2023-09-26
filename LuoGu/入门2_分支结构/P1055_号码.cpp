#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int i = ((s[0] - '0') * 1 + (s[2] - '0') * 2 + (s[3] - '0') * 3 + (s[4] - '0') * 4 + (s[6] - '0') * 5 + (s[7] - '0') * 6 + (s[8] - '0') * 7 + (s[9] - '0') * 8 + (s[10] - '0') * 9) % 11;
    if (i == 10)
    {
        if (s[12] == 'X')
        {
            cout << "Right";
        }
        else
        {
            cout << s.substr(0, 12) << "X";
        }
    }
    else
    {
        if (i == s[12] - '0')
        {
            cout << "Right";
        }
        else
        {
            cout << s.substr(0, 12) << i;
        }
    }

    return 0;
}