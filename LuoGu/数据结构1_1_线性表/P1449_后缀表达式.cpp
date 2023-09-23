#include <bits/stdc++.h>
using namespace std;

int main()
{
    string cal;
    cin >> cal;
    stack<int> num;
    int num1, num2;
    int curNum = 0;
    for (char c : cal)
    {
        if (c == '@')
        {
            break;
        }
        switch (c)
        {
        case '+':
            num1 = num.top();
            num.pop();
            num2 = num.top();
            num.pop();
            num.push(num1 + num2);
            break;
        case '-':
            num1 = num.top();
            num.pop();
            num2 = num.top();
            num.pop();
            num.push(num2 - num1);
            break;
        case '*':
            num1 = num.top();
            num.pop();
            num2 = num.top();
            num.pop();
            num.push(num1 * num2);
            break;
        case '/':
            num1 = num.top();
            num.pop();
            num2 = num.top();
            num.pop();
            num.push(num2 / num1);
            break;
        case '.':
            num.push(curNum);
            curNum = 0;
            break;
        default:
            curNum = curNum * 10 + c - '0';
            break;
        }
    }
    cout << num.top() << endl;
    return 0;
}