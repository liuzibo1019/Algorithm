#include <bits/stdc++.h>
using namespace std;

string add(string str1, string str2)
{
    string str;
    int len1 = str1.length();
    int len2 = str2.length();
    if (len1 < len2)
    {
        for (int i = 1; i <= len2 - len1; i++)
        {
            str1 = "0" + str1;
        }
    }
    else if (len2 < len1)
    {
        for (int i = 1; i <= len1 - len2; i++)
        {
            str2 = "0" + str2;
        }
    }
    int len = str1.length();
    int cf = 0;
    int temp = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        temp = str1[i] - '0' + str2[i] - '0' + cf;
        cf = temp / 10;
        temp %= 10;
        str = char(temp + '0') + str;
    }
    if (cf != 0)
    {
        str = char(cf + '0') + str;
    }
    return str;
}

string mul(string str1, string str2)
{
    string str;
    int len1 = str1.length();
    int len2 = str2.length();
    string tempstr;
    for (int i = len2 - 1; i >= 0; i--)
    {
        tempstr = "";
        int temp = str2[i] - '0';
        int t = 0;
        int cf = 0;
        if (temp != 0)
        {
            for (int j = 1; j <= len2 - 1 - i; j++)
                tempstr += "0";
            for (int j = len1 - 1; j >= 0; j--)
            {
                t = (temp * (str1[j] - '0') + cf) % 10;
                cf = (temp * (str1[j] - '0') + cf) / 10;
                tempstr = char(t + '0') + tempstr;
            }
            if (cf != 0)
                tempstr = char(cf + '0') + tempstr;
        }
        str = add(str, tempstr);
    }
    str.erase(0, str.find_first_not_of('0'));
    if (str.length() == 0)
    {
        str = "0";
    }
    return str;
}

int main()
{
    string str1, str2;
    cin >> str1 >> str2;
    // cout << add(str1, str2);
    cout << mul(str1, str2);
    return 0;
}
