#include <bits/stdc++.h>
using namespace std;

int main()
{
    long x, n, res;
    while(cin >> x >> n){
        if(x == -1 && n == -1){
            break;
        }
        res = 1;
        for(int i = 0; i < n; i++){
            res *= x;
        }
        cout << res << endl;
    }
    return 0;
}