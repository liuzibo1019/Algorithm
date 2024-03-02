#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    char opt;
    string res;
    int num1, num2;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (isalpha(s[0]))
        {
            opt = s[0];
            cin >> num1;
            cin >> num2;
        }
        else
        {
            num1 = atoi(s.c_str());
            cin >> num2;
        }
        if (opt == 'a')
        {
            res = to_string(num1) + "+" + to_string(num2) + "=" + to_string(num1 + num2);
            cout << res << endl;
            cout << res.length() << endl;
        }
        else if (opt == 'b')
        {
            res = to_string(num1) + "-" + to_string(num2) + "=" + to_string(num1 - num2);
            cout << res << endl;
            cout << res.length() << endl;
        }
        else if (opt == 'c')
        {
            res = to_string(num1) + "*" + to_string(num2) + "=" + to_string(num1 * num2);
            cout << res << endl;
            cout << res.length() << endl;
        }
    }
    return 0;
}