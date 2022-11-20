#include <bits/stdc++.h>

using namespace std;


int n, m, t;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> t;
	for(int i =0;i<t;i++){
		cin >> n >> m;
		vector<int> gold[n];
		vector<vector<int> > dp(n, vector<int>(4));
		for(int j = 0; j < n; j++){
			for(int k = 0; k< m; k++){
				int x;
				cin >> x;
				gold[j].push_back(x);
			}
		}
		for(int k = 0; k< m; k++){
			for(int j = 0; j < n; j++){
				dp[j][k] = gold[j][k];
				if(k-1>=0) dp[j][k] = dp[j][k-1]+gold[j][k];
				if(j-1>=0&&k-1>=0)
					dp[j][k] = max(dp[j][k], dp[j-1][k-1]+gold[j][k]);
				if(j+1<n&&k-1>=0)
					dp[j][k] = max(dp[j][k], dp[j+1][k-1]+gold[j][k]);
				
			}
		}
		
		for(int i = 0; i<n; i++){
			for(int j = 0; j < m; j++){
				cout << dp[i][j] << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
