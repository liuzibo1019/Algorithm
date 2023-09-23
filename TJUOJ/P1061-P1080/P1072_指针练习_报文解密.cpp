#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
        {
            s[i] = 'W';
        }
        else if (s[i] == 'B')
        {
            s[i] = 'X';
        }
        else if (s[i] == 'C')
        {
            s[i] = 'Y';
        }
        else if (s[i] == 'D')
        {
            s[i] = 'Z';
        }
        else
        {
            s[i] = s[i] - 4;
        }
    }
    cout << s << endl;
    return 0;
}








