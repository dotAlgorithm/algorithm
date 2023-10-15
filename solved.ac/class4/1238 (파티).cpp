// acmicpc 1238
// authored by jihwankim
// solved.ac Class 4
// 23-10-13 PM 02:07
#include <bits/stdc++.h>

using namespace std;

int n, m, x;
vector<pair<int, int>> arr[1005];

void input() {
	cin >> n >> m >> x;
	for(int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		arr[a].push_back({b, c});
	}
}

int dijkstra(vector<int> distance, int start, vector<int> &long_path) {
	priority_queue<pair<int, int>> pq;
	pq.push({start, 0});
	distance[start] = 0;
	
	while(!pq.empty()) {
		int v = pq.top().first;
		int dis = -pq.top().second;
		pq.pop();
		
		if(distance[v] < dis) continue;
		for(auto& val : arr[v]) {
			int u = val.first;
			int w = val.second;
			int nextDistance = dis + w;
			
			if(nextDistance >= distance[u]) continue;
			distance[u] = nextDistance;
			pq.push({u, -nextDistance}); 
		}
	}
	
	if(start == x) {
		int dis = 0;
		for(int i = 1; i <= n; i++) {
			dis = max(dis, distance[i] + long_path[i]);
		}
		return dis;
	}
	
	return distance[x];
}

void solve() {
	// n - > x
	// x - > n
	vector<int> dis(n+1, INT_MAX);
	vector<int> long_path(n+1);
	for(int i = 1; i <= n; i++) {
		if(i == x) continue;
		long_path[i] = dijkstra(dis, i, long_path);
	}
	
	cout << dijkstra(dis, x, long_path);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}

// PM 02:39
