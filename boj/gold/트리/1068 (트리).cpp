#include <bits/stdc++.h>

using namespace std;

int n, root;
vector<int> tree[51];
bool visited[51];

void input() {
	cin >> n; 
	int v; 
	for(int i = 0; i<n; i++) {
		cin >> v;
		if(v == -1) root = i;
		else tree[v].push_back(i);
	}
	cin >> v;
	visited[v] = true;
}

void solve() {
	if(visited[root]) {
		cout << 0;
		return;
	} 
	queue<int> q;
	q.push(root);
	visited[root] = true;
	int cnt = 0;
	
	while(!q.empty()) {
		int v = q.front(); q.pop();
		int size = q.size();
		
		for(int i = 0; i<tree[v].size(); i++) {
			int x = tree[v][i];
			if(visited[x]) continue;
			visited[x] = true;
			q.push(x);
		}	
		if(size == q.size()) cnt++;
	}
	
	cout << cnt;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();	
	
	return 0;
}
