#include <bits/stdc++.h>

using namespace std;

int n;
int graph[25][25];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0 ,-1, 1};

void input(){
	cin >> n;
	for(int i = 0; i<n; i++) {
		string s;
		cin >> s;
		for(int j = 0; j<n; j++) {
			graph[i][j] = s[j]-'0';
		}
	}
}

int bfs(int i, int j) {
	queue<pair<int, int> > q;
	q.push({i, j});
	graph[i][j] = 0;
	int cnt = 0;
	
	while(!q.empty()) {
		cnt++;
		int x = q.front().first;
		int y = q.front().second; q.pop();
		for(int i = 0; i<4; i++) {
			int nx = x+dx[i];
			int ny = y+dy[i];
			if(nx < 0 || nx >= n) continue;
			if(ny < 0 || ny >= n) continue;
			if(graph[nx][ny] == 1) {
				q.push({nx, ny});
				graph[nx][ny] = 0;
			}
		}	
	}	
	return cnt;
}

void solve() {
	int cnt = 0;
	vector<int> houses;
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<n; j++) {
			if(graph[i][j] == 1) {
				houses.push_back(bfs(i, j));
				cnt++;
			}
		}
	}
	sort(houses.begin(), houses.end());
	cout << cnt << "\n";
	for(int i = 0; i<houses.size(); i++) {
		cout << houses[i] << "\n";
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
