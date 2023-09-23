#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n;
    cin >> s;
    cin >> n;
    while (n--)
    {
        string input;
        cin >> input;
        if (input == "replace")
        {
            int start, end;
            string temp;
            cin >> start >> end;
            cin >> temp;
            s.replace(start, end - start + 1, temp);
        }
        if (input == "reverse")
        {
            long start, end;
            cin >> start >> end;
            reverse(s.begin() + start, s.begin() + end + 1);
        }
        if (input == "print")
        {
            long start, end;
            cin >> start >> end;
            cout << s.substr(start, end - start + 1) << endl;
        }
    }

    return 0;
}
