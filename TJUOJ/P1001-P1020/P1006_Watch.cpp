#include <bits/stdc++.h>
using namespace std;

int main()
{
    int S;
    cin >> S;
    int hour = S / 3600;
    int minute = S % 3600 / 60;
    int second = S % 3600 % 60;
    cout << hour << ":" << minute << ":" << second << endl;
    return 0;
}