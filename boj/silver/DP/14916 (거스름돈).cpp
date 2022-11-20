#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n, i;
	cin >> n;
	
	int *dp = new int[n+1];
	
	dp[0] = dp[1] = dp[3] = -1;
	dp[2] = dp[5] = 1;
	dp[4] = 2;
	
	for(i=6; i<=n; i++){
		if(i%5==0) dp[i] = i/5;
		else dp[i] = dp[i-2]+dp[2];
	}
	
	cout << dp[n];
	delete[] dp;
	return 0;
}
