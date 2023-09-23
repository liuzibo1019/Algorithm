#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> graph(55, vector<int>(55));

const int INF = 0x1e8;


int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> graph[i][j];
            if (i != j && graph[i][j] == 0)
            {
                graph[i][j] = INF;
            }
        }
    }

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
            }
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (graph[i][j] == INF)
            {
                cout << "-1 ";
            }
            else
            {
                cout << graph[i][j] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}