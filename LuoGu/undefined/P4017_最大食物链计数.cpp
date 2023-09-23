/* #include <bits/stdc++.h>
using namespace std;

int n, m;
int chain[5001][5001];

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        chain[temp1][temp2] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << chain[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
} */

#include <bits/stdc++.h>
using namespace std;
int n, m, ru[5005], chu[5005], a, b, f[5005], ans;
int mp[5005][5005];
queue<int> q;
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        scanf("%d%d", &a, &b);
        mp[a][b] = 1; //记录关系
        chu[a]++;
        ru[b]++; //记录入度和出度
    }
    for (int i = 1; i <= n; i++)
    {
        if (ru[i] == 0)
        {
            f[i] = 1;
            q.push(i); //入度为零的入队
        }
    }
    while (!q.empty())
    { //队列不为空
        int a = q.front();
        q.pop(); //出队
        for (int k = 1; k <= n; k++)
        {
            if (mp[a][k] == 0)
                continue;
            f[k] += f[a]; //更新
            f[k] %= 80112002;
            ru[k]--; //食物少了一个
            if (ru[k] == 0)
            { //入队为零才入队
                if (chu[k] == 0)
                {
                    ans += f[k];
                    ans %= 80112002;
                    continue; //有没有都行
                }
                q.push(k);
            }
        }
    }
    cout << ans;
}