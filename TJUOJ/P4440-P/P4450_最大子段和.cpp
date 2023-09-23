#include <bits/stdc++.h>
using namespace std;

int a[100005];
long long dp[100005];

int main() {
	int N;
	cin >> N;
	while(N--) {
		int n;
		cin >> n;
		for(int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		dp[1] = a[1];
		for(int i = 2; i <= n; i++) {
			dp[i] = max((long long)a[i], dp[i - 1] + a[i]);
		}
		long long res = dp[1];
		for(int i = 1; i <= n; i++) {
			res = max(res, dp[i]);
		}
		if(res <0) {
			cout << 0 << endl;
		} else {
			cout << res << endl;
		}

	}
	return 0;
}

