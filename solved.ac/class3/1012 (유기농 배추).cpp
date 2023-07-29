#include <bits/stdc++.h>

using namespace std;

int t, m, n, k;
//m = j
//n = i

void solve() {
	int arr[50][50] = {};
	for(int i = 0; i<k; i++) {
		int x, y;
		cin >> x >> y;
		arr[y][x] = 1;
	}
	
	queue<pair<int, int> > q;
	int cnt = 0;
	int dx[4] = {1,-1,0,0};
	int dy[4] = {0,0,-1,1};
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<m; j++) {
			if(arr[i][j] == 1) {
				q.push({i, j});
				arr[i][j] = 0;
				cnt++;
				while(!q.empty()) {
					int x = q.front().first;
					int y = q.front().second; q.pop();
					for(int z = 0; z<4; z++) {
						int nx = x+dx[z];
						int ny = y+dy[z];
						if(nx < 0 || nx >= n) continue;
						if(ny < 0 || ny >= m) continue;
						if(arr[nx][ny]==1) {
							arr[nx][ny] = 0;
							q.push({nx, ny});
						}
					}
				}
			}
		}
	}
	cout << cnt << "\n";
}

void input() {
	cin >> t;
	while(t--) {
		cin >> m >> n >> k;
		solve();
	}
}

/*
c = 10
c -> a  // c = 2
c -> b // c = 1
c -> b, c->a, b->c // 9
c -> a, c->b, a->c // 8 
*/

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	
	return 0;
}
