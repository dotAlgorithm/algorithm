#include <bits/stdc++.h>

using namespace std;

int n;
int stair[301];
int dp[301];

void input() {
	cin >> n;
	for(int i=1; i<=n; i++) cin >> stair[i];
}

void solve() {
	for(int i = 1; i<=n; i++) {
		if(i<=2) dp[i] = dp[i-1]+stair[i];
		else{
			dp[i] = max(dp[i-2],dp[i-3]+stair[i-1]) + stair[i];
		}
	}
	cout << dp[n];
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
