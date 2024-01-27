#include <bits/stdc++.h>
using namespace std;

int n;

struct Matrix
{
    char square[15][15];
    void init()
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> square[i][j];
            }
        }
    }
    Matrix rotate()
    {
        Matrix res;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                res.square[i][j] = square[n - j - 1][i];
            }
        }
        return res;
    }
    Matrix reflex()
    {
        Matrix res;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                res.square[i][j] = square[i][n - j - 1];
            }
        }
        return res;
    }
    bool operator==(Matrix b)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (square[i][j] != b.square[i][j])
                {
                    return false;
                }
            }
        }
        return true;
    }
} from, to, mid;

int main()
{
    cin >> n;
    from.init();
    to.init();
    mid = from;
    for (int i = 1; i < 4; i++)
    {
        mid = mid.rotate();
        if (mid == to)
        {
            cout << i << endl;
            return 0;
        }
    }
    mid = from.reflex();
    if (mid == to)
    {
        cout << 4 << endl;
        return 0;
    }
    for (int i = 0; i < 3; i++)
    {
        mid = mid.rotate();
        if (mid == to)
        {
            cout << 5 << endl;
            return 0;
        }
    }
    if (from == to)
    {
        cout << 6 << endl;
        return 0;
    }
    cout << 7 << endl;
    return 0;
}