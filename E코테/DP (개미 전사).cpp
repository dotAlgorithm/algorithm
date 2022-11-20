#include <bits/stdc++.h>

using namespace std;

int dp[101], n;
vector<int> v;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> n;
	for (int i = 0; i<n;i++) {
		int k;
		cin >> k;
		v.push_back(k);	
	}
	dp[0] = v[0];
	dp[1] = max(v[0], v[1]);
	for(int i = 2; i<n; i++){
		dp[i] = max(dp[i-1], dp[i-2]+v[i]);
	}
	cout << dp[n-1];
	return 0;
}
