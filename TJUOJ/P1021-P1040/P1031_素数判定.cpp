#include <bits/stdc++.h>
using namespace std;

bool Prime(int num)
{
    if (num < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int start, end, checkNum, flag;
    while (cin >> start >> end)
    {
        if (start == 0 && end == 0)
        {
            break;
        }
        flag = 1;
        for (int i = start; i <= end; i++)
        {
            checkNum = i * i + i + 41;
            if (!Prime(checkNum))
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            cout << "OK" << endl;
        }
        else
        {
            cout << "Sorry" << endl;
        }
    }

    return 0;
}
