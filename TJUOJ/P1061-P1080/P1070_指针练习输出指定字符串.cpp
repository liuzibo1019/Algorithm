#include <iostream>
using namespace std;
void Print(const char *p1, const char *p2)
{
    for (;p1 < p2; p1++)
        cout << *p1;
}
int main()
{
    const char *s = "Tianjin University123";
    Print(s, s + 7);
    cout << endl;
    Print(s, s + 18);
    cout << endl;

    return 0;
}