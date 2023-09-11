// acmicpc 16929
// authored by jihwankim
// code.plus
// 23-09-10 AM 07:20

#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<string> arr;
bool visited[55][55];

void input() {
	cin >> n >> m;
	for(int i = 0; i<n; i++) {
		string s;
		cin >> s;
		arr.push_back(s);
	}
}

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

bool chk(int a, int b, int px, int py, char color) {
	for(int i = 0; i < 4; i++) {
		int nx = a + dx[i];
		int ny = b + dy[i];
		if((nx < 0 || nx >= n) || (ny < 0 || ny >= m)) continue;
		if(arr[nx][ny] != color || (nx == px && ny == py)) continue;
		if(visited[nx][ny]) return true;
		visited[nx][ny] = true;
		if(chk(nx, ny, a, b, color)) return true;
	}
	return false;
}

void solve() {
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<m; j++) {
			if(!visited[i][j]) {
				visited[i][j] = true;
				if(chk(i, j, 0, 0, arr[i][j])) {
					cout << "Yes";
					return ;
				}
			}
		}
	}
	cout << "No";
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
// AM 07:33
