#include<bits/stdc++.h>
#include <vector>
using namespace std;

vector<int> weight(1000);
vector<int> value(1000);
vector<vector<int> > dp(1000, vector<int>(1000, 0));

int main() {
	int M, N;
	cin >> M >> N;
	for(int i = 1; i <= N; i++) {
		cin >> weight[i] >> value[i];
	}
	// dp[i][j] left weight j select from 0 - j
	for(int i = 1; i <= N; i++) {
		for(int j = M; j >= weight[i]; j--) {
			dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - weight[i]] + value[i]);
		}
	}
	cout << dp[N][M];
}

