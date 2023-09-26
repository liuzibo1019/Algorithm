#include <bits/stdc++.h>
using namespace std;

int main()
{
    double m, n;
    cin >> m >> n;
    double BMI = m / pow(n, 2);
    if (BMI < 18.5)
    {
        cout << "Underweight";
    }
    else if (BMI >= 18.5 && BMI < 24)
    {
        cout << "Normal";
    }
    else
    {
        cout << setprecision(6) << BMI << endl;
        cout << "Overweight";
    }
    return 0;
}