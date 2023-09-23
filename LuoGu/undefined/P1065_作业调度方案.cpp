#include <stdio.h>

int m, n;
int list[501];
struct Information
{
    int id;
    // 在第 id 台机器上加工
    int cost;
    // 花费 cost 时间
} a[21][21];
// a[第几个工件][第几步]
int mac[21][100001] = {0};
// mac[机器编号][时间（话说我也不知道时间最大是多少，反正在空间限制内尽量大）]
int step[21] = {0};
// 每个工件加工到了第几步
int las_time[21] = {0};
// 每个工件上次是 las_time[工件编号] 时加工完的
int ans = 0;

int main()
{
    scanf("%d%d", &m, &n);
    for (int i = 1; i <= m * n; i++)
    {
        scanf("%d", list + i);
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            scanf("%d", &a[i][j].id);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            scanf("%d", &a[i][j].cost);
        }
    }
    // 以上：读入
    for (int i = 1; i <= m * n; i++)
    {
        int now = list[i];
        step[now]++;
        int id = a[now][step[now]].id, cost = a[now][step[now]].cost;
        /* 调试代码 */ // printf("%d: now = %d, id = %d, cost = %d\n", i, now, id, cost);
        int s = 0;
        for (int j = las_time[now] + 1;; j++)
        {
            if (mac[id][j] == 0)
            {
                s++;
            }
            else
            {
                s = 0;
            }
            if (s == cost)
            {
                for (int k = j - cost + 1; k <= j; k++)
                {
                    mac[id][k] = 1;
                }
                /* 调试代码 */ // printf("(%d~%d. \n", j - cost + 1, j);
                if (j > ans)
                    ans = j;
                las_time[now] = j;
                break;
            }
        }
    }
    printf("%d", ans);
    return 0;
}