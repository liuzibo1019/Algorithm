#include <bits/stdc++.h>
using namespace std;

int main()
{
    const double PI = 3.1415926535;
    int N;
    cin >> N;
    double r, V;
    while (N--)
    {
        cin >> r;
        V = PI * r * r * r * 4 / 3;
        cout << fixed << setprecision(3) << V << endl;
    }
    return 0;
}