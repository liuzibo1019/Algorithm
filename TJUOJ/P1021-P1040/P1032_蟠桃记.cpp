#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, num;
    while (cin >> N)
    {
        if (N == 0)
        {
            break;
        }
        num = 1;
        for (int i = 0; i < N - 1; i++)
        {
            num = (num + 1) * 2;
        }
        cout << num << endl;
    }
    return 0;
}