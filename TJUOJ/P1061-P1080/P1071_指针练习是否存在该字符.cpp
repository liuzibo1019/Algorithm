#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];
    cin >> str;
    char c;
    cin >> c;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            cout << "yes" << endl;
            return 0;
        }
    }
    cout << "no" << endl;
    return 0;
}