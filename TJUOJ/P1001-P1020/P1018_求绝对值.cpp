#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    double num;
    while (N--)
    {
        cin >> num;
        if (num < 0)
        {
            num *= -1;
        }
        cout << fixed << setprecision(2) << num << endl;;
    }
    return 0;
}