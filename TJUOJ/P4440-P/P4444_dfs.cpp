#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> graph(1000, vector<int>(1000, 0));
int n, e;
bool visited[1000];

void dfs(int cur)
{
    cout << cur << " ";
    visited[cur] = true;
    for (int i = 1; i <= n; i++)
    {
        if (graph[cur][i] == 1 && visited[i] != true)
        {
            dfs(i);
        }
    }
}

int main()
{
    cin >> n >> e;
    int x, y;
    for (int i = 1; i <= e; i++)
    {
        cin >> x >> y;
        graph[x][y] = 1;
        graph[y][x] = 1;
    }
    dfs(1);
    return 0;
}