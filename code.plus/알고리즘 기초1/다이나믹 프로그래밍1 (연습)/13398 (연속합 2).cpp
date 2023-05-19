#include <bits/stdc++.h>

using namespace std;

int n;
int dp[100001][2];
int arr[100001];

void input() {
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> arr[i];
<<<<<<< HEAD
		dp[i][0] = dp[i][1] = arr[i]; 
	}
}
void solve() {
	int maxNum = arr[0];
	int swapNum = 0;
	for(int i=1; i<n; i++) {
		dp[i][0] = max(arr[i], dp[i-1][0] + arr[i]);
		dp[i][1] = max(dp[i-1][0], dp[i-1][1] + arr[i]);
=======
		dp[i][0] = arr[i];
		dp[i][1] = arr[i];
	}
}
void solve() {
	int maxNum = INT_MIN;
	int swapNum = 0;
	for(int i=1; i<n; i++) {
		dp[i][0] = max(arr[i], dp[i-1][0] + arr[i]);
		if(dp[i-1][1]+arr[i] < dp[i-1][1]+swapNum) {
			dp[i][1] = dp[i-1][1]+swapNum;
			swapNum = arr[i];
		}
		else {
			dp[i][1] = max(arr[i], dp[i-1][1] + arr[i]);
		}
>>>>>>> c19c37cc2b4d34341e7cd72e97cc8c7ad787fcf3
		maxNum = max(maxNum, max(dp[i][0], dp[i][1]));
	}/*
	for(int i = 0; i<2; i++) {
		for(int j = 0; j<n; j++) {
			cout << "[" << dp[j][i] << "]";
		}
		cout <<"\n";
	}*/
<<<<<<< HEAD
=======
	maxNum = max(maxNum, max(dp[n-1][0], dp[n-1][1]));
>>>>>>> c19c37cc2b4d34341e7cd72e97cc8c7ad787fcf3
	cout << maxNum;
} 

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
