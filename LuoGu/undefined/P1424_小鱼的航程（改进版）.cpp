#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, n;
    unsigned long long cnt = 0;
    cin >> x >> n;
    for (int i = 0; i < n; i++)
    {
        if(x != 6 && x != 7){
            cnt += 250;
        }
        if(x == 7){
            x = 0;
        }
        x++;
    }
    cout << cnt;
}