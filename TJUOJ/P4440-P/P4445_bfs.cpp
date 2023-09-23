#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> graph(1000, vector<int>(1000, 0));
queue<int> que;
bool visited[1000];
int n, e;

void bfs(int cur)
{
    que.push(cur);
    visited[cur] = true;
    while (que.empty() != true)
    {
        cur = que.front();
        cout << cur << " ";
        que.pop();
        for(int i = 1; i <= n; i++){
            if(graph[cur][i] == 1 && visited[i] != true){
                que.push(i);
                visited[i] = true;
            }
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
        graph[x][y] = graph[y][x] = 1;
    }
    bfs(1);

    return 0;
}