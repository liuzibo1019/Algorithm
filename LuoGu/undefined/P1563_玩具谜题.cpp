#include <bits/stdc++.h>
using namespace std;

int face[100010];
string name[100010];
int direction[100010];
int dist[100010];

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> face[i] >> name[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> direction[i] >> dist[i];
    }

    int loc = 0;
    for (int i = 0; i < m; i++)
    {
        if (face[loc] == direction[i])
        {
            dist[i] *= -1;
        }
        loc += dist[i];
        while (loc >= n)
        {
            loc -= n;
        }
        while (loc < 0)
        {
            loc += n;
        }
        // cout << "loc ==> " << loc << endl;
    }
    cout << name[loc];
    return 0;
}