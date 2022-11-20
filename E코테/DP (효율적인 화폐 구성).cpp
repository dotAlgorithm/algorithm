#include <bits/stdc++.h>

using namespace std;


int n, m, t;
vector<int> coin;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin >> t;
	
	for(int i = 0; i<n; i++) {
		int money;
		cin >> money;
		coin.push_back(money);
	}
	vector<int> d(m+1, 10001);
	d[0] = 0;
	
	for(int i =0; i<n;i++){
		for(int j = coin[i]; j<=m; j++){
			if(d[j-coin[i]] != 10001){
				d[j] = min(d[j], d[j-coin[i]]+1);
			}
		}
	}
	if(d[m]==10001) cout << -1;
	else cout << d[m];
	return 0;
}
