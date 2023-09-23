#include <bits/stdc++.h>
using namespace std;

int main()
{
    int L;
    int N;
    cin >> L;
    cin >> N;
    int a[N];
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    // for (int i = 0; i < N; i++)
    // {
    //     cout << a[i];
    // }
    int maxT[N];
    int minT[N];
    for (int i = 0; i < N; i++)
    {
        maxT[i] = max(a[i], L - a[i] + 1);
        minT[i] = min(a[i], L - a[i] + 1);
    }
    sort(maxT, maxT + N);
    sort(minT, minT + N);
    cout << minT[N - 1] << " " << maxT[N - 1];
    return 0;
}