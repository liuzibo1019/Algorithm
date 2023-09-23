#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int Local = 5 * n;
    int Luogu = 11 + 3 * n;
    if (Local < Luogu)
    {
        cout << "Local";
    }
    else
    {
        cout << "Luogu";
    }
    return 0;
}