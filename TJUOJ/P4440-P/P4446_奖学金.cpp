#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> graph(1000, vector<int>(1000, 0));
vector<int> deg(1000, 0);

int main()
{
    int n, e;
    cin >> n >> e;
    int x, y;
    for (int i = 1; i <= e; i++)
    {
        cin >> x >> y;
        graph[x][y] = 1;
        deg[i] = 0;
    }
    
    return 0;
}