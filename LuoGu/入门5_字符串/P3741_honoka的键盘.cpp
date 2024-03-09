#include <bits/stdc++.h>
using namespace std;

int main()
{
    int len;
    char s[105];
    cin >> len;
    cin >> s + 1;
    int cnt = 0;
    int flag = 1;
    for (int i = 1; i < len; i++)
    {
        if (s[i] == 'V' && s[i + 1] == 'K')
        {
            cnt++;
        }
        if (flag && (s[i] == 'V' && s[i + 1] == 'V' && s[i + 2] != 'K' || s[i - 1] != 'V' && s[i] == 'K' && s[i + 1] == 'K'))
        {
            cnt++;
            flag = 0;
        }
    }
    cout << cnt;
    return 0;
}