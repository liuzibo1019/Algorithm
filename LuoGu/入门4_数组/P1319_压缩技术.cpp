#include <bits/stdc++.h>
using namespace std;

int compress[205];

int main()
{
    int N, sum = 0;
    cin >> N;
    int i = 0;
    for (;; i++)
    {
        cin >> compress[i];
        sum += compress[i];
        if (sum == N * N)
        {
            break;
        }
    }
    int cnt = 0;
    for (int j = 0; j <= i; j++)
    {
        for (int k = 0; k < compress[j]; k++)
        {
            cnt++;
            if (j % 2 == 0)
            {
                cout << 0;
            }
            else
            {
                cout << 1;
            }
            if (cnt == N)
            {
                cnt = 0;
                cout << endl;
            }
        }
    }
    return 0;
}