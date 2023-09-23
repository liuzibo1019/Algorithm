// transform的用法
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string W;
    string T;
    int cnt = 0;
    cin >> W;
    transform(W.begin(), W.end(), W.begin(), ::tolower);
    while(cin >> T){
        if(T == "END_OF_TEXT"){
            break;
        }
        transform(T.begin(), T.end(), T.begin(), ::tolower);
        if(W == T){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}