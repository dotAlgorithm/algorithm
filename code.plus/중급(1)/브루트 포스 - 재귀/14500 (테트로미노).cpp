// acmicpc 14500
// authored by jihwankim
// code.plus
// 23-09-21 AM 01:24
#include <bits/stdc++.h>

using namespace std;

int arr[500][500];
bool chk[500][500];
int dx[] = {0, 1, 0, -1};
int dy[] = {-1, 0, 1, 0};
int tet[4][4][2] = {
	{{0, 0}, {0, 1}, {0, 2}, {1, 1}},
	{{0, 0}, {0, 1}, {0, 2}, {-1, 1}},
	{{0, 0}, {1, 0}, {2, 0}, {1, -1}},
	{{0, 0}, {1, 0}, {2, 0}, {1, 1}}
};
int n, m; 
int ans = 0;

void input() {
	cin >> n >> m;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
}

void rec(int a, int b, int sum, int k) {
	if(k == 4) {
		ans = max(ans, sum);
		return ;
	}
	
	for(int i = 0; i < 4; i++) {
		int nx = a + dx[i];
		int ny = b + dy[i];
		
		if(nx < 0 || nx >= n) continue;
		if(ny < 0 || ny >= m) continue;
		if(chk[nx][ny]) continue;
		
		chk[nx][ny] = true;
		rec(nx, ny, sum + arr[nx][ny], k+1);
		chk[nx][ny] = false;
	}
}

void cal(int a, int b) {
	for(int i = 0; i < 4; i++) {
		int sum = 0;
		bool valid = false;
		for(int j = 0; j < 4; j++) {
			int x = a + tet[i][j][0];
			int y = b + tet[i][j][1];
			if(x < 0 || x >= n || y < 0 || y >= m) {
				valid = true;
				break;
			}
			sum += arr[x][y];
		}
		if(!valid) ans = max(ans, sum);
	}
} 

void solve() {
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			chk[i][j] = true;
			rec(i, j, arr[i][j], 1);
			chk[i][j] = false;
			cal(i, j);
		}
	}
	cout << ans;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
// AM 01:53
