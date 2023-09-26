#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, num;
    cin >> n;
    int minNum = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if(num < minNum){
            minNum = num;
        }
    }
    cout << minNum;
    return 0;
}