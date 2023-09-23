#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    double num, max, min, sum, tempN;
    while (cin >> N)
    {
        if (N == 0)
        {
            break;
        }
        tempN = N;
        cin >> num;
        N--;
        max = min = sum = num;
        while (N--)
        {
            cin >> num;
            if (max > num)
            {
                max = num;
            }
            if (min < num)
            {
                min = num;
            }
            sum += num;
        }
        sum = sum - max - min;
        cout << fixed << setprecision(2) << sum / (tempN - 2) << endl;
    }
    return 0;
}