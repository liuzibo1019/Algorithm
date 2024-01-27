#include <bits/stdc++.h>
using namespace std;

char square[15][15];
char tempSquare[15][15];
char resSquare[15][15];
int n;

// void copy()
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             square[i][j] = tempSquare[i][j];
//         }
//     }
// }

// void rotate()
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             tempSquare[j][n - i - 1] = square[i][j];
//         }
//     }
//     copy();
// }

// bool compare()
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (square[i][j] != resSquare[i][j])
//             {
//                 return false;
//             }
//         }
//     }
//     return true;
// }

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> square[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> resSquare[i][j];
        }
    }
    rotate();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << square[i][j];
        }
        cout << endl;
    }
    cout << compare() << endl;
    return 0;
}