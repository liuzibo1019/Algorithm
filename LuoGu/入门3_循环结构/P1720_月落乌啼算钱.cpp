#include <bits/stdc++.h>
using namespace std;

long a[100];

int main()
{
    a[0] = 0;
    a[1] = 1;
    a[2] = 1;
    long n;
    cin >> n;
    for(int i = 3; i <= n; i++){
        a[i] = a[i - 1] + a[i - 2];
    }
    cout << a[n] << ".00";
    return 0;
}