#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n, m;
    int stuNum[2000005] = {0};
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> stuNum[i];
    }
    int num;
    while (m--)
    {
        cin >> num;
        cout << stuNum[num - 1] << endl;
    }
    return 0;
}