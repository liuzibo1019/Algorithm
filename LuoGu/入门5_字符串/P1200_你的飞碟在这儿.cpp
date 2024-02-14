#include <bits/stdc++.h>
using namespace std;

int main()
{
    string star;
    string team;
    cin >> star;
    cin >> team;
    int mulStar = 1;
    int mulTeam = 1;
    for (char s : star)
    {
        mulStar = mulStar * (s - 'A' + 1);
    }
    for (char t : team)
    {
        mulTeam = mulTeam * (t - 'A' + 1);
    }
    if (mulStar % 47 == mulTeam % 47)
    {
        cout << "GO";
    }
    else
    {
        cout << "STAY";
    }
    return 0;
}