#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    int evenSum, oddSum, start, end;
    cin >> N;
    while (N--)
    {
        cin >> start >> end;
        evenSum = 0;
        oddSum = 0;
        for (int i = start; i <= end; i++)
        {
            if (i % 2 == 0)
            {
                evenSum += i * i;
            }
            else
            {
                oddSum += i * i * i;
            }
        }
        cout << evenSum << " " << oddSum << endl;
    }
    return 0;
}