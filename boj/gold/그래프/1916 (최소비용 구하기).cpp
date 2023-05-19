#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<pair<int, int> > arr[1001];
int dist[1001];
bool visited[1001];
int s, e;

void input() {
	cin >> n >> m;
	for(int i = 0; i<m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		arr[a].push_back({b, c});
	}
	
	cin >> s >> e;
	
	for(int i = 1; i<=n; i++) dist[i] = INT_MAX;
}

class cmp {
	public:
		bool operator()(pair<int, int> p1, pair<int, int> p2) {
			return p1.second > p2.second;
		}
};

void dijkstra() {
	priority_queue<pair<int, int>, vector<pair<int, int> >, cmp> pq;
	pq.push({s, 0}); 
	dist[s] = 0;
	
	while(!pq.empty()) {
		int v = pq.top().first;
		int d = pq.top().second; pq.pop();
		if(dist[v] < d) continue;
		for(int i = 0; i<arr[v].size(); i++) {
			pair<int, int> w = arr[v][i];
			if(dist[v] + w.second >= dist[w.first]) continue;
			dist[w.first] = dist[v] + w.second;
			pq.push({w.first, dist[w.first]});
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	dijkstra();
	
	cout << dist[e] << "\n";
	
	return 0;
}
