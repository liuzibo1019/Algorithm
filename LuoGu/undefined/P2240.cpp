#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, T;
    cin >> N >> T;
    int weight[N], value[N];
    double PPR[N];
    for (int i = 0; i < N; i++)
    {
        cin >> weight[i] >> value[i];
        PPR[i] = value[i] * 1.0 / weight[i];
        // cout << PPR[i] << endl;
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (PPR[i] < PPR[j])
            {
                swap(weight[i], weight[j]);
                swap(value[i], value[j]);
                swap(PPR[i], PPR[j]);
            }
        }
    }

    double res = 0;
    for (int i = 0; i < N; i++)
    {
        if (T > weight[i])
        {
            res += value[i];
            T -= weight[i];
        }
        else
        {
            res += PPR[i] * T;
            break;
        }
    }
    cout << fixed << setprecision(2) << res;
    return 0;
}