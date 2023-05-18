#include <bits/stdc++.h>

using namespace std;

int n;
int arr[10001];
int dp[10001];

void input() {
   cin >> n;
   for(int i = 1; i<=n; i++) {
    	cin >> arr[i];
   }
}

void solve() {
	dp[1] = arr[1];
	dp[2] = arr[1] + arr[2];
	int m = max(dp[1],dp[2]);
	for(int i = 3; i<=n; i++){
		dp[i] = max(dp[i-3]+arr[i-1], dp[i-2]) + arr[i]; 
		dp[i] = max(dp[i-1], dp[i]);
		m = max(m, dp[i]);
	}
	cout << m;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(NULL);
   
   input();
   solve(); 
   
   return 0;
}
