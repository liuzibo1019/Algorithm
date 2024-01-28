#include <bits/stdc++.h>
using namespace std;

string dot[205];
string dotAll;
int main()
{
    cin >> dot[0];
    dotAll = dotAll + dot[0];
    int N = dot[0].length();

    for (int i = 1; i < N; i++)
    {
        cin >> dot[i];
        dotAll = dotAll + dot[i];
    }
    char c = '0';
    int cnt = 0;
    cout << N << " ";
    for (int i = 0; i < dotAll.length(); i++)
    {
        if (dotAll[i] == c)
        {
            cnt++;
        }
        else
        {
            cout << cnt << " ";
            cnt = 1;
            c = dotAll[i];
        }
    }

    cout << cnt;
    return 0;
}