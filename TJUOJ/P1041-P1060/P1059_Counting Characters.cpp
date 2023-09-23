#include <bits/stdc++.h>
using namespace std;
int cnt[27];
int main()
{
    char s[1000];
    char a[27] = "abcdefghijklmnopqrstuvwxyz";

    cin.getline(s, 1000);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            cnt[s[i] - 'a']++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        cout << a[i] << " : " << cnt[i] << endl;
    }

    return 0;
}