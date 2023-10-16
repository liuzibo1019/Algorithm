#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;
    int n = 0;
    double sum = 0;
    while (1)
    {
        n++;
        sum += 1.0 / n;
        if (sum > k)
        {
            cout << n;
            break;
        }
    }
    return 0;
}