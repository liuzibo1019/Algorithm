#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 1;
    int a;
    while (true)
    {
        cin >> a;
        if (a != 0)
        {
            cout << "Case " << i++ << ": " << a << endl;
        }
        else
        {
            break;
        }
    }
    return 0;
}