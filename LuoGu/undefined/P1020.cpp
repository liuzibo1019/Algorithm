#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    string s;
    cin >> s;
    sort(a, a + 3);
    for (int i = 0; i < 3; i++)
    {
        cout << a[s[i] - 'A'] << " ";
    }
    return 0;
}