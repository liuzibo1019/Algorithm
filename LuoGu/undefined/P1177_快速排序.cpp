//
// Created by 17949 on 11/26/2022.
// P1177 快速排序
#include <bits/stdc++.h>
using namespace std;

int N;
int myArray[100000];

void QuickSort(int *a, int begin, int end) {
    if (begin > end) {
        return;
    }
    int i = begin, j = end;
    int change;
    int temp = myArray[begin];
    while (i < j) {
        while (temp <= myArray[j] && i < j) {
            j--;
        }
        while (temp >= myArray[i] && i < j) {
            i++;
        }
        if (i < j) {
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

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> myArray[i];
    }
    QuickSort(myArray, 0, N - 1);
    for (int i = 0; i < N; i++) {
        cout << myArray[i] << " ";
    }
    return 0;
}
