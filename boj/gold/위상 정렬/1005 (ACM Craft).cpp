#include <bits/stdc++.h>

using namespace std;

int t, n, k, w;
int d[1001];
int td[1001];
vector<int> arr[1001];
int indeg[1001];

void input() {
	cin >> n >> k;
	
	for(int i = 1; i<=n; i++) {
		arr[i].clear();
		cin >> d[i];
		td[i] = d[i];	
	}
	
	for(int i = 0; i<k; i++) {
		int a, b;
		cin >> a >> b;
		arr[a].push_back(b);
		indeg[b]++;
	}
	
	cin >> w;
}


void solve() {
	queue<int> q;
	
	for(int i = 1; i<=n; i++) {
		if(indeg[i] == 0) q.push(i);
	}
	
	while(!q.empty()) {
		int v = q.front(); q.pop();
		for(int i = 0; i<arr[v].size(); i++) {
			int x = arr[v][i];
			if(--indeg[x] == 0) q.push(x);
			td[x] = max(td[x], d[x]+td[v]);
		}
	}
	
	cout << td[w] << "\n";
}

void tc() {
	int t;
	cin >> t;
	while(t--) {
		input();
		solve();
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	tc();
	
	return 0;
}
