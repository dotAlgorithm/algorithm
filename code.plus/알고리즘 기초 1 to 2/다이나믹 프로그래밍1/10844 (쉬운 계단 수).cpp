#include <bits/stdc++.h>
const int mod = 1000000000;

using namespace std;

int dp[101][10];
int sum;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	int n;
	cin >> n;
	
	for(int i = 1; i<=n; i++){
		for(int j = 0; j<=9; j++) {
			if(i == 1 && j== 0)  continue;
			if(i==1) {
				dp[1][j] = 1;
				continue;
			}
			if(j == 0) dp[i][j] = dp[i-1][j+1];
			else if(j == 9) dp[i][j] = dp[i-1][j-1];
			else dp[i][j] = (dp[i-1][j-1] + dp[i-1][j+1])%mod;
		}
	} 
	for(int i = 0; i<=9; i++) {
		sum = (sum + dp[n][i]) % mod;
	}
	cout << sum;
	
	return 0;
}
