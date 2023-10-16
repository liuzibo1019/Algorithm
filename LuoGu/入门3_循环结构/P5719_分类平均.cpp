#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    double sumA = 0, sumB = 0;
    int cntA = 0, cntB = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % k == 0)
        {
            sumA += i;
            cntA++;
        }
        else
        {
            sumB += i;
            cntB++;
        }
    }
    cout << fixed << setprecision(1) << sumA / cntA << " " << sumB / cntB;
    return 0;
}