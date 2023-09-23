#include <bits/stdc++.h>
using namespace std;

int a[4][3][10];
int main()
{
    int N;
    cin >> N;
    int x, y, z, num;
    while (N--)
    {
        cin >> x >> y >> z >> num;
        a[x - 1][y - 1][z - 1] = num;
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                cout << " " << a[i][j][k];
            }
            cout << endl;
        }
        if (i != 3)
        {
            cout << "####################" << endl;
        }
    }

    return 0;
}