#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    for(int i = 2; i <= n / 2; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

bool palindrome(int n){
    int sum = 0;
    int x = n;
    while(x > 0){
        sum = sum * 10 + x % 10;
        x /= 10;
    }
    if(sum == n){
        return true;
    }else {
        return false;
    }
}


int main()
{
    int m, n;
    while(cin >> m >> n){
        if(m == 0 && n == 0){
            break;
        }
        for(int i = m; i <= n; i++){
            if(isPrime(i) && palindrome(i)){
                cout << i << endl;
            }
        }
        cout << endl;
    }
    
    return 0;
}