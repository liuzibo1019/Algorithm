//
// Created by 17949 on 12/3/2022.
// P1093 奖学金
#include <bits/stdc++.h>
using namespace std;

typedef struct Student{
    int stuNum;
    int chinese;
    int math;
    int english;
    int sum;
} stu;

stu students[300];
int n;

int compare(stu a, stu b){
    if(a.sum != b.sum) {
        return a.sum > b.sum;
    }else if(a.chinese != b.chinese){
        return a.chinese > b.chinese;
    }else{
        return a.stuNum < b.stuNum;
    }
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        students[i].stuNum = i + 1;
        cin >> students[i].chinese;
        cin >> students[i].math;
        cin >> students[i].english;
        students[i].sum = students[i].chinese + students[i].math + students[i].english;
    }
    sort(students, students + n, compare);
    for(int i = 0; i < 5; i++){
        cout << students[i].stuNum << " " << students[i].sum << endl;
    }
    return 0;
}
