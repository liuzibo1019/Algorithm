#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    int a[105];
    while (cin >> N)
    {
        if (N == 0)
        {
            break;
        }
        for (int i = 0; i < N; i++)
        {
            cin >> a[i];
        }
        int minIndex = 0;
        for (int i = 0; i < N; i++)
        {
            if (a[i] < a[minIndex])
            {
                minIndex = i;
            }
        }
        int temp = a[0];
        a[0] = a[minIndex];
        a[minIndex] = temp;

        for (int i = 0; i < N; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}