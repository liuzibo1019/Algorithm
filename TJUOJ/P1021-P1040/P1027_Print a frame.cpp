#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, W;
    while (cin >> H >> W)
    {
        if (H == 0 && W == 0)
        {
            break;
        }
        for (int i = 0; i < W; i++)
        {
            cout << "#";
        }
        cout << endl;

        for (int i = 0; i < H - 2; i++)
        {
            cout << "#";
            for (int j = 0; j < W - 2; j++)
            {
                cout << ".";
            }
            cout << "#" << endl;
        }
        for (int i = 0; i < W; i++)
        {
            cout << "#";
        }
        cout << endl;
        cout << endl;
    }
    return 0;
}