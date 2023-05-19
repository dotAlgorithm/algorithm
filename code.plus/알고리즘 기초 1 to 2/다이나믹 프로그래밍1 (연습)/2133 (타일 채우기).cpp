#include <bits/stdc++.h>

using namespace std;

int dp[31];

void solve(int n) {
	dp[0] = 1;
	for(int i = 2; i<=n; i+=2) {
		dp[i] = dp[i-2] * 3;
		for(int j = i; j>=4; j-=2) {
			dp[i] += dp[i-j]*2;
		}
	}
	cout << dp[n];
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	solve(n);
	return 0;
} 
