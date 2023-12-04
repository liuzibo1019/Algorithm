#include <bits/stdc++.h>
using namespace std;

int a[1005];

int main()
{
    int n;
    cin >> n;
    int max = INT_MAX + 1;
    int min = INT_MAX;
    int maxI, minI;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > max)
        {
            max = a[i];
            maxI = i;
        }
        if (a[i] < min)
        {
            min = a[i];
            minI = i;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i != maxI && i != minI)
        {
            sum += a[i];
        }
    }
    cout << fixed << setprecision(2) << sum / double(n - 2);
    return 0;
}