#include <bits/stdc++.h>
using namespace std;

double m, t, s;

int main()
{
    cin >> m >> t >> s;
    double dm = ceil(s / t);
    cout << (m >= dm ? m - dm : 0);
    return 0;
}