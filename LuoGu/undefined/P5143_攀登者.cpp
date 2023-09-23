#include <bits/stdc++.h>
using namespace std;

int N;
double ans;
struct Node
{
    double x, y, z;
} a[50005];

bool cmp(Node a, Node b)
{
    return a.z < b.z;
}

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> a[i].x >> a[i].y >> a[i].z;
    }
    sort(a, a + N, cmp);
    for (int i = 1; i < N; i++)
    {
        ans += sqrt((a[i].x - a[i - 1].x) * (a[i].x - a[i - 1].x) + (a[i].y - a[i - 1].y) * (a[i].y - a[i - 1].y) + (a[i].z - a[i - 1].z) * (a[i].z - a[i - 1].z));
    }
    cout << fixed << setprecision(3) << ans;
    return 0;
}