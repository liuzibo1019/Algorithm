#include <bits/stdc++.h>
using namespace std;

int main()
{
    long fib[1005];
    fib[0] = 1;
    fib[1] = 1;
    for (int i = 2; i < 1000; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    long N;
    cin >> N;
    while (N--)
    {
        long num;
        cin >> num;
        cout << fib[num - 1] << endl;
    }
    return 0;
}