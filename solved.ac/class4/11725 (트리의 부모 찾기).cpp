#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> tree[100001];
int parent[100001];
bool visited[100001];

void input() {
	cin >> n;
	for(int i= 0; i<n-1; i++) {
		int a, b;
		cin >> a >> b;
		tree[a].push_back(b);
		tree[b].push_back(a);
	}
}

void bfs() {
	queue<int> q;
	q.push(1);
	visited[1] = true;
	
	while(!q.empty()) {
		int x = q.front(); q.pop();
		for(int i = 0; i<tree[x].size(); i++) {
			int child = tree[x][i];
			if(visited[child]) continue;
			visited[child] = true;
			parent[child] = x;  
			q.push(child);
		} 
	}
	
	for(int i = 2; i<=n; i++) {
		cout << parent[i] << "\n";
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	bfs();
	
	return 0;
}
