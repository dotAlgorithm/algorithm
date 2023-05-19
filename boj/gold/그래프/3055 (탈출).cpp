#include <bits/stdc++.h>

using namespace std;

<<<<<<< HEAD
int r, c;
int arr[51][51];
bool visited[51][51];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, -1, 1};

pair<int, int> start;

void input() {
	cin >> r >> c;
	for(int i = 0; i<r; i++) {
		string s;
		cin >> s;
		for(int j = 0; j<c; j++) {
			if(s[j] == 'D') arr[i][j] = 2;
			else if(s[j] == '.') arr[i][j] = 0;
			else if(s[j] == '*') arr[i][j] = -1;
			else if(s[j] == 'X') arr[i][j] = -2;
			else {
				start = {i, j};
				arr[i][j] = 1;
			}
=======
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
>>>>>>> c19c37cc2b4d34341e7cd72e97cc8c7ad787fcf3
		}
	}
}

<<<<<<< HEAD
void water() {
	for(int i = 0; i<r; i++) {
		for(int j = 0; j<c; j++) {
			if(arr[i][j] == -1) {
				for(int k = 0; k<4; k++) {
					int ni = i+dx[k]; int nj = j+dy[k]; 
					if(ni < 0 || ni >= r) continue;
					if(nj < 0 || nj >= c) continue;
					if(!visited[ni][nj] && arr[ni][nj] == 0) {
						visited[ni][nj] = true;
					}
				}
			}
		}
	}
}

void bfs() {
	queue<pair<int, int> > q;
	q.push(start);
	
	while(!q.empty()) {
		water();
		int x = q.front().first;
		int y = q.front().second; q.pop();
		for(int i = 0; i<4; i++) {
			int nx = x+dx[i]; int ny = y+dy[i];
			if(nx < 0 || nx >= r) continue;
			if(ny < 0 || ny >= c) continue;
			
		}
		
	} 
=======
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
>>>>>>> c19c37cc2b4d34341e7cd72e97cc8c7ad787fcf3
}

int main() {
	ios_base::sync_with_stdio(0);
<<<<<<< HEAD
	cin.tie(NULL);	
=======
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
>>>>>>> c19c37cc2b4d34341e7cd72e97cc8c7ad787fcf3
}
