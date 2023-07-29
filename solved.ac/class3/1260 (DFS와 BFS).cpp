#include <bits/stdc++.h>

using namespace std;

int n, m, v;
vector<int> graph[1001];
bool d_visited[1001];
bool b_visited[1001];

void bfs(int x){
	queue<int> q;
	b_visited[x] = true;
	q.push(x);
	while(!q.empty()){
		int w = q.front();
		q.pop();
		cout << w << " ";
		for(int i=0; i<graph[w].size(); i++){
			if(b_visited[graph[w][i]]) continue;
			b_visited[graph[w][i]] = true;
			q.push(graph[w][i]);
		}
	}
}
void dfs(int x){
	if(d_visited[x]) return;
	d_visited[x] = true;
	cout << x << " ";
	for(int i=0; i<graph[x].size();i++){
		dfs(graph[x][i]);
	}
}

int main() {
	cin >> n >> m >> v;
	for(int i=0;i<m;i++){
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}		
	for(int i = 1; i<=n ;i++) sort(graph[i].begin(), graph[i].end());
	dfs(v);
	cout <<"\n";
	bfs(v);
	return 0;
}
