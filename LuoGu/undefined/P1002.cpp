#include <bits/stdc++.h>
using namespace std;

int main()
{
    int dx[9] = {-2, -2, -1, -1, 0, 1, 1, 2, 2};
    int dy[9] = {-1, 1, -2, 2, 0, -2, 2, -1, 1};
    int bX, bY, horseX, horseY;
    // int bX = 7, bY = 7, horseX = 3, horseY = 3;
    cin >> bX >> bY >> horseX >> horseY;
    bX++;
    bY++;
    bool safety[bX][bY];       // 是否可以走
    long long roadNum[bX][bY]; // bX, bY位置对应的路的条数
    // 初始化
    for (int i = 0; i < bX; i++)
    {
        for (int j = 0; j < bY; j++)
        {
            safety[i][j] = true;
            roadNum[i][j] = 0;
        }
    }
    // 标出不能走的位置
    for (int i = 0; i < 9; i++)
    {
        if (horseX + dx[i] >= 0 && horseX + dx[i] <= bX && horseY + dy[i] >= 0 && horseY + dy[i] <= bY)
        {
            safety[horseX + dx[i]][horseY + dy[i]] = false;
        }
    }
    // for (int i = 0; i < bX; i++)
    // {
    //     for (int j = 0; j < bY; j++)
    //     {
    //         cout << safety[i][j] <<"  ";
    //     }
    //     cout<<endl;
    // }
    for (int i = 0; i < bX; i++)
    {
        for (int j = 0; j < bY; j++)
        {
            if (safety[i][j] == false)
            {
                continue;
            }
            if (i == 0 && j == 0)
            {
                roadNum[i][j] = 1;
            }
            if (i == 0 && j > 0)
            {
                roadNum[i][j] = roadNum[i][j - 1];
            }
            if (i > 0 && j == 0)
            {
                roadNum[i][j] = roadNum[i - 1][j];
            }
            if (i > 0 && j > 0)
            {
                roadNum[i][j] = roadNum[i][j - 1] + roadNum[i - 1][j];
            }
        }
    }
    cout << roadNum[bX - 1][bY - 1];
    return 0;
}
