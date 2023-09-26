#include <bits/stdc++.h>
using namespace std;
#define M_PI 3.14159265358979323846

int main()
{
    int h, r;
    cin >> h >> r;
    double volume = M_PI * r * r * h;
    int bottle = ceil(20000 / volume);
    cout << bottle;
    return 0;
}