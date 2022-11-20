#include <bits/stdc++.h>

using namespace std;

int fibo(int x) {
	if(x == 1 || x == 2) return 1;
	return fibo(x-1) + fibo(x-2);
}

int dp[101];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	dp[1]=dp[2]=1;
	for(int i=3;i<101;i++)
		dp[i] = dp[i-2] + dp[i-1];
	
	cout << "DP : " << dp[10] <<"\n";
	cout << "recur : " << fibo(10) << "\n";
	
	return 0;
}
