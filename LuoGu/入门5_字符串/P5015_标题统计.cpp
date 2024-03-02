#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[10];
    cin.getline(s, 10);
    int res = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] != ' ')
        {
            res++;
        }
    }
    cout << res;
    return 0;
}