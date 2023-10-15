// acmicpc 14442
// authored by jihwankim
// code.plus
// 23-10-14 AM 02:47
#include <bits/stdc++.h>

using namespace std;

int n, m, k;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1, 0, 1};
vector<string> arr;
int dist[1005][1005][15];

struct cur {
	int x, y, cnt;
};

void input() {
	cin >> n >> m >> k;
	for(int i = 0; i < n; i++) {
		string s;
		cin >> s;
		arr.push_back(s);
	}
}

bool valid(int &x, int &y) {
	if(x < 0 || x >= n) return false;
	if(y < 0 || y >= m) return false;
	return true;
} 

int solve() {
	// init 
	queue<cur> q;
	q.push({0, 0, 0});
	dist[0][0][0] = 1;
	
	while(!q.empty()) {
		cur now = q.front();
		q.pop();
		if(now.cnt > k) continue;
		
		for(int i = 0; i < 4; i++) {
			int nx = now.x + dx[i];
			int ny = now.y + dy[i];
			if(!valid(nx, ny)) continue;
			// 벽이 있을 경우 
			if(arr[nx][ny] == '1') {
				if(dist[nx][ny][now.cnt+1]) continue;
				dist[nx][ny][now.cnt+1] = dist[now.x][now.y][now.cnt] + 1;
				q.push({nx, ny, now.cnt+1});
			}
			else {
				if(dist[nx][ny][now.cnt]) continue;
				dist[nx][ny][now.cnt] = dist[now.x][now.y][now.cnt] + 1;
				q.push({nx, ny, now.cnt});
			}
		}	
	}
	/*
	for(int z = 0; z <= k; z++) {
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++) {
				cout << dist[i][j][z] << ' ';
			}
			cout << '\n';
		}
		
	}*/
	
	int min_dist = INT_MAX;
	for(int i = 0; i <= k; i++) {
		if(dist[n-1][m-1][i] == 0) continue;
		min_dist = min(min_dist, dist[n-1][m-1][i]);
	}
	
	if(min_dist == INT_MAX) return -1;
	return min_dist;
	
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	cout << solve();
	
	return 0;
}
// AM 03:30
