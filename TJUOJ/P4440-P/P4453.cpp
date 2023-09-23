#include<bits/stdc++.h>
using namespace std;

vector<int> cost(20);
vector<int> dp(1000, 0);

int main() {
	int mile;
	for(int i = 1; i <= 10; i++){
		cin >> cost[i];
		dp[i] = cost[i];
	}
	cin >> mile;
	// dp[i] from 0 to i min cost 
	for(int i = 1; i <= mile; i++){
		for(int j = 1; j <= 10; j++){
			dp[i] = min(dp[i], dp[i - j] + cost[j]);
		}
		for(int i = 1; i <= mile; i++){
			cout << dp[i] << " ";
		}
		cout << endl;
	}
	cout << dp[mile];
	
	return 0;
}
