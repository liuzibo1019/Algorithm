#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[1005];
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < N - 1; i++)
    {
        cout << a[N - i - 1] << " ";
    }
    cout << a[0];
    return 0;
}