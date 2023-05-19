#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> arr[32001];
int indeg[32001];

void input() {
	cin >> n >> m;
	for(int i =0 ; i<m; i++) {
		int a,  b;
		cin >> a >> b;
		arr[a].push_back(b);
		indeg[b]++;
	}
}

void solve() {
	queue<int> q;
	for(int i = 1; i<=n; i++) {
		if(indeg[i] == 0) q.push(i);
	}
	while(!q.empty()) {
		int v = q.front(); q.pop();
		cout << v << " ";
		for(int i = 0; i<arr[v].size(); i++) {
			if(--indeg[arr[v][i]] == 0) q.push(arr[v][i]);
		}
	}
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
