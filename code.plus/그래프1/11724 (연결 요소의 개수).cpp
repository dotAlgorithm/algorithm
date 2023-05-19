#include <bits/stdc++.h>

using namespace std;

<<<<<<< HEAD
int graph[1001][1001];
int n, m;
=======
int n, m;
bool visited[1001];
vector<int> graph[1001];
queue<int> q;

void bfs(int n){
	q.push(n);
	visited[n] = true;
	while(!q.empty()){
		int v = q.front(); q.pop();
		for(int i = 0; i<graph[v].size(); i++){
			int u = graph[v][i];
			if(!visited[u]){ 
				q.push(u);
				visited[u] = true;	
			}
		}
	}
}

void input() {
	cin >> n >> m;
	for(int i = 0; i<m; i++){
		int u, v;
		cin >> u >> v;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
}

void solve() {
	int cnt = 0;
	for(int i = 1; i<=n; i++) {
		if(!visited[i]) {
			bfs(i);
			cnt++;
		}
	}
	cout << cnt;	
}
>>>>>>> c19c37cc2b4d34341e7cd72e97cc8c7ad787fcf3

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
<<<<<<< HEAD
	int cnt = 0;
	
	cin >> n >> m;
	
	for(int i = 0; i<m; i++) {
		int u, v;
		cin >> u >> v;
		if(graph[v][u]) cnt++;
		graph[u][v] = 1;
	}
	cout << cnt;

=======
	input();
	solve();
>>>>>>> c19c37cc2b4d34341e7cd72e97cc8c7ad787fcf3
	return 0;
}
