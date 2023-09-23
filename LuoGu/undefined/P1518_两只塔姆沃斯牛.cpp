#include <bits/stdc++.h>
using namespace std;

int farm[15][15];
int farmerX, farmerY, initFarmerX, initFarmerY;
int cowX, cowY, initCowX, initCowY;

int directionX[4] = {-1, 0, 1, 0};
int directionY[4] = {0, 1, 0, -1};

int main()
{
    char s;
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cin >> s;
            if (s == '*')
            {
                farm[i][j] = 1;
            }
            if (s == 'F')
            {
                farmerX = i;
                initFarmerX = i;
                farmerY = j;
                initFarmerY = j;
            }
            if (s == 'C')
            {
                cowX = i;
                initCowX = i;
                cowY = j;
                initCowY = j;
            }
        }
    }
    for (int i = 0; i < 12; i++)
    {
        farm[0][i] = 1;
        farm[11][i] = 1;
        farm[i][0] = 1;
        farm[i][11] = 1;
    }
    int farmerDirection = 0;
    int cowDirection = 0;
    int res = 0;
    while (true)
    {
        res++;
        int tempX = farmerX + directionX[farmerDirection];
        int tempY = farmerY + directionY[farmerDirection];

        if (farm[tempX][tempY] == 0)
        {
            farmerX = tempX;
            farmerY = tempY;
        }
        else
        {
            farmerDirection += 1;
            if (farmerDirection == 4)
            {
                farmerDirection = 0;
            }
        }

        tempX = cowX + directionX[cowDirection];
        tempY = cowY + directionY[cowDirection];

        if (farm[tempX][tempY] == 0)
        {
            cowX = tempX;
            cowY = tempY;
        }
        else
        {
            cowDirection += 1;
            if (cowDirection == 4)
            {
                cowDirection = 0;
            }
        }
        if (farmerX == cowX && farmerY == cowY)
        {
            break;
        }
        if (res > 10000)
        {
            res = 0;
            break;
        }
        // if (farmerX == initFarmerX && farmerY == initFarmerY && cowX == initCowX && cowY == initCowY && cowDirection == 0 && farmerDirection == 0)
        // {
        //     res = 0;
        //     break;
        // }
    }
    cout << res;
    // for (int i = 0; i < 12; i++)
    // {
    //     for (int j = 0; j < 12; j++)
    //     {
    //         cout << farm[i][j];
    //     }
    //     cout << endl;
    // }
    // cout << farmerX << " " << farmerY << endl;
    // cout << cowX << " " << cowY << endl;
    return 0;
}