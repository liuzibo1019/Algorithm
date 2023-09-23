#include <bits/stdc++.h>
using namespace std;

int N, B, sum = 0, cnt = 0;
int a[20005];

int cmp(int x, int y){
    return x > y;
}

int main()
{
    cin >> N >> B;
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }
    sort(a, a + N, cmp);
    for(int i = 0; i < N; i++){
        sum += a[i];
        cnt++;
        if(sum > B){
            break;
        }
    }
    cout << cnt;
    return 0;
}