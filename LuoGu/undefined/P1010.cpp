#include <bits/stdc++.h>
using namespace std;

void search(int n)
{
    if (n == 1)
    {
        cout << "2(0)";
        return;
    }
    if (n == 2)
    {
        cout << "2";
        return;
    }

    int temp = 2, power = 0;
    cout << 2;
    while (n >= temp)
    {
        power++;
        temp *= 2;
    }
    
    // cout << power;
    if (power > 1)
    {
        cout << "(";
        search(power);
        cout << ")";
    }
    n -= temp / 2;
    if (n > 0)
    {
        cout << "+";
        search(n);
    }
}

int main()
{
    int n;
    cin >> n;
    search(n);
    return 0;
}