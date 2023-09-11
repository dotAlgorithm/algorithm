// acmicpc 7576
// authroed by jihwankim
// code.plus
// 23-09-10 AM 04:07
#include <bits/stdc++.h>

using namespace std;

int n, m;
int arr[1005][1005];
queue<pair<int, int>> q;

void input() {
	cin >> m >> n;
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<m; j++) {
			cin >> arr[i][j];
			if(arr[i][j] == 1) {
				q.push({i, j});
			}
		}
	}
}

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

void solve() {
	while(!q.empty()) {
		int x = q.front().first;
		int y = q.front().second; q.pop();
		
		for(int i = 0; i<4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			
			if(nx < 0 || nx >= n) continue;
			if(ny < 0 || ny >= m) continue;
			if(arr[nx][ny] != 0) continue;
			
			arr[nx][ny] = arr[x][y] + 1;
			q.push({nx, ny});
		}		
	}
	
	int cnt = 0;
	
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<m; j++) {
			if(arr[i][j] == 0) {
				cout << -1;
				return ;
			}
			cnt = max(cnt, arr[i][j]);
		}
	}
	cout << cnt-1;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
// AM 04:16
