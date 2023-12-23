#include <bits/stdc++.h>
using namespace std;

int cnt[100];

int main()
{
    int s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    for (int i = 1; i <= s1; i++)
    {
        for (int j = 1; j <= s2; j++)
        {
            for (int k = 1; k <= s3; k++)
            {
                cnt[i + j + k]++;
            }
        }
    }
    int maxF = 0;
    int maxi = 0;
    for (int i = 3; i <= s1 + s2 + s3; i++)
    {
        if (cnt[i] > maxF)
        {
            maxF = cnt[i];
            maxi = i;
        }
    }
    cout << maxi;
    return 0;
}