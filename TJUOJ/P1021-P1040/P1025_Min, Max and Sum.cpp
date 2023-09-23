#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    long sum, min, max, num;
    cin >> num;
    N--;
    sum = min = max = num;
    while(N--){
        cin >> num;
        sum += num;
        if(num < min){
            min = num;
        }
        if(num > max){
            max = num;
        }
    }
    cout << min << " " << max << " " << sum;
    return 0;
}