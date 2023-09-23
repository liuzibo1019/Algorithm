#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int num[3];
    int price[3];
    int sum[3];
    int res = INT32_MAX;
    cin >> n;
    for (int i = 0; i < 3; i++)
    {
        cin >> num[i] >> price[i];
    }

    for (int i = 0; i < 3; i++)
    {
        sum[i] = ceil(n * 1.0 / num[i]) * price[i];
        // cout << sum[i] << endl;
        if (sum[i] < res)
        {
            res = sum[i];
        }
    }
    cout << res;

    return 0;
}