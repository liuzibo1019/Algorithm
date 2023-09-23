//
// Created by 17949 on 11/26/2022.
// P1271 选举学生会
//
#include<bits/stdc++.h>
using namespace std;

int n, m;
int num[2000000];
int main(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> num[i];
    }
    sort(num, num + m);
    for(int i = 0; i < m; i++){
        cout << num[i] << " ";
    }
}
