#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    if (num == 0 || num == 1)
    {
        cout << "Today, I ate " << num << " apple.";
    }
    else
    {
        cout << "Today, I ate " << num << " apples.";
    }
    return 0;
}