#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, x, y;
    int res = 0;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> queue;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        queue.push(a);
    }
    while (queue.size() >= 2)
    {
        x = queue.top();
        queue.pop();
        y = queue.top();
        queue.pop();
        res = res + x + y;
        queue.push(x + y);
    }
    cout << res;
    return 0;
}