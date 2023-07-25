#include <bits/stdc++.h>

using namespace std;

int n;
int maxNum = 0;
int arr[1001];
int dp[1001];

void solve() {
	cin >> n;
	for(int i = 0; i<n; i++){
		cin >> arr[i];
		dp[i] = arr[i];
		int j=i;
		while(j--){
			if(arr[i] > arr[j]){
				dp[i] = max(dp[i], arr[i]+dp[j]);
			}
		}
		maxNum = max(maxNum, dp[i]); 
	}
	cout <<maxNum;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	solve();
	return 0;
}
