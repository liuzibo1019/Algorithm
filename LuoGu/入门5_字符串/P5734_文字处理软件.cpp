#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    string str;
    cin >> str;

    for (int i = 0; i < q; i++)
    {
        int opt;
        cin >> opt;
        if (opt == 1)
        {
            string s1;
            cin >> s1;
            str = str + s1;
            cout << str << endl;
        }
        else if (opt == 2)
        {
            int start, len;
            cin >> start >> len;
            str = str.substr(start, len);
            cout << str << endl;
        }
        else if (opt == 3)
        {
            int index;
            string s2;
            cin >> index;
            cin >> s2;
            str = str.insert(index, s2);
            cout << str << endl;
        }
        else if (opt == 4)
        {
            string s3;
            cin >> s3;
            int index = str.find(s3);
            if (index != string::npos)
            {
                cout << index << endl;
            }
            else
            {
                cout << "-1" << endl;
            }
        }
    }
    return 0;
}