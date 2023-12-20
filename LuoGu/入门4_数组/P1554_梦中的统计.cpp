#include <bits/stdc++.h>
using namespace std;

int cnt[10];

int main()
{
    int M, N;
    cin >> M >> N;
    for (int i = M; i <= N; i++)
    {
        int num = i;
        while (num != 0)
        {
            cnt[num % 10]++;
            num = num / 10;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << cnt[i] << " ";
    }
    return 0;
}