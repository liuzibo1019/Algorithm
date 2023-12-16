#include <bits/stdc++.h>
using namespace std;

int a[1000];

int main()
{
    int n;
    cin >> n;
    int i;
    for (i = 0; i < 1000; i++)
    {
        a[i] = n;
        if (a[i] == 1)
        {
            break;
        }
        if (n % 2 == 1)
        {
            n = n * 3 + 1;
        }
        else
        {
            n /= 2;
        }
    }
    for (int j = i; j >= 0; j--)
    {
        cout << a[j] << " ";
    }
    return 0;
}