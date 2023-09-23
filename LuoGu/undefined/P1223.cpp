#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int time[n];
    int order[n];
    for (int i = 0; i < n; i++)
    {
        cin >> time[i];
        order[i] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (time[i] > time[j])
            {
                swap(time[i], time[j]);
                swap(order[i], order[j]);
            }
        }
    }
    long long sumTime = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            sumTime += time[j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << order[i] << " ";
    }
    cout << endl;
    cout << fixed << setprecision(2) << sumTime * 1.0 / n;
    return 0;
}
