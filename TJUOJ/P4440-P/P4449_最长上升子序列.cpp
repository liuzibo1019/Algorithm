#include<bits/stdc++.h>
using namespace std;

vector<int> a(1005);
vector<int> dp(1005, 1);

int main() {
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	// dp[i] to i max len
	// dp[i] = dp
	for(int i = 2; i <= n; i++){
		for(int j = 1; j < i; j++){
			if(a[i] > a[j]){
				dp[i] = max(dp[j] + 1, dp[i]);
			}
		}
	}
	int ans = dp[1];
	for(int i = 1; i <= n; i++){
		ans = max(ans, dp[i]);
	}
	cout << ans;
	return 0;
}
