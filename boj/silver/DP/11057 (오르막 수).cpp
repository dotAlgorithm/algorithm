#include <bits/stdc++.h>

using namespace std;

int n;
int dp[1001][10];
int sum[1001];

void solve() {
	cin >> n;
	int sum;
	for(int i = 1; i<=n; i++) {
		for(int j = 0; j<=9; j++) {
			if(i==1) dp[i][j] = 1;
			else {
				for(int k = j; k<=9; k++) {
					dp[i][j] += dp[i-1][k];
					dp[i][j] %= 10007;
				}
			}
		}
	}
	sum = 0;
	for(int i = 0; i<10; i++) {
		sum += dp[n][i];
		sum %= 10007;
	}
	cout << sum;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	solve();
	 
	return 0;
}
