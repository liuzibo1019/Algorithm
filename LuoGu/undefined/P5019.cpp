#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int res = a[0];
    for(int i = 0; i < n-1; i++){
        if(a[i+1] > a[i]){
            res += a[i+1] - a[i];
        }
    }
    cout << res;
    return 0;
}