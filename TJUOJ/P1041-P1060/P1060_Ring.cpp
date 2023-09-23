#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[10000];
    char p[1000];
    cin >> s;
    int len = strlen(s);
    for (int i = len; i < 1000; i++)
    {
        s[i] = s[i - len];
    }
    cin >> p;
    int i, j;
    for (i = 0; i < strlen(s); i++)
    {
        for (j = 0; j < strlen(p); j++)
        {
            if (p[j] != s[i + j])
            {
                break;
            }
        }
        if (j == strlen(p))
        {
            cout << "Yes";
            break;
        }
    }
    if(i == strlen(s)){
        cout << "No";
    }
    return 0;
}