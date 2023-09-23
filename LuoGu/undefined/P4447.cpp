#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, int> m;
    map<int, int>::iterator it;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        m[temp]++;
    }
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << it->second << endl;
    }

    return 0;
}
