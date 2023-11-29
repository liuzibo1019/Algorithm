#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, temp;
    int max = __INT_MAX__ + 1;
    int min = __INT_MAX__;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(temp > max){
            max = temp;
        }
        if(temp < min){
            min = temp;
        }
    }
    cout << max - min;
    return 0;
}