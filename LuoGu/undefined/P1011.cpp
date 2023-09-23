#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, n, m, x;
    int p; //第二站上车人数
    cin >> a >> n >> m >> x;
    int aArray[n] = {0, 0, 1, 0};
    int pArray[n] = {0, 0, 0, 1};
    int sumA = 0, sumP = 0;
    for (int i = 4; i < n; i++)
    {
        aArray[i] = aArray[i - 2] + aArray[i - 1];
        pArray[i] = pArray[i - 2] + pArray[i - 1];
    }
    for (int i = 0; i < n - 1; i++)
    {
        sumA += aArray[i];
        sumP += pArray[i];
    }
    p = (m - sumA * a - a) / sumP;
    // cout << p << endl;
    sumA = 0;
    sumP = 0;
    for (int i = 0; i < x; i++)
    {
        sumA += aArray[i];
        sumP += pArray[i];
    }
    int res = sumA * a + sumP * p + a;
    cout << res;
    return 0;
}