#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    char c[1000];
    cin >> n;
    while (n--)
    {
        cin >> c;
        char maxC = c[0];
        for (int i = 0; i < strlen(c); i++)
        {
            if (c[i] > maxC)
            {
                maxC = c[i];
            }
        }
        for (int i = 0; i < strlen(c); i++)
        {
            cout << c[i];
            if (c[i] == maxC)
            {
                cout << "(max)";
            }
        }
        cout << endl;
    }
    return 0;
}