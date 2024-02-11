#include <bits/stdc++.h>
using namespace std;

bool isPrime(int a)
{
    if (a < 2)
    {
        return false;
    }
    if (a == 2)
    {
        return true;
    }
    for (int i = 2; i < a / 2; i++)
    {
        if (a % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
    cin >> s;
    unordered_map<char, int> mymap;
    for (int i = 0; i < s.length(); i++)
    {
        if (mymap.find(s[i]) == mymap.end())
        {
            mymap[s[i]] = 1;
        }
        else
        {
            mymap[s[i]]++;
        }
    }
    unordered_map<char, int>::iterator it;
    int maxCount = __INT_MAX__ + 1;
    int minCount = __INT_MAX__;
    for (it = mymap.begin(); it != mymap.end(); it++)
    {
        if (it->second > maxCount)
        {
            maxCount = it->second;
        }
        if (it->second < minCount)
        {
            minCount = it->second;
        }
    }
    if (isPrime(maxCount - minCount))
    {
        cout << "Lucky Word" << endl;
        cout << maxCount - minCount;
    }
    else
    {
        cout << "No Answer" << endl;
        cout << "0";
    }
    return 0;
}