#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> tree[501];
bool visited[501];

bool input() {
	for(int i = 1; i<=n; i++) {
		tree[i].clear();
		visited[i] = false;
	}
	cin >> n >> m;
	for(int i = 0; i<m; i++) {
		int a, b;
		cin >> a >> b;
		tree[a].push_back(b);
		tree[b].push_back(a);
	}
	return (n+m) > 0;
}

bool dfs(int x, int parent) {
	//cout << x << " - ";
	for(int i = 0; i<tree[x].size(); i++) {
		if(parent == tree[x][i]) continue;
	//	cout << tree[x][i] << ", ";
		if(visited[tree[x][i]]) return false;
		visited[tree[x][i]] = true;
		if(!dfs(tree[x][i], x)) return false;
	}
	return true;
}

void solve() {
	int tc = 0;
	while(input() && ++tc) {
		int cnt = 0;
		for(int i = 1; i<=n; i++) {
			visited[i] = true;
			if(dfs(i, 0)) cnt++;
			//cout << "\n";
		}
		cout << "Case " << tc << ": ";
		if(cnt == 0) cout << "No trees.\n";
		if(cnt == 1) cout << "There is one tree.\n";
		if(cnt > 1) cout << "A forest of " << cnt << " trees.\n";
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	//freopen("../../../Input.txt", "rt", stdin);
	
	solve();
	
	return 0;
}
