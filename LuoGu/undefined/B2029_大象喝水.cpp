#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, r;
    cin >> h >> r;
    double volume = M_PI * r * r * h;
    int bottle = ceil(20000 / volume);
    cout << bottle;
    return 0;
}