#include <bits/stdc++.h>

using namespace std;

int n, m;
int arr[1001][1001];

pair<int, int> start;

int dx[] = {0,1,0,-1};
int dy[] = {1,0,-1,0};

void input() {
	cin >> n >> m;
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<m; j++) {
			cin >> arr[i][j];
			if(arr[i][j] == 2) start = {i, j};
			arr[i][j] *= (-1);
		}
	}
}

void solve() {
	queue<pair<int, int> > q;
	q.push(start);
	arr[start.first][start.second] = 0;
	
	while(!q.empty()) {
		int x = q.front().first;
		int y = q.front().second; q.pop();
		
		for(int i = 0; i<4; i++) {
			int nx = x+dx[i];
			int ny = y+dy[i];
			
			if(nx < 0 || nx >= n) continue;
			if(nx < 0 || ny >= m) continue;
			if(arr[nx][ny] >= 0) continue;
			
			arr[nx][ny] = arr[x][y] + 1;
			q.push({nx, ny});
		}
	}
	
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<m; j++) {
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
