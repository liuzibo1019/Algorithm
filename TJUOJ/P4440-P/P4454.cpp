#include<bits/stdc++.h>
using namespace std;

vector<vector<int> > vec(105, vector<int>(105, 0));
vector<int> dp(105);

int main() {
	int N;
	cin >> N;
	for(int i = 1; i <= N; i++) {
		for(int j = 1; j <= N; j++) {
			cin >> vec[i][j];
		}
	}
	// dp current row max substr sum
	int temp[N];
	for(int i = 1; i <= N; i++) {
		memset(temp, 0, sizeof(temp));
		for(int j = i; j <= N; j++) {
			for(int k = i; k < j; k++) {
			    temp[]
			}
		}
	}

}
