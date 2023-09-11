// acmicpc 16947
// authored by jihwankim
// code.plus
// 23-09-11 PM 07:04
#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> arr[3005];
bool visited[3005];
bool cycle[3005];
int dist[3005];

void input() {
	cin >> n;
	for(int i = 0; i <n; i++) {
		int a, b;
		cin >> a >> b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
}

int find_cycle(int a, int prev) {
	if(visited[a]) return a;
	
	visited[a] = true;	
	for(int &x : arr[a]) {
		if(x == prev) continue;
		int status = find_cycle(x, a);
		if(status != -1) {
			cycle[a] = true;
			if(status == a) return -1;
			return status;
		}
	}
	return -1;
}

void solve() {
	queue<pair<int, int>> q;
	find_cycle(1, 0);
	for(int i = 1; i <= n; i++) {
		visited[i] = false;
		if(cycle[i]) {
			visited[i] = true;
			q.push({i, 0});	
		}
	}
	
	while(!q.empty()) {
		int x = q.front().first;
		int dis = q.front().second; q.pop();
		dist[x] = dis;
		
		for(int &i : arr[x]) {
			if(!visited[i]) {
				visited[i] = true;
				q.push({i, dis+1});
			}
		}
	}
	
	for(int i = 1; i<=n; i++) {
		cout << dist[i] << " ";
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve(); 
	
	return 0;
}

// PM 07:33
