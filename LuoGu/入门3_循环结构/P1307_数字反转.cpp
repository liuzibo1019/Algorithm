#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    int resN = 0;
    cin >> N;
    int flag = 1;
    if (N < 0)
    {
        flag = -1;
        N = abs(N);
    }
    while (N != 0)
    {
        resN = resN * 10 + N % 10;
        N = N / 10;
    }
    cout << resN * flag;
    return 0;
}
