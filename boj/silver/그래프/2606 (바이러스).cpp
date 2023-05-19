#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> arr[101];
bool visited[101];

void input() {
	cin >> n >> m;
	for(int i = 0; i<m; i++) {
		int a, b;
		cin >> a >> b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
}

void solve() {
	queue<int> q;
	q.push(1);
	visited[1] = true;
	int cnt = 0;
	
	while(!q.empty()) {
		cnt++;
		int v = q.front(); q.pop();
		for(int i = 0; i<arr[v].size(); i++) {
			int x = arr[v][i];
			if(visited[x]) continue;
			visited[x] = true;
			q.push(x);
		}
	}
	cout << cnt-1;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
