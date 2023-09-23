#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    char s[1000];
    while (n--)
    {
        gets(s);
        s[0] -= 32;
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] == ' ')
            {
                s[i + 1] -= 32;
            }
        }
        cout << s << endl;
    }
    return 0;
}