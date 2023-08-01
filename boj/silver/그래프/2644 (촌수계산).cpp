#include <bits/stdc++.h>

using namespace std;

int n, m;
int me, r1;
vector<int> rel[101];
int visited[101];

void input() {
	cin >> n;
	cin >> me >> r1;
	cin >> m;
	for(int i =0 ;i<m; i++) {
		int x, y;
		cin >> x >> y;
		rel[x].push_back(y);
		rel[y].push_back(x);
	}
}

void solve() {
	queue<int> q;
	q.push(me);
	visited[me] = 1;
	
	while(!q.empty()) {
		int v = q.front(); q.pop();
		for(int i = 0; i<rel[v].size(); i++) {
			int x = rel[v][i];
			if(visited[x]<=0) {
				q.push(x);
				visited[x] = visited[v]+1;
			}
		}
	}
	cout << visited[r1]-1;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve(); 
	
	return 0;
}
