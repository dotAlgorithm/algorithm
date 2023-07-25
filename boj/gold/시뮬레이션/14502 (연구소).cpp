#include <bits/stdc++.h>

using namespace std;

int n, m;
int lab[9][9];
int zero;
int minCnt = INT_MAX;
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};

void input() {
	cin >> n >> m;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j<m; j++) {
			cin >> lab[i][j];
			if(lab[i][j] == 0) zero++;
		}
	} 
	zero -= 3;
}

int bfs(int a, int b, bool (*visit)[9]) {
	queue<pair<int, int> > q;
	q.push({a, b});
	visit[a][b] = true;
	int cnt = 0;
	
	while(!q.empty()) {
		int x = q.front().first;
		int y = q.front().second; q.pop();
		for(int i = 0; i<4; i++) {
			int nx = x+dx[i];
			int ny = y+dy[i];
			if(nx < 0 || nx >=n) continue;
			if(ny < 0 || ny >=m) continue;
			if(!visit[nx][ny] && lab[nx][ny] == 0) {
				visit[nx][ny] = true;
				cnt++;
				q.push({nx, ny});
			}
		}
	}
	/*
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<m; j++) {
			cout << visit[i][j] << " ";
		}
		cout << "\n";
	}
	cout << cnt <<  ", visit-----\n";*/
	return cnt;
} 

void solve(int key, bool visit[][9]) {
	if(key == 3) {/*
		for(int i = 0; i < n; i++) {
			for(int j = 0; j<m; j++) {
				cout << "[" << lab[i][j] << "]";
			}
			cout << "\n";
		} 
		cout << "\n\n";*/
		int cnt = 0;
		bool visited[9][9] = {};
		for(int i = 0; i<n; i++) {
			for(int j = 0; j<m; j++) {
				if(lab[i][j] == 2) {
					cnt+=bfs(i, j, visited);
				}
			}
		}
		minCnt = min(minCnt, cnt);
		return;
	}
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<m; j++) {
			if(visit[i][j]) continue;
			visit[i][j] = true;
			if(lab[i][j] == 0) {
				lab[i][j] = 1;
				//cnt++;
				solve(key+1, visit);
				lab[i][j] = 0;
				visit[i][j] = false;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	bool visited[9][9] = {};
	
	input();
	solve(0, visited);
	cout << zero - minCnt;
	
	return 0;
}
