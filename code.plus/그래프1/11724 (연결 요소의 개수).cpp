#include <bits/stdc++.h>

using namespace std;

int graph[1001][1001];
int n, m;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	int cnt = 0;
	
	cin >> n >> m;
	
	for(int i = 0; i<m; i++) {
		int u, v;
		cin >> u >> v;
		if(graph[v][u]) cnt++;
		graph[u][v] = 1;
	}
	cout << cnt;

	return 0;
}
