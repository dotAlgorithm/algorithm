#include <bits/stdc++.h>

using namespace std;

int n, root, query;
vector<int> tree[100001];
int nodes[100001];
bool visited[100001];
vector<int> qr;

void input() {
	cin >> n>> root >> query;
	for(int i = 1; i<n; i++) {
		int u, v;
		cin >> u >> v;
		tree[u].push_back(v);
		tree[v].push_back(u);
	}
	for(int i = 0; i<query; i++) {
		int x;
		cin >> x;
		qr.push_back(x);
	}
}

int dfs(int x) {
	int cnt = 1;
	for(int i = 0; i<tree[x].size(); i++) {
		int node = tree[x][i];
		if(visited[node]) continue;
		visited[node] = true;
		cnt+=dfs(node);
	}
	nodes[x] = cnt;
	return cnt;
}

void solve() {
	visited[root] = true;
	nodes[root] = dfs(root);
	
	for(int i = 0; i<qr.size(); i++) {
		cout << nodes[qr[i]] << "\n";
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
