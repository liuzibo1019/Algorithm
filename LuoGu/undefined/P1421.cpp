#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    double money = a * 10 + b;
    cout << floor(money / 19);
    return 0;
}