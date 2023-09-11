// acmicpc 1260
// authored by jihwankim
// code.plus
// 23-09-07 PM 05:39
#include <bits/stdc++.h>

using namespace std;

vector<int> arr[1005];
bool visited[1005];
int n, m, v;

void input() {
	cin >> n >> m >> v;	
	for(int i = 0; i<m; i++) {
		int a, b;
		cin >> a >> b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
	for(int i = 1; i<=n; i++) {
		sort(arr[i].begin(), arr[i].end());
	}
}

void dfs(int a) {
	cout << a << " ";
	for(int i = 0; i<arr[a].size(); i++) {
		if(!visited[arr[a][i]]) {
			visited[arr[a][i]] = true;
			dfs(arr[a][i]);
		}
	}	
}

void bfs() {
	queue<int> q;
	q.push(v);
	visited[v] = true; 
	
	while(!q.empty()) {
		int a = q.front();
		q.pop();
		cout << a << " ";
		
		for(int i = 0; i<arr[a].size(); i++) {
			if(!visited[arr[a][i]]) {
				visited[arr[a][i]] = true;
				q.push(arr[a][i]);
			}
		}
	}
}

void solve() {
	visited[v] = true;
	dfs(v);
	for(int i = 1; i<=n; i++) visited[i] = false;
	cout << "\n";
	bfs();
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
// 05:47
