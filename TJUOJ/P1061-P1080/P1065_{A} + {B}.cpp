#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    int m, n;
    int x;
    while (cin >> m >> n)
    {
        if(m == 0 && n == 0){
            break;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> x;
            s.insert(x);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            s.insert(x);
        }
        set<int>::iterator it;
        for(it = s.begin(); it != s.end();it++){
            cout << *it << " ";
        }
        cout << endl;
        s.clear();
    }
    return 0;
}