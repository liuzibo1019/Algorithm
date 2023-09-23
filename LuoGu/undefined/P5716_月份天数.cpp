#include <bits/stdc++.h>
using namespace std;

int dayOfMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
    int year, month;
    cin >> year >> month;
    if (year % 2 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        dayOfMonth[1] = 29;
    }
    cout << dayOfMonth[month - 1];
    return 0;
}