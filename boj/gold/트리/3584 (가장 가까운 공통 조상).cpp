#include <bits/stdc++.h>

using namespace std;

int t, n, c1, c2;
int parent[10001];
bool visited[10001];

void input() {
	cin >> n;
	for(int i=0; i<=n; i++) {
		parent[i] = 0;
		visited[i] = false;
	}
	for(int i=1; i<n; i++) {
		int a, b;
		cin >> a >> b;
		parent[b] = a;
	}
	cin >> c1 >> c2;
}

int find_Parent(int x, int y) {
	if(visited[x] && x!=0) return x;
	if(visited[y] && y!=0) return y;
	if(x==y) {
		if(x==0) return y;
		return x;
	}
	visited[x]=true;
	visited[y]=true;
	int ancestor = find_Parent(parent[x], parent[y]);
	return ancestor;
}

void solve() {
	cin >> t;
	while(t--) {
		input();
		cout << find_Parent(c1, c2) << "\n";
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	solve();
	
	return 0;
}
