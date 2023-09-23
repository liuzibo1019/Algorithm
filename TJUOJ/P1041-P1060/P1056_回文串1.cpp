#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char s[1000];
    while(n--){
        cin >> s;
        int i = 0, j = strlen(s) - 1;
        while(i < j){
            if(s[i++] != s[j--]){
                cout << "no" << endl;
                break;
            }
        }
        if(i >= j){
            cout << "yes" << endl;
        }
    }
    return 0;
}