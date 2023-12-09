#include <bits/stdc++.h>
using namespace std;

int a[105];

int main()
{
    int i;
    for (i = 0; i < 105; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
        {
            break;
        }
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << a[j] << " ";
    }
    return 0;
}