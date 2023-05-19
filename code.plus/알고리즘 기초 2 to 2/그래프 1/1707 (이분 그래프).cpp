#include <bits/stdc++.h>

using namespace std;

int t;

vector<vector<int> > input() {
	int v, e;
	cin >> v >> e;
	vector<vector<int> > graph(v+1);
	for(int i = 0; i<e; i++) {
		int u, w;
		cin >> u >> w;
		graph[u].push_back(w);
		graph[w].push_back(u);
	}
	
	return graph;
}

int* preset(int n) {
	int* visited = new int[n];
	for(int i = 0; i<n; i++){
		visited[i] = 0;
	}
	return visited;
}

bool bfs(vector<vector<int> > graph, int* visited, int n) {
	queue<int> q;
	int size = graph.size();
	visited[n] = 1;
	q.push(n);
	
	while(!q.empty()) {
		int v = q.front(); q.pop();
		for(int i = 0; i<graph[v].size(); i++) {
			int w = graph[v][i];
			if(!visited[w]) {
				visited[w] = visited[v]==1? 2 : 1;
				q.push(w);
			}
			else if(visited[w] == visited[v]) {
				return false;
			}
		}
	}
	return true;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	cin >> t;
	while(t--) {
		vector<vector<int> > graph = input();
		int* visited = preset(graph.size());
		bool check = true;
		
		for(int i = 1; i<graph.size(); i++) {
			if(!visited[i]) check = bfs(graph,visited,i);
			if(!check) break;
		}
		
		delete[] visited;
		
		if(check == 1) {
			cout << "YES\n";
		}
		else {
			cout << "NO\n";
		}
	}
	return 0;
}
