// acmicpc 4963
// authored by jihwankim
// code.plus
// 23-09-10 AM 03:38
#include <bits/stdc++.h>

using namespace std;

int w, h;
int arr[55][55];
int dx[8] = {0, 1, 0, -1, 1, 1, -1, -1};
int dy[8] = {-1, 0, 1, 0, 1, -1, 1, -1};

bool input() {
	cin >> w >> h;
	if(w == 0 && h == 0) return false;
	for(int i = 0; i < h; i++) {
		for(int j = 0; j < w; j++) {
			cin >> arr[i][j];
		}
	}
	return true;
}

void bfs(int a, int b) {
	queue<pair<int, int>> q;
	q.push({a, b});
	arr[a][b] = 0;
	
	while(!q.empty()) {
		int x = q.front().first;
		int y = q.front().second; q.pop();
		
		for(int i = 0; i<8; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if(nx < 0 || nx >= h) continue;
			if(ny < 0 || ny >= w) continue;
			if(arr[nx][ny] == 0) continue;
			arr[nx][ny] = 0;
			q.push({nx, ny});
		}
	}	
}

void solve() {
	int cnt = 0;
	
	for(int i = 0; i<h; i++) {
		for(int j = 0; j<w; j++) {
			if(arr[i][j] == 1) {
				bfs(i, j);
				cnt++;
			}
		}
	}
	cout << cnt << "\n";
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	while(input()) solve();
	
	return 0;
}
// AM 03:46
