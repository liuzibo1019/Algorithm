#include <bits/stdc++.h>
using namespace std;

bool light[2000005];

int main()
{
    int n, temp, t;
    double a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> t;
        for (int j = 1; j <= t; j++)
        {
            temp = floor(a * j);
            if (light[temp] == false)
            {
                light[temp] = true;
            }
            else
            {
                light[temp] = false;
            }
        }
    }
    for (int i = 0; i < 2000005; i++)
    {
        if (light[i] == true)
        {
            cout << i;
        }
    }
    return 0;
}