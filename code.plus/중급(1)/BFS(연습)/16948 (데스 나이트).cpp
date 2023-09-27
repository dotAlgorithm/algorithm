// acmicpc 16948
// authored by jihwankim
// code.plus
// 23-09-27 PM 04:22
#include <bits/stdc++.h>
#define x first
#define y second

using namespace std;

int n, r1, c1, r2, c2;
int arr[200][200];
bool visited[200][200];
int dx[] = {-2, -2, 0, 0, 2, 2};
int dy[] = {-1, 1, -2, 2, -1, 1};

void input() {
	cin >> n >> r1 >> c1 >> r2 >> c2;
}

void solve() {
	queue<pair<int, int>> q;
	q.push({r1, c1});
	visited[r1][c1] = true;
	
	while(!q.empty()) {
		int x = q.front().x;
		int y = q.front().y; q.pop();
		
		for(int i = 0; i < 6; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if(nx < 0 || nx >= 200) continue;
			if(ny < 0 || ny >= 200) continue;
			if(visited[nx][ny]) continue;
			visited[nx][ny] = true;
			arr[nx][ny] = arr[x][y] + 1;
			q.push({nx, ny});
 		}
	}
	
	cout << (arr[r2][c2] ? arr[r2][c2] : -1);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
// PM 04:28
