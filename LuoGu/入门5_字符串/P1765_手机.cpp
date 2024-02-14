#include <bits/stdc++.h>
using namespace std;

int main()
{
    int times[26] = {1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 1, 2, 3, 4, 1, 2, 3, 1, 2, 3, 4};
    string s;
    getline(cin, s);
    int cnt = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            cnt += 1;
        }
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            cnt += times[s[i] - 'a'];
        }
    }
    cout << cnt;
    return 0;
}