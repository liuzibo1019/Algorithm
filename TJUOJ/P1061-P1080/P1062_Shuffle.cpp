#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int times;
    int pos;
    while (cin >> s)
    {
        if (s == "-")
        {
            break;
        }
        cin >> times;
        while (times--)
        {
            cin >> pos;
            s = s.substr(pos, s.length() - pos) + s.substr(0, pos);
            
        }
        cout << s << endl;
    }

    return 0;
}