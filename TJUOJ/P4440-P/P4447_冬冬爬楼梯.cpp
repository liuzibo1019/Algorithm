#include <bits/stdc++.h>
using namespace std;

vector<string> dp(3005);

string add(string a,string b) {
	const int L=1e4;
	string ans;
	int na[L]= {0},nb[L]= {0};
	int la=a.size(),lb=b.size();
	for(int i=0; i<la; i++) {
		na[la-1-i]=a[i]-'0';
	}
	for(int i=0; i<lb; i++){
		nb[lb-1-i]=b[i]-'0';
	} 
	int lmax=la>lb?la:lb;
	for(int i=0; i<lmax; i++) na[i]+=nb[i],na[i+1]+=na[i]/10,na[i]%=10;
	if(na[lmax]) lmax++;
	for(int i=lmax-1; i>=0; i--) ans+=na[i]+'0';
	return ans;
}

int cur = 0;
int main() {
	int n;
	while(cin >> n) {
		// dp[i]  to i ways
		// dp[i] = dp[i-1] + dp[i-2] + dp[i-3]
		dp[1] = "1";
		dp[2] = "2";
		dp[3] = "4";
		cur = 3;
		for(int i = cur + 1; i <= n; i++) {
			cur++;
			dp[i] = add(add(dp[i-1], dp[i-2]), dp[i-3]);
		}
//		printf("%s", dp[n].);
		cout << dp[n] << endl;
	}
	return 0;
}
