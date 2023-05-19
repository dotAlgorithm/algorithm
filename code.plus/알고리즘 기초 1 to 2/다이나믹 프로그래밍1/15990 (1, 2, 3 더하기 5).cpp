#include <bits/stdc++.h>

using namespace std;

int dp[100001][4];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		for(int i = 1; i<=n; i++) {
			if(i>=1){
				dp[i][1] = (dp[i-1][2] + dp[i-1][3])%1000000009;
				if(i==1) dp[i][1] = 1;	
			} 
			if(i>=2){
				dp[i][2] = (dp[i-2][1] + dp[i-2][3])%1000000009;
				if(i==2) dp[i][2] = 1;	
			} 
			if(i>=3){
				dp[i][3] = (dp[i-3][2] + dp[i-3][1])%1000000009;
				if(i==3) dp[i][3] = 1;
			} 
			if(i==n) {
				dp[i][0] = (dp[i][1] + dp[i][2])%1000000009;
				cout << (dp[i][0] + dp[i][3])%1000000009 << "\n";
			}
				
		}
	} 
	
	return 0;
}
