#include <bits/stdc++.h>

using namespace std;

int n, m, k;
int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};
void bfs(pair<int, int> xy){
	queue<pair<int, int> > q;
	visited[xy.first][xy.second]= true;
	q.push({xy.first, xy.second}); 
	while(!q.empty()){
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		visited[x][y] = true;
		graph[x][y] = -1;
		for(int i = 0; i<4; i++){
			int nx = x+dx[i];
			int ny = y+dy[i];
			if(nx < 0 || ny < 0 || nx >= n || ny >=n) continue;
			if(visited[nx][ny] || !graph[nx][ny]) continue;
			visited[nx][ny] = true;
			q.push({nx, ny});
		}
	} 
}

int main() {
	int t;
	cin >> t;
	for(int tc = 0; tc<t; tc++){
		int graph[51][51]={0,};
		cin >> m >> n >> k;
		int cnt = 0;
		for(int i=0;i<k;i++){
			int a, b;
			cin >> a >> b;
			graph[a][b] = 1;
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				//if(graph[i][j]==1) {
				//	cnt++;
				//	bfs({i, j});
				//}
				cout << graph[i][j] << " ";
			}
			cout << "\n";
		}	
		
		cout << cnt << "\n";
	}
	
	return 0;
}
