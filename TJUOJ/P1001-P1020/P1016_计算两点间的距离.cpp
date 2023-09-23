#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x1, y1, x2, y2, res;
    while (cin >> x1 >> y1 >> x2 >> y2)
    {
        if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0)
        {
            break;
        }
        res = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
        cout << fixed << setprecision(2) << res << endl;
    }
    return 0;
}