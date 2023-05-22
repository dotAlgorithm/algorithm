#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> kevin[101];
bool visited[101];
int arr[101][101];

void input() {
	cin >> n >> m;
	for(int i = 0 ; i<m; i++) {
		int a, b;
		cin >> a >> b;
		kevin[a].push_back(b);
		kevin[b].push_back(a);
	}
}

int bfs(int x) {
	memset(visited, false, sizeof(bool) * (n+1));
	queue<int> q;
	q.push(x);
	visited[x] = true;
	int cnt = 0;
	
	while(!q.empty()) {
		int v = q.front(); q.pop();
		for(int i = 0; i<kevin[v].size(); i++) {
			int u = kevin[v][i];
			if(visited[u]) continue;
			arr[x][u] = arr[x][v]+1; 
			visited[u] = true;
			q.push(u);
		}
	}
	return cnt;
}

void solve() {
	int minSum = 1e6;
	int idx;
	for(int i = 1; i<=n; i++) {	
		bfs(i);
		int sum = 0;
		for(int j = 1; j<=n; j++) sum += arr[i][j];
		if(minSum > sum) {
			minSum = sum;
			idx = i;
		}
	}
	cout << idx;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
