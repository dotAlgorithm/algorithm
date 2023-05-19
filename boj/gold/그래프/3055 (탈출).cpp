#include <bits/stdc++.h>

using namespace std;

int n, m;
int graph[51][51];
bool visited[51][51];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, -1, 1};
queue<pair<int, int> > water;
pair<int, int> terminal, hog;

void input() {
	cin >> n >> m;
	for(int i = 0; i<n; i++) {
		string s;
		cin >> s;
		for(int j = 0; j<s.size(); j++) {
			if(s[j]=='X' || s[j] == 'D') graph[i][j] = -1;
			else graph[i][j] = 0;
			if(s[j] == 'D') terminal = {i, j};
			if(s[j] == 'S') hog = {i, j};
			if(s[j] == '*') water.push({i, j});
		}
	}
}

void bfs_water() {
	graph[terminal.first][terminal.second] = -1;
	while(!water.empty()) {
		int x = water.front().first;
		int y = water.front().second; 
		water.pop();
		visited[x][y] = true;
		for(int i = 0; i<4; i++) {
			int nx = x+dx[i];
			int ny = y+dy[i];
			if(nx >= n || nx < 0) continue;
			if(ny >= m || ny < 0) continue;
			if(graph[nx][ny] == -1) continue;
			if(visited[nx][ny]) continue;
			visited[nx][ny] = true;
			graph[nx][ny] = graph[x][y] + 1;
			water.push({nx, ny});
		}
	}	
}

void bfs_hog() {
	queue<pair<int, int> > q;
	q.push(hog);
	graph[terminal.first][terminal.second] = 255;
	graph[hog.first][hog.second] = 0;
	visited[hog.first][hog.second] = true;
	
	while(!q.empty()) {
		int x = q.front().first;
		int y = q.front().second; q.pop();
		for(int i = 0; i<4; i++) {
			int nx = x+dx[i]; int ny = y + dy[i];
			if(nx >= n || nx < 0) continue;
			if(ny >= m || ny < 0) continue;
			if(graph[nx][ny] == -1) continue;
			if(visited[nx][ny] && graph[nx][ny] <= graph[x][y]+1) continue;
			graph[nx][ny] = graph[x][y] + 1;
			visited[nx][ny] = true;
			q.push({nx, ny});
		}		
	}
}

void print() {
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<m; j++) {
			cout << graph[i][j] << " ";
		}
		cout << "\n";
	}
}
void solve() {
	bfs_water();
	//print();
	bfs_hog();
	//print();
	if(graph[terminal.first][terminal.second] == 255) cout << "KAKTUS";
	else cout << graph[terminal.first][terminal.second];
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
