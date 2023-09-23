#include <bits/stdc++.h>
using namespace std;

int main()
{
    // init
    char N[250];
    cin >> N;
    int k;
    cin >> k;
    int length = strlen(N);
    int resLength = length - k;
    while (k--)
    {
        for (int i = 0; i < length - 1; i++)
        {
            if (N[i] > N[i + 1])
            {
                for (int j = i; j < length - 1; j++)
                {
                    N[j] = N[j + 1];
                }
                length--;
                break;
            }
        }
    }
    int flag = 0;
    for (int i = 0; i < resLength; i++)
    {
        if (N[i] != '0' || flag == 1)
        {
            cout << N[i];
            flag = 1;
        }
    }
    if(N[0] == '0' && resLength == 1){
        cout << "0";
    }
    return 0;
}