#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    double temp;
    int neg, zero, pos;
    while (cin >> N)
    {
        if (N == 0)
        {
            break;
        }
        neg = 0;
        zero = 0;
        pos = 0;
        while (N--)
        {
            cin >> temp;
            if (temp < 0)
            {
                neg++;
            }
            else if (temp == 0)
            {
                zero++;
            }
            else
            {
                pos++;
            }
        }
        cout << neg << " " << zero << " " << pos << endl;
    }
    return 0;
}