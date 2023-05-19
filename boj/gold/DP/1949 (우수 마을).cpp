#include <bits/stdc++.h>

using namespace std;

int n;
int p[10001][2];
vector<int> tree[10001];

void input() {
	cin >> n;
	for(int i = 1; i<=n; i++) {
		cin >> p[i][0];
	}
	for(int i = 1; i<n; i++) {
		int a, b;
		cin >> a >> b;
		tree[a].push_back(b);
		tree[b].push_back(a);
	}
}

void dfs(int x, int parent) {
	for(int i = 0; i<tree[x].size(); i++) {
		int v = tree[x][i];
		if(v==parent) continue;
		dfs(v, x);
		p[x][0] += p[v][1];
		p[x][1] += max(p[v][0],p[v][1]);
	}
	//cout << x << "ÀÏ ¶§, " << p[x][0] << ", " << p[x][1] << "\n"; 
}

void solve() {
	dfs(1, 0);
	cout << max(p[1][0], p[1][1]);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
