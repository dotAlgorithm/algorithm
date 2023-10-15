// acmicpc 2206
// authored by jihwankim
// code.plus
// 23-10-04 PM 04:11
#include <bits/stdc++.h>

using namespace std;

char arr[1005][1005];
int dist[1005][1005][2];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
int n, m;

struct datas{
	int x;
	int y;
	bool chk;
};

void input() {
	cin >> n >> m;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> arr[i][j];
			dist[i][j][0] = 0;
			dist[i][j][1] = 0;
		}
	}
}

int solve() {
	queue<datas> q;
	q.push({0, 0, false});
	dist[0][0][0] = 1;
	
	while(!q.empty()) {
		int x = q.front().x;
		int y = q.front().y;
		bool chk = q.front().chk;
		q.pop();
		
		if(x == n-1 && y == m-1) {
			return dist[x][y][chk];
		}
		
		for(int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if(nx < 0 || nx >= n) continue;
			if(ny < 0 || ny >= m) continue;
			if(dist[nx][ny][chk] > 0) continue;
			if(arr[nx][ny] == '0') {
				dist[nx][ny][chk] = dist[x][y][chk] + 1;
				q.push({nx, ny, chk});
			}
			else {
				if(chk) continue;
				dist[nx][ny][1] = dist[x][y][chk] + 1;
				q.push({nx, ny, true});
			}
		}
	}
	return -1;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	/*
	freopen("input.txt", "r", stdin);
	int cnt = 18;
	while(cnt--) {
		input();
		cout << solve() << '\n';	
	}
	*/ 
	input();
	cout << solve();
	
	return 0;
}
// PM 05:17
