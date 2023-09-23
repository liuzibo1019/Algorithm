#include <bits/stdc++.h>
using namespace std;

int n;
int maxNum;
string temp;
string maxStr = "0";

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if(temp.length()>maxStr.length() || temp.length()==maxStr.length()&&temp>maxStr){
            maxStr = temp;
            maxNum = i + 1;
        }
    }
    cout << maxNum << endl;
    cout << maxStr;

    return 0;
}