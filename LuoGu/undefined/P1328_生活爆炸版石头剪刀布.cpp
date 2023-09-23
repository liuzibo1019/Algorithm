#include <bits/stdc++.h>
using namespace std;

int N, NA, NB;
int a[200], b[200];
int aa[200], bb[200];
int vs[5][5] = {{0, 0, 1, 1, 0},
                {1, 0, 0, 1, 0},
                {0, 1, 0, 0, 1},
                {0, 0, 1, 0, 1},
                {1, 1, 0, 0, 0}};

int main()
{
    cin >> N >> NA >> NB;
    for (int i = 0; i < NA; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < NB; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < N; i++)
    {
        aa[i] = a[i % NA];
        bb[i] = b[i % NB];
    }

    // for (int i = 0; i < N; i++)
    // {
    //     cout << a[i] << " " << b[i] << endl;
    // }
    int scoreA = 0, scoreB = 0;
    for (int i = 0; i < N; i++)
    {
        scoreA += vs[aa[i]][bb[i]];
        scoreB += vs[bb[i]][aa[i]];
    }
    cout << scoreA << " " << scoreB;
    return 0;
}