#include <bits/stdc++.h>

using namespace std;

int arr[1001];
int dp[1001];

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	int n;
	cin >>n; 
	for(int i = 1; i<=n; i++) cin >> arr[i]; 
	
	for(int i = 1; i<=n; i++){
		dp[i] = 99999999;
		for(int j = i; j>=0; j--) {
			dp[i] = min(dp[i],dp[i-j]+arr[j]);
		}
	}
	cout << dp[n];
	return 0;
}
