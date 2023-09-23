#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N; // 用电量
    cin >> N;
    double price; //电费
    if (N <= 150) //电费低于150
    {
        price = 0.4463 * N;
    }
    else if (N <= 400) //电费大于150小于400
    {
        price = 0.4463 * 150 + 0.4663 * (N - 150);
    }
    else //电费超过400
    {
        price = 0.4463 * 150 + 0.4663 * (400 - 150) + 0.5663 * (N - 400);
    }

    cout << fixed << setprecision(1) << price;

    return 0;
}