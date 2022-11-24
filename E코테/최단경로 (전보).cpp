#include <bits/stdc++.h>
#define INF 1e9

using namespace std;

int n, m, c;
vector<pair<int, int> > graph[30001];

int d[30001];

void dijkstra(int s){
	priority_queue<pair<int, int> > pq;
	pq.push({0, s});
	d[s] = 0;
	while(!pq.empty()) {
		int dist = -pq.top().first;
		int now = pq.top().second;
		pq.pop();
		if(d[now] < dist) continue;
		for(int i =0;i<graph[now].size(); i++){
			int cost = dist + graph[now][i].second;
			if(cost < d[graph[now][i].first]) {
				d[graph[now][i].first] = cost;
				pq.push(make_pair(-cost, graph[now][i].first));
			}
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m >> c;
    
	for(int i = 0; i<m; i++){
		int x, y, z;
		cin >> x >> y >> z;
		graph[x].push_back({y, z});
	}
    fill_n(d, 30001, INF);
    dijkstra(c);
    int count = 0;
    int maxDis = 0;
    for(int i = 1; i<=n;i++){
    	if(d[i]!=INF){
    		count += 1;
    		maxDis = max(maxDis, d[i]);
		}
	}
	cout << count -1 << " " << maxDis << "\n";
	return 0;
}
