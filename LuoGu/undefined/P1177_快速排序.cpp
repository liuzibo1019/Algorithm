/* //
// Created by 17949 on 11/26/2022.
// P1177 快速排序
#include <bits/stdc++.h>
using namespace std;

int N;
int myArray[100000];

void QuickSort(int *a, int begin, int end)
{
    if (begin > end)
    {
        return;
    }
    int i = begin, j = end;
    int change;
    int temp = myArray[begin];
    while (i < j)
    {
        while (temp <= myArray[j] && i < j)
        {
            j--;
        }
        while (temp >= myArray[i] && i < j)
        {
            i++;
        }
        if (i < j)
        {
            change = myArray[j];
            myArray[j] = myArray[i];
            myArray[i] = change;
        }
    }
    myArray[begin] = myArray[i];
    myArray[i] = temp;
    QuickSort(myArray, begin, j - 1);
    QuickSort(myArray, j + 1, end);
}

int main()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> myArray[i];
    }
    QuickSort(myArray, 0, N - 1);
    for (int i = 0; i < N; i++)
    {
        cout << myArray[i] << " ";
    }
    return 0;
}
 */

#include <iostream>
using namespace std;
int n, a[1000001];
void qsort(int l, int r) // 应用二分思想
{
    int mid = a[(l + r) / 2]; // 中间数
    int i = l, j = r;
    do
    {
        while (a[i] < mid)
            i++; // 查找左半部分比中间数大的数
        while (a[j] > mid)
            j--;    // 查找右半部分比中间数小的数
        if (i <= j) // 如果有一组不满足排序条件（左小右大）的数
        {
            swap(a[i], a[j]); // 交换
            i++;
            j--;
        }
    } while (i <= j); // 这里注意要有=
    if (l < j)
        qsort(l, j); // 递归搜索左半部分
    if (i < r)
        qsort(i, r); // 递归搜索右半部分
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    qsort(1, n);
    for (int i = 1; i <= n; i++)
        cout << a[i] << " ";
}