#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    int temp, lastTemp;
    while (cin >> n >> m)
    {
        if (n == 0 && m == 0)
        {
            break;
        }
        int flag = 1;
        for (int i = 0; i < n; i++)
        {

            cin >> temp;
            if (temp > m && flag)
            {
                cout << m << " ";
                flag = 0;
            }
            cout << temp << " ";
        }
        cout << endl;
    }
    return 0;
}