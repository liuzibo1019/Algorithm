#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[1000];
    cin.getline(s, 1000);
    for(int i = 0; i < strlen(s); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] -= 32;
        }else if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += 32;
        }
    }
    cout << s;
    return 0;
}