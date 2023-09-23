#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, sum;
    while (cin >> num)
    {
        if (num == 0)
        {
            break;
        }
        sum = 0;
        while (num != 0)
        {
            int modnum = num % 10;
            sum += modnum;
            num /= 10;
        }
        cout << sum << endl;
    }
    return 0;
}