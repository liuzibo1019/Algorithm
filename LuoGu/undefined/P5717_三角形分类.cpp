#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int a2 = a * a;
    int b2 = b * b;
    int c2 = c * c;
    if (a >= b + c || b >= a + c || c >= a + b)
    {
        cout << "Not triangle" << endl;
    }
    else
    {
        if (a2 == b2 + c2 || b2 == a2 + c2 || c2 == a2 + b2)
        {
            cout << "Right triangle" << endl;
        }
        if (a2 < b2 + c2 && b2 < a2 + c2 && c2 < a2 + b2)
        {
            cout << "Acute triangle" << endl;
        }
        if (a2 > b2 + c2 || b2 > a2 + c2 || c2 > a2 + b2)
        {
            cout << "Obtuse triangle" << endl;
        }
        if (a == b || b == c || a == c)
        {
            cout << "Isosceles triangle" << endl;
        }
        if (a == b && b == c)
        {
            cout << "Equilateral triangle";
        }
    }

    return 0;
}