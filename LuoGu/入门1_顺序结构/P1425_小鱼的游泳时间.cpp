#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int minutes = c * 60 + d - a * 60 - b;
    int hour = minutes / 60;
    int minute = minutes % 60;
    cout << hour << " " << minute;
    return 0;
}