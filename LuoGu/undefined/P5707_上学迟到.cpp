#include <bits/stdc++.h>
using namespace std;

int main()
{
    double s, v;
    cin >> s >> v;
    int usedTime = ceil(s / v) + 10;
    int allTime = 24 * 60 + 8 * 60;
    int time = allTime - usedTime;
    if (time >= 24 * 60)
    {
        time -= 24 * 60;
    }
    int hour = time / 60;
    int minute = time % 60;
    cout << setw(2) << setfill('0') << hour << ":" << setw(2) << setfill('0') << minute;
    return 0;
}