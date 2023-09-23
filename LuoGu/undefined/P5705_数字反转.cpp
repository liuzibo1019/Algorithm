#include <bits/stdc++.h>
using namespace std;

int main()
{
    char num[10];
    cin >> num;
    for (int i = strlen(num) - 1; i >= 0; i--)
    {
        cout << num[i];
    }
    return 0;
}