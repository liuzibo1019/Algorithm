#include <bits/stdc++.h>
using namespace std;
priority_queue<int, vector<int>, greater<int>> fruit;
long long res = 0;

int main()
{
    int n;
    cin >> n;
    int ai;
    for (int i = 0; i < n; i++)
    {

        cin >> ai;
        fruit.push(ai);
    }
    int first, second;
    for (int i = 0; i < n - 1; i++)
    {
        first = fruit.top();
        fruit.pop();
        second = fruit.top();
        fruit.pop();
        res += first + second;
        fruit.push(first + second);
    }
    cout << res;
    return 0;
}