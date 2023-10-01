// acmicpc 1261
// authored by jihwankim
// code.plus
// 23-09-13 PM 05:12
#include <bits/stdc++.h>

using namespace std;

int n, m;
char arr[105][105];
bool visited[105][105];
int cnt[105][105]; 

void input() {
	cin >> m >> n;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			cin >> arr[i][j];
			cnt[i][j] = INT_MAX;
		}
	}
}

struct elem {
	int x;
	int y;
};

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

void solve() {
	queue<elem> q;
	q.push({1, 1});
	visited[1][1] = true;
	cnt[1][1] = 0;
	
	while(!q.empty()) {
		int x = q.front().x;
		int y = q.front().y;  q.pop();
		
		for(int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			
			if(nx <= 0 || nx > n) continue;
			if(ny <= 0 || ny > m) continue;	
            cnt[x][y] = min(cnt[nx][ny], cnt[x][y]);
			if(visited[nx][ny]) continue;	
			
			visited[nx][ny] = true;
			q.push({nx, ny});
		}
		if(arr[x][y] == '1') cnt[x][y]++;
		for(int i = 1; i<=n; i++) {
			for(int j = 1; j<= n; j++) {
				cout << cnt[i][j] << ' ';
			}
			cout << '\n';
		} 
	}
	
	cout << cnt[n][m];
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
// PM 05:42
