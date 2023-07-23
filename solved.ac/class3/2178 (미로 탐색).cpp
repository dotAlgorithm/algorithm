#include <bits/stdc++.h>

using namespace std;

int n, m;
int arr[101][101];
bool visited[101][101];

void input() {
	cin >> n >> m;
	for(int i =0 ; i<n; i++){
		string s;
		cin >> s;
		for(int j = 0; j<m; j++) {
			arr[i][j] = s[j]-'0';
		}
	}
}

void bfs() {
	queue<pair<int, int> > q;
	q.push({0, 0});
	visited[0][0] = true;
	int dx[4] = {1,-1,0,0};
	int dy[4] = {0,0,1,-1};
	
	while(!q.empty()) {
		int x = q.front().first;
		int y = q.front().second; q.pop();
		for(int i = 0; i<4; i++) {
			int nx = x+dx[i]; int ny = y + dy[i];
			if(nx < 0 || nx >=n) continue;
			if(ny < 0 || ny >=m) continue;
			if(arr[nx][ny] == 0) continue;
			if(!visited[nx][ny]) {
				q.push({nx, ny});
				visited[nx][ny] = true;
				arr[nx][ny] = arr[x][y]+1;
			}
		}
	}
	cout << arr[n-1][m-1];
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(NULL);
	
	input();
	bfs();
	return 0;
}
