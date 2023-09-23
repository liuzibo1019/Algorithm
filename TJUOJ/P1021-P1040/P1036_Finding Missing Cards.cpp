#include <bits/stdc++.h>
using namespace std;

int S[14], H[14], C[14], D[14];

int main()
{
    int N, num;
    char card;
    cin >> N;
    while (N--)
    {
        cin >> card >> num;
        if (card == 'S')
        {
            S[num] = 1;
        }
        if (card == 'H')
        {
            H[num] = 1;
        }
        if (card == 'C')
        {
            C[num] = 1;
        }
        if (card == 'D')
        {
            D[num] = 1;
        }
    }
    for (int i = 1; i < 14; i++)
    {
        if (S[i] == 0)
        {
            cout << "S " << i << endl;
        }
    }
    for (int i = 1; i < 14; i++)
    {
        if (H[i] == 0)
        {
            cout << "H " << i << endl;
        }
    }
    for (int i = 1; i < 14; i++)
    {
        if (C[i] == 0)
        {
            cout << "C " << i << endl;
        }
    }
    for (int i = 1; i < 14; i++)
    {
        if (D[i] == 0)
        {
            cout << "D " << i << endl;
        }
    }
    return 0;
}