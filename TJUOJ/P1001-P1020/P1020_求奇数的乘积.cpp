#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, N;
    long num, sum;
    cin >> T;
    while (T--)
    {
        cin >> N;
        sum = 1;
        while (N--)
        {
            cin >> num;
            if (num % 2 != 0)
            {
                sum *= num;
            }
        }
        cout << sum << endl;
    }
    return 0;
}