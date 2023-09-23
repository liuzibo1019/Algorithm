#include <bits/stdc++.h>
using namespace std;

int N, temp, cnt = 0;
int a[10005];

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}