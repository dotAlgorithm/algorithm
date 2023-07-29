#include <bits/stdc++.h>

using namespace std;

int n;
int graph[101][101];
bool visited[101][101];

void input() {
	cin >> n;
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<n; j++) {
			cin >> graph[i][j];
		}
	}
}

void bfs(int x) {
	queue<int> q;
	q.push(x);
	while(!q.empty()) {
		int v = q.front(); q.pop();
		for(int i = 0; i<n; i++) {
			if(graph[v][i] == 1 && !visited[x][i]) {
				q.push(i);
				visited[x][i] = true;
			}
		}
	}
}

void solve() {
	for(int i = 0; i<n; i++) {
		bfs(i);
	}
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<n; j++) {
			cout << visited[i][j] << " ";
		}
		cout << "\n";
	}
}


int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
} 
