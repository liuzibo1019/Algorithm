#include <bits/stdc++.h>
using namespace std;

void buildTree(string p, string m)
{
    if (p.size() == 0 || m.size() == 0)
    {
        return;
    }
    int indexInM = m.find(p[0]);
    buildTree(p.substr(1, indexInM), m.substr(0, indexInM));
    buildTree(p.substr(indexInM + 1), m.substr(indexInM + 1));
    cout << p[0];
    return;
}

int main()
{
    string p, m;
    while (cin >> p >> m)
    {
        buildTree(p, m);
        cout << endl;
    }
    return 0;
}