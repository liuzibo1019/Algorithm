#include <bits/stdc++.h>
using namespace std;

void printSquare(int n)
{
    int cnt = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (cnt < 10)
            {
                cout << "0";
            }
            cout << cnt++;
        }
        cout << endl;
    }
}

void printTriangle(int n)
{
    int cnt = 1;
    for (int i = 0; i < n; i++)
    {
        for (int k = n - i - 1; k > 0; k--)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++)
        {
            if (cnt < 10)
            {
                cout << "0";
            }
            cout << cnt++;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    printSquare(n);
    cout << endl;
    printTriangle(n);
    return 0;
}