#include <bits/stdc++.h>
using namespace std;
int n;
int main()
{
    cin >> n;
    switch (n)
    {
    case 1:
    {
        cout << "I love Luogu!" << endl;
        break;
    }
    case 2:
    {
        cout << 2 + 4 << " " << 10 - 2 - 4 << endl;
        break;
    }
    case 3:
    {
        int a = 14 / 4;
        cout << a << endl;
        cout << a * 4 << endl;
        cout << 14 - a * 4 << endl;
        break;
    }
    case 4:
    {
        cout << 500.0 / 3 << endl;
        break;
    }
    case 5:
    {
        cout << (260 + 220) / (12 + 20) << endl;
        break;
    }
    case 6:
    {
        double a = 6, b = 9;
        double c = sqrt(a * a + b * b);
        cout << c << endl;
        break;
    }
    case 7:
    {
        int a = 100;
        a += 10;
        cout << a << endl;
        a -= 20;
        cout << a << endl;
        a = 0;
        cout << a << endl;
        break;
    }
    case 8:
    {
        int r = 5;
        double pi = 3.141593;
        cout << 2 * pi * r << endl;
        cout << r * r * pi << endl;
        cout << 4.0 / 3 * pi * r * r * r << endl;
        break;
    }
    case 9:
    {
        cout << (((1 + 1) * 2 + 1) * 2 + 1) * 2 << endl;
        break;
    }
    case 10:
    {
        cout << 9 << endl;
        break;
    }
    case 11:
    {
        cout << 100.0 / (8 - 5) << endl;
        break;
    }
    case 12:
    {
        cout << 'M' - 'A' + 1 << endl;
        cout << char('A' - 1 + 18) << endl;
        break;
    }
    case 13:
    {
        int r1 = 4, r2 = 10;
        double pi = 3.141593;
        double v = 4.0 / 3 * pi * r1 * r1 * r1 + 4.0 / 3 * pi * r2 * r2 * r2;
        v = pow(v, 1.0 / 3);
        printf("%.0lf\n", v);
        break;
    }
    case 14:
    {
        cout << 50 << endl;
        break;
    }
    }
    return 0;
}