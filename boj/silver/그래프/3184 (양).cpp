#include <bits/stdc++.h>

using namespace std;

int n, m;
char arr[251][251];
bool visited[251][251];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, -1, 1};
int allWolf, allSheep;

void input() {
	cin >> n >> m;
	for(int i = 0; i<n; i++) {
		string s;
		cin >> s;
		for(int j = 0; j<m; j++) {
			arr[i][j] = s[j];			
		}
	}
}

void bfs(int i, int j) {
	queue<pair<int, int> > q;
	q.push({i, j});
	visited[i][j] = true;
	
	int wolf = 0;
	int sheep = 0;
	
	while(!q.empty()) {
		int x = q.front().first;
		int y = q.front().second; q.pop();
		if(arr[x][y] == 'v') wolf++;
		if(arr[x][y] == 'o') sheep++;
		
		for(int k = 0; k<4; k++) {
			int nx = x+dx[k]; int ny = y+dy[k];
			if(nx < 0 || nx >= n) continue;
			if(ny < 0 || ny >= m) continue;
			if(arr[nx][ny] == '#') continue;
			if(!visited[nx][ny]) {
				q.push({nx, ny});
				visited[nx][ny] = true;
			}
		}
	}
	if(wolf>=sheep) allWolf += wolf;
	else allSheep += sheep;
}

void solve() {
	for(int i = 0; i<n; i++) {
		for(int j = 0; j<m; j++) {
			if(arr[i][j] != '#' && !visited[i][j]) {
				bfs(i, j);
			}
		}
	}
	cout << allSheep << " " << allWolf;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	
	input();
	solve();
	
	return 0;
}
