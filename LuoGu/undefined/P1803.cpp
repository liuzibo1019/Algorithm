#include <bits/stdc++.h>
using namespace std;

typedef struct match
{
    int startTime;
    int endTime;
} mat;

int cmp(mat a, mat b)
{
    return a.endTime < b.endTime;
}

int main()
{
    int n;
    int a, b;
    cin >> n;
    mat matchList[n];
    for (int i = 0; i < n; i++)
    {
        cin >> matchList[i].startTime;
        cin >> matchList[i].endTime;
    }
    sort(matchList, matchList + n, cmp);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << matchList[i].startTime << " ";
    //     cout << matchList[i].endTime << endl;
    // }
    int res = 0;
    int time = 0;
    for (int i = 0; i < n; i++)
    {
        if (time <= matchList[i].startTime)
        {
            time = matchList[i].endTime;
            res++;
        }
    }
    cout << res;
    return 0;
}