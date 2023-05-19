#include <bits/stdc++.h>

using namespace std;

vector<int> graph[2001];
int visited[2001];
int n, m;

void input() {
	cin >> n >> m;
	for(int i = 0; i<m; i++){
		int a, b;
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
}

int solve(int k, int cnt){
	if(cnt == 5) return 1;
	for(int i = 0; i<graph[k].size(); i++) {
		if(!visited[graph[k][i]]) {
			visited[graph[k][i]] = 1;
			if(solve(graph[k][i], cnt+1)==1) return 1;
			visited[graph[k][i]] = 0;
		}
	}	
	return 0;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	
	for(int i = 0; i<n; i++) {
		visited[i] = 1;
		if(solve(i, 1) == 1){
			cout << "1";
			return 0;
		}	
		visited[i] = 0;
	}
	cout << "0";
	return 0;
}
