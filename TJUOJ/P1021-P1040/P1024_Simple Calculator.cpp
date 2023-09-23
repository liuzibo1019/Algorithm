#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num1, num2;
    char op;
    while(cin >> num1 >> op >> num2){
        if(op == '?'){
            break;
        }
        if(op == '+'){
            cout << num1 + num2 << endl;
        }
        if(op == '-'){
            cout << num1 - num2 << endl;
        }
        if(op == '*'){
            cout << num1 * num2 << endl;
        }
        if(op == '/'){
            cout << num1 / num2 << endl;
        }
    }
    return 0;
}