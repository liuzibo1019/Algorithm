#include <bits/stdc++.h>
using namespace std;

int main()
{
    int money = 0, saveMoney = 0;
    int flag = 1;
    int temp;
    for (int i = 0; i < 12; i++)
    {
        money += 300;
        cin >> temp;
        money -= temp;
        if (money < 0)
        {
            flag = 0;
            cout << (i + 1) * -1;
            break;
        }
        saveMoney += money / 100 * 100;
        money %= 100;
    }
    if (flag)
    {
        cout << saveMoney * 1.2 + money;
    }
    return 0;
}