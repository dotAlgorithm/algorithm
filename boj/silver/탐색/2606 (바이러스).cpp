#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> graph[101];
bool b_visited[101];

int bfs(int x){
	int cnt = -1;
	queue<int> q;
	b_visited[x] = true;
	q.push(x);
	while(!q.empty()){
		int w = q.front();
		q.pop();
		cnt++;
		for(int i=0; i<graph[w].size(); i++){
			if(b_visited[graph[w][i]]) continue;
			b_visited[graph[w][i]] = true;
			q.push(graph[w][i]);
		}
	}
	return cnt;
}

int main() {
	cin >> n >> m;
	for(int i=0;i<m;i++){
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}	
	cout << bfs(1);
	return 0;
}
