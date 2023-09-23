#include <bits/stdc++.h>
using namespace std;

bool CompleteNum(int num)
{
    int sum = 0;
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (sum == num)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;
    int num1, num2;
    int cnt;
    while (n--)
    {
        cnt = 0;
        cin >> num1 >> num2;
        for (int i = num1; i <= num2; i++)
        {
            if (CompleteNum(i))
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}