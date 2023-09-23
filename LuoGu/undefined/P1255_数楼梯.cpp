#include <bits/stdc++.h>
using namespace std;

unsigned long long countStairs(unsigned long long n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 2;
    }
    return countStairs(n - 1) + countStairs(n - 2);
}

int main()
{
    unsigned long long n;
    cin >> n;
    cout << countStairs(n);
    return 0;
}