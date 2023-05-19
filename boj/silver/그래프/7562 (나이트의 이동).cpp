#include <bits/stdc++.h>

using namespace std;

int t, n;
int dx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};
pair<int, int> s, e;

int** input() {
	cin >> n;
	int **arr = new int*[n];
	for(int i = 0; i<n; i++) {
		arr[i] = new int[n];
		for(int j = 0; j<n; j++) {
			arr[i][j] = 0;
		}
	}
	int a, b;
	
	cin >> a >> b;
	s = {a, b};
	
	cin >> a >> b;
	e = {a, b};
	return arr;
}

bool** nvisit() {
	bool** visited = new bool*[n];
	for(int i = 0; i<n; i++) {
		visited[i] = new bool[n];
		for(int j = 0; j<n; j++) {
			visited[i][j] = false;
		}
	} 
	return visited;
}

void deleteVisit(bool** visited) {
	for(int i = 0; i<n; i++) delete[] visited[i];
	delete[] visited;
}

void bfs(int i, int j, int** arr){
	bool** visited = nvisit();
	queue<pair<int, int> > q;
	q.push({i, j});
	visited[i][j] = true;
	
	while(!q.empty()) {
		int x = q.front().first;
		int y = q.front().second; q.pop();
		for(int i = 0; i<8; i++) {
			int nx = x+dx[i]; int ny = y+dy[i];
			if(nx < 0 || nx >= n) continue;
			if(ny < 0 || ny >= n) continue;
			if(visited[nx][ny]) continue;
			visited[nx][ny] = true;
			q.push({nx, ny});
			if(nx == e.first && ny == e.second){
				while(!q.empty()) q.pop();
				cout << arr[x][y]+1 << "\n";
			}
			else arr[nx][ny] = arr[x][y]+1;
		}
	}
	
	deleteVisit(visited);	
} 

void solve(int** arr){
	if(s.first == e.first && s.second == e.second) cout << 0 << "\n";
	else bfs(s.first, s.second, arr);
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	cin >> t;
	while(t--) {
		int** arr = input();
		
		solve(arr); 
		
		for(int i = 0; i<n; i++) delete[] arr[i];
		delete[] arr;
	}
	
	return 0;
}
