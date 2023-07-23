#include <bits/stdc++.h>

using namespace std;

int n, m, start;
vector<pair<int, int> > arr[20001];
int dist[20001];

void input() {
	cin >> n >> m >> start;
	for(int i = 0; i<m; i++) {
		int u, v, w;
		cin >> u >> v >> w;
		arr[u].push_back({v, w});
	}
	fill_n(dist, 20001, INT_MAX);
}

class cmp{
	public:
		bool operator()(pair<int, int> p1, pair<int, int> p2) {
			return p1.second > p2.second;
		}
};

void dijkstra() {
	priority_queue<pair<int, int>, 
	vector<pair<int, int> >, cmp> pq;
	
	pq.push({start, 0});
	dist[start] = 0;
	
	while(!pq.empty()) {
		pair<int, int> v = pq.top(); pq.pop();
		if(v.second > dist[v.first]) continue;
		
		for(int i = 0; i<arr[v.first].size(); i++) {
			pair<int, int> u = arr[v.first][i];
			if(v.second + u.second >= dist[u.first]) continue;
			dist[u.first] = v.second + u.second;
			pq.push({u.first, dist[u.first]});
		}
	}
}

void solve() {
	dijkstra();
	for(int i = 1; i<=n; i++) {
		if(dist[i] == INT_MAX) cout << "INF\n";
		else cout << dist[i] << "\n";
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
