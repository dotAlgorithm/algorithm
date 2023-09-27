// acmicpc 1987
// authored by jihwankim
// code.plus
// 23-09-27 PM 01:20
#include <bits/stdc++.h>

using namespace std;

int n, m;
char arr[20][20];
bool visited[20][20];
bool chk[26];
int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

void input() {
	cin >> n >> m;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
}

int solve(int x, int y, int k) {
	if(visited[x][y]) return k-1;
	if(chk[arr[x][y]-'A']) return k-1;
	visited[x][y] = true;
	chk[arr[x][y]-'A'] = true;

	int cnt = 0;
	for(int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if(nx < 0 || nx >= n) continue;
		if(ny < 0 || ny >= m) continue;
		cnt = max(cnt, solve(nx, ny, k+1));
	}
	chk[arr[x][y]-'A'] = false;
	visited[x][y] = false;
	return cnt;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	cout << solve(0, 0, 1);
	
	return 0;
}
// PM 01:35
