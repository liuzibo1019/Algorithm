#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int score;
    while (N--)
    {
        cin >> score;
        if (score < 0 || score > 100)
        {
            cout << "Score is error!" << endl;
        }
        else if (score >= 0 && score < 60)
        {
            cout << "E" << endl;
        }
        else if (score >= 60 && score < 70)
        {
            cout << "D" << endl;
        }
        else if (score >= 70 && score < 80)
        {
            cout << "C" << endl;
        }
        else if (score >= 80 && score < 90)
        {
            cout << "B" << endl;
        }
        else if (score >= 90 && score <= 100)
        {
            cout << "A" << endl;
        }
    }
    return 0;
}