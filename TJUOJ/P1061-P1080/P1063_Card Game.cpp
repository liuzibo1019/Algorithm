#include <iostream>
using namespace std;

int main()
{
    int n;
    string Taro, Hanako;
    long Tscore = 0, Hscore = 0;
    cin >> n;
    while (n--)
    {
        cin >> Taro >> Hanako;
        if (Taro == Hanako)
        {
            Tscore++;
            Hscore++;
        }
        else if (Taro > Hanako)
        {
            Tscore = Tscore + 3;
        }
        else
        {
            Hscore = Hscore + 3;
        }
    }
    cout << Tscore << " " << Hscore;
    return 0;
}