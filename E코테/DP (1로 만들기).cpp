#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;	
	cin >> n;
	
	int *dp = new int[n+1];
	dp[0]=dp[1]=0;
	dp[2]=dp[3]=dp[5]=1;
	dp[4]=dp[2]+1;
	for(int i =6;i<=n;i++) {
		dp[i] = dp[i-1]+1;
		if(i%2==0)
			dp[i] = min(dp[i],dp[i/2]+1);
		if(i%3==0)
			dp[i] = min(dp[i],dp[i/3]+1);
		if(i%5==0)
			dp[i] = min(dp[i], dp[i/5]+1);
	}
	for(int i = 1; i<=n; i++){
		cout << "[" << dp[i] << "]";
		if(i%10==0) cout <<"\n";
	}
	cout << dp[n];
	delete[] dp;
	return 0;
}
