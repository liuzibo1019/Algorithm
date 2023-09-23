//
// Created by 17949 on 11/29/2022.
// P1059 明明的随机数
#include <bits/stdc++.h>
using namespace std;

int myArray[1001];
int N, temp, cnt;

int main(){
    // 随机数所在位置置为1
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> temp;
        myArray[temp] = 1;
    }
    // 统计和输出1的位置
    for(int i = 0; i < 1001; i++){
        if(myArray[i] == 1){
            cnt++;
        }
    }
    cout << cnt << endl;
    for(int i= 0; i < 1001; i++){
        if(myArray[i] == 1){
            cout << i << " ";
        }
    }
    return 0;
}