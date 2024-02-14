#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < n; j++)
        {
            s[i]++;
            if (s[i] > 'z')
            {
                s[i] = 'a';
            }
        }
    }
    cout << s;
    return 0;
}