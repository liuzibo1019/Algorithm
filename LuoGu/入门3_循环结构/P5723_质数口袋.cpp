#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{
    if (num == 2)
    {
        return true;
    }
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int L;
    cin >> L;
    int sum = 0;
    int cnt = 0;
    for (int i = 2;; i++)
    {
        if (isPrime(i))
        {
            sum += i;
            if (sum > L)
            {
                cout << cnt << endl;
                break;
            }
            cout << i << endl;
            cnt++;
        }
    }
    return 0;
}