#include <bits/stdc++.h>
using namespace std;
int studyTime[7];
int schoolTime, motherTime;

int main()
{
    int flag = 0;
    for (int i = 0; i < 7; i++)
    {
        cin >> schoolTime >> motherTime;
        if (schoolTime + motherTime > 8)
        {
            flag = 1;
            studyTime[i] = schoolTime + motherTime;
        }
    }
    int max = 0, maxi = 0;
    for (int i = 0; i < 7; i++)
    {
        if (studyTime[i] > max)
        {
            max = studyTime[i];
            maxi = i;
        }
    }
    if(flag == 0){
        maxi = -1;
    }
    cout << maxi + 1;
    return 0;
}