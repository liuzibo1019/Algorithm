#include <bits/stdc++.h>
using namespace std;

bool IsPalindrome(int n)
{
    int m = n;
    int reverseN = 0;
    while (m > 0)
    {
        reverseN = reverseN * 10 + m % 10;
        m /= 10;
    }
    if (n == reverseN)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    for (int i = 11; i <= 999; i++)
    {
        if (IsPalindrome(i) && IsPalindrome(i * i) && IsPalindrome(i * i * i))
        {
            cout << i << " ";
        }
    }
    return 0;
}