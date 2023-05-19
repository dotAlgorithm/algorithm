#include <bits/stdc++.h>

using namespace std;

int n;
int dp[100001][2];
int arr[100001];

void input() {
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> arr[i];
		dp[i][0] = dp[i][1] = arr[i]; 
	}
}
void solve() {
	int maxNum = arr[0];
	int swapNum = 0;
	for(int i=1; i<n; i++) {
		dp[i][0] = max(arr[i], dp[i-1][0] + arr[i]);
		dp[i][1] = max(dp[i-1][0], dp[i-1][1] + arr[i]);
		maxNum = max(maxNum, max(dp[i][0], dp[i][1]));
	}/*
	for(int i = 0; i<2; i++) {
		for(int j = 0; j<n; j++) {
			cout << "[" << dp[j][i] << "]";
		}
		cout <<"\n";
	}*/
	cout << maxNum;
} 

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
