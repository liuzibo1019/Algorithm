#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w, n;
    cin >> w >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int res = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] != 0)
        {
            for (int j = i - 1; j >= 0; j--)
            {
                if (a[j] != 0 && a[i] + a[j] <= w){
                    a[j] = 0;
                    break;
                }
            }
            a[i] = 0;
            res++;
        }
    }
    cout << res;
    return 0;
}