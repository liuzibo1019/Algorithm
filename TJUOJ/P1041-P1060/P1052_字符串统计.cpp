#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char s[1000];
    int cnt = 0;
    while (n--)
    {
        cin >> s;
        cnt = 0;
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] >= '0' && s[i] <= '9')
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}