// #include <bits/stdc++.h>
// using namespace std;

// int n;
// struct person
// {
//     string name;
//     string work;
//     long long money;
//     int level;
// } a[200];

// bool cmpMoney(person x, person y)
// {
//     return x.money > y.money;
// }

// bool cmpLevel(person x, person y)
// {
//     return x.level > y.level;
// }

// int main()
// {
//     cin >> n;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i].name >> a[i].work >> a[i].money >> a[i].level;
//     }
//     sort(a + 3, a + n, cmpMoney);
//     if (n >= 5)
//     {
//         for (int i = 3; i < 5; i++)
//         {
//             a[i].work = "HuFa";
//         }
//         sort(a + 3, a + 5, cmpLevel);
//     }
//     else if (n >= 3)
//     {
//         for (int i = 3; i < n; i++)
//         {
//             a[i].work = "HuFa";
//         }
//         sort(a + 3, a + n, cmpLevel);
//     }
//     if (n >= 9)
//     {
//         for (int i = 5; i < 9; i++)
//         {
//             a[i].work = "ZhangLao";
//         }
//         sort(a + 5, a + 9, cmpLevel);
//     }
//     else if (n >= 5)
//     {
//         for (int i = 5; i < n; i++)
//         {
//             a[i].work = "ZhangLao";
//         }
//         sort(a + 5, a + n, cmpLevel);
//     }
//     if (n >= 16)
//     {
//         for (int i = 9; i < 16; i++)
//         {
//             a[i].work = "TangZhu";
//         }
//         sort(a + 9, a + 16, cmpLevel);
//     }
//     else if (n >= 9)
//     {
//         for (int i = 9; i < n; i++)
//         {
//             a[i].work = "TangZhu";
//         }
//         sort(a + 9, a + n, cmpLevel);
//     }
//     if (n >= 41)
//     {
//         for (int i = 16; i < 41; i++)
//         {
//             a[i].work = "JingYing";
//         }
//         sort(a + 16, a + 41, cmpLevel);
//     }
//     else if (n >= 16)
//     {
//         for (int i = 16; i < n; i++)
//         {
//             a[i].work = "JingYing";
//             sort(a + 16, a + n, cmpLevel);
//         }
//     }
//     if (n >= 41)
//     {
//         for (int i = 41; i < n; i++)
//         {
//             a[i].work = "BangZhong";
//             sort(a + 41, a + n, cmpLevel);
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i].name << " " << a[i].work << " " << a[i].level << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int n;
struct node
{
    string na, zw, xzw;
    long long bg;
    int le, h;
} ab[115];
int change(string a)
{
    if (a == "BangZhu")
        return 0;
    if (a == "FuBangZhu")
        return 1;
    if (a == "HuFa")
        return 2;
    if (a == "ZhangLao")
        return 3;
    if (a == "TangZhu")
        return 4;
    if (a == "JingYing")
        return 5;
    if (a == "BangZhong")
        return 6;
}
int cmp1(node x, node y)
{
    if (x.bg == y.bg)
        return x.h < y.h;
    else
        return x.bg > y.bg;
}
int cmp2(node x, node y)
{
    if (change(x.xzw) == change(y.xzw))
    {
        if (x.le == y.le)
            return x.h < y.h;
        return x.le > y.le;
    }
    return change(x.xzw) < change(y.xzw);
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> ab[i].na >> ab[i].zw >> ab[i].bg >> ab[i].le;
        ab[i].h = i;
    }
    sort(ab + 4, ab + 1 + n, cmp1);
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
            ab[i].xzw = "BangZhu";
        else if (i == 2 || i == 3)
            ab[i].xzw = "FuBangZhu";
        else if (i == 4 || i == 5)
            ab[i].xzw = "HuFa";
        else if (i >= 6 && i <= 9)
            ab[i].xzw = "ZhangLao";
        else if (i >= 10 && i <= 16)
            ab[i].xzw = "TangZhu";
        else if (i >= 17 && i <= 41)
            ab[i].xzw = "JingYing";
        else
            ab[i].xzw = "BangZhong";
    }
    sort(ab + 1, ab + 1 + n, cmp2);
    for (int i = 1; i <= n; i++)
    {
        cout << ab[i].na << " " << ab[i].xzw << " " << ab[i].le << endl;
    }
    return 0;
}