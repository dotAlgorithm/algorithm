#include <bits/stdc++.h>

using namespace std;

int n, m, dfs_cnt, bfs_cnt;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {-1, 0, 1, 0};

void bfs(int **arr) {
	int x, y, nx, ny;
	queue<pair<int, int> > q;
	q.push({0, 0});
	while(!q.empty()){
		x = q.front().first; 
		y = q.front().second;
		q.pop();
		for(int i =0;i<4; i++){
			int nx = x+dx[i];
			int ny = y+dy[i];
			if(nx<0 || nx>=n || ny<0 || ny>=m ) continue;
			if(arr[nx][ny]==1) {
				arr[nx][ny] = arr[x][y]+1;
				q.push({nx, ny});
			}		
		}
	}
}
int main(){
	cin.tie(NULL);
	
	cin >> n >> m;
	
	int **arr = new int*[n];
	for(int i = 0; i<n; i++){
		arr[i] = new int[m];
		for(int j = 0; j<m; j++) scanf("%1d", &arr[i][j]);
	}
	bfs(arr);
	
	cout << arr[n-1][m-1];
	for(int i =0; i<n ;i++) delete[] arr[i];
	delete[] arr;
	
	return 0;
}
